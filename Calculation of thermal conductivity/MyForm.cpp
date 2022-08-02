#include "MyForm.h"
#include <map>
#include <vector>

#using<system.dll>

using namespace System;
using namespace System::Windows::Forms;
using namespace System::IO;

[System::Runtime::InteropServices::DllImport("user32.dll")]
bool SetProcessDPIAware();

[STAThreadAttribute]
void main() {
    if (Environment::OSVersion->Version->Major >= 6)
        SetProcessDPIAware();

    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(true);

    Calculationofthermalconductivity::MyForm form;
    Application::Run(% form);
}
System::Void Calculationofthermalconductivity::MyForm::buttonBuild_Click(System::Object^ sender, System::EventArgs^ e)
{
	const int mf = 500;

	if (tabControl1->SelectedIndex == 0) {
        if (textBox_t->Text == "" || textBox_L->Text == "" || textBox_Lamda->Text == "" ||
            textBox_p->Text == "" || textBox_c->Text == "" || textBox_T0->Text == "") {
            MessageBox::Show("Не все данные введены!","Внимание!");
            return;
        }

        // Пластина
        int i, j;
        double* T = new double[mf];
        double* alfa = new double[mf];
        double* beta = new double[mf];
        double ai, bi, ci, fi;
        double a, lambda, ro, c, h = 0, tau;
        double T0, L, t_end, time;

        double TempConstLeft = 0, TempConstRight = 0;
        double qLeft = 0, qRight = 0;
        double kapaLeft = 0, kapaRight = 0, TeLeft = 0, TeRight = 0;

        // Кол-во пространственных узлов
        const int N = 100;

        // Ввод данных
        t_end = Convert::ToDouble(textBox_t->Text);
        L = Convert::ToDouble(textBox_L->Text);
        lambda = Convert::ToDouble(textBox_Lamda->Text);
        ro = Convert::ToDouble(textBox_p->Text);
        c = Convert::ToDouble(textBox_c->Text);
        T0 = Convert::ToDouble(textBox_T0->Text);

        // Инциализация левой границы
        if (tabControlLeftBorder->SelectedIndex == 0)
        {
            TempConstLeft = Convert::ToDouble(textBox_TempConstLeft->Text);
        }
        else if (tabControlLeftBorder->SelectedIndex == 1)
        {
            qLeft = Convert::ToDouble(textBox_qLeft->Text);
        }
        else
        {
            kapaLeft = Convert::ToDouble(textBox_kapaLeft->Text);
            TeLeft = Convert::ToDouble(textBox_TeLeft->Text);
        }

        // Инциализация правой границы
        if (tabControlRightBorder->SelectedIndex == 0)
        {
            TempConstRight = Convert::ToDouble(textBox_TempConstRight->Text);
        }
        else if (tabControlRightBorder->SelectedIndex == 1)
        {
            qRight = Convert::ToDouble(textBox_qRight->Text);
        }
        else
        {
            kapaRight = Convert::ToDouble(textBox_kapaRight->Text);
            TeRight = Convert::ToDouble(textBox_TeRight->Text);
        }

        h = L / (N - 1);
        a = lambda / (ro * c);
        tau = t_end / 100;
        for (i = 1; i <= N; i++)
        {
            T[i] = T0;
        }
        time = 0;

        while (time < t_end)
        {
            time += tau;
            // Левая граница 
            if (tabControlLeftBorder->SelectedIndex == 0)
            {
                alfa[1] = 0.0;
                beta[1] = TempConstLeft;
            }
            else if (tabControlLeftBorder->SelectedIndex == 1)
            {
                alfa[1] = 2 * a * tau / (2.0 * a * tau + h * h);
                beta[1] = (h * h * T[1] + 2.0 * a * tau * h * qLeft / lambda) / (2.0 * a * tau + h * h);
            }
            else
            {
                alfa[1] = 2.0 * a * tau * lambda / (2.0 * a * tau * (lambda + kapaLeft * h) + lambda * h * h);
                beta[1] = (lambda * h * h * T[1] + 2.0 * a * tau * kapaLeft * h * TeLeft) / (2.0 * a * tau * (lambda + kapaLeft * h) + lambda * h * h);
            }

            for (i = 2; i <= N - 1; i++)
            {
                ai = lambda / (h * h);
                bi = 2.0 * lambda / (h * h) + ro * c / tau;
                ci = lambda / (h * h);
                fi = -ro * c * T[i] / tau;
                alfa[i] = ai / (bi - ci * alfa[i - 1]);
                beta[i] = (ci * beta[i - 1] - fi) / (bi - ci * alfa[i - 1]);
            }

            // Правая граница
            if (tabControlRightBorder->SelectedIndex == 0)
            {
                T[N] = TempConstRight;
            }
            else if (tabControlRightBorder->SelectedIndex == 1)
            {
                T[N] = (2 * a * tau * lambda * beta[N - 1] - 2 * a * tau * h * qRight + h * h * lambda * T[N]) / (lambda * h * h + 2 * a * tau * lambda * (1 - alfa[N - 1]));
            }
            else
            {
                T[N] = (lambda * h * h * T[N] + 2.0 * a * tau * (lambda * beta[N - 1] + kapaRight * h * TeRight)) / (lambda * h * h + 2.0 * a * tau * (lambda * (1 - alfa[N - 1]) + kapaRight * h));
            }
            for (i = N - 1; i >= 1; i--)
                T[i] = alfa[i] * T[i + 1] + beta[i];
        }



        // Вывод результатов
        List<double>^ keys = gcnew List<double>();
        List<double>^ values = gcnew List<double>();

        for (i = 1; i <= N; i++)
        {

            keys->Add(h * (i - 1));
            values->Add(T[i]);
        }

        GraphPane^ myPane = gcnew GraphPane();

        Rectangle r;// = new Rectangle();
        r.Width = zedGraphControl1->Width;
        r.Height = zedGraphControl1->Height;
        myPane->Rect = r;

        zedGraphControl1->GraphPane = myPane;

        // Запрет на самосогласования и выход за установленные границы
        myPane->XAxis->Scale->MaxGrace = 0;
        myPane->XAxis->Scale->MinGrace = 0;
        myPane->YAxis->Scale->MaxGrace = 0;
        myPane->YAxis->Scale->MinGrace = 0;

        // 
        /* if (metroToggle1->Checked)
        {
            myPane.XAxis.Scale.Min = Convert.ToDouble(metroTextBox17.Text);
            myPane.XAxis.Scale.Max = Convert.ToDouble(metroTextBox16.Text);
            myPane.YAxis.Scale.Min = Convert.ToDouble(metroTextBox15.Text);
            myPane.YAxis.Scale.Max = Convert.ToDouble(metroTextBox18.Text);
        }*/

        myPane->XAxis->Title->Text = "Координата X (Толщина М)";
        myPane->YAxis->Title->Text = "Координата Y (Температура C)";
        myPane->Title->Text = "График распределения температуры";
        myPane->Fill = gcnew Fill(Color::White, Color::LightSkyBlue, 45.0f);
        myPane->Chart->Fill->Type = FillType::None;
        myPane->Legend->Position = LegendPos::Float;
        myPane->Legend->IsHStack = false;

        LineItem^ myCurve = myPane->AddCurve(t_end.ToString() + " сек.", keys->ToArray(), values->ToArray(), Color::Red, SymbolType::None);
        myCurve->Symbol->Fill = gcnew Fill(Color::White);

        zedGraphControl1->AxisChange();
        zedGraphControl1->Invalidate();
	}
    else if (tabControl1->SelectedIndex == 1) {
        if (textBox_t_end->Text == "" || textBox_L1->Text == "" || textBox_lambda1->Text == "" ||
            textBox_ro1->Text == "" || textBox_c1->Text == "" || textBox_lambda2->Text == "" ||
            textBox_ro2->Text == "" || textBox_c2->Text == "" || textBox_T01->Text == "" ||
            textBox_Tc->Text == "" || textBox_Tfr->Text == "" || textBox_Qfr->Text == "" || textBox_w->Text == "") {
            MessageBox::Show("Не все данные введены!", "Внимание!");
            return;
        }

        double eps = 1e-5;
        //eps = 0.01;

        int i, j, k, N;
        double* T = new double[mf];
        double* Tn = new double[mf];
        double* Ts = new double[mf];
        double* alfa = new double[mf];
        double* beta = new double[mf];
        double ai = 0, bi = 0, ci = 0, fi = 0, max = 0;
        double a1 = 0, lambda1 = 0, ro1 = 0, c1 = 0;
        double a2 = 0, lambda2 = 0, ro2 = 0, c2 = 0;
        double T0 = 0, Tfr = 0, Tc, h = 0, tau = 0;
        double Qfr = 0, w = 0, L, t_end = 0, time = 0;

        // Кол-во пространственных узлов
        N = 100;

        // Ввод данных
        t_end = Convert::ToDouble(textBox_t_end->Text);
        L = Convert::ToDouble(textBox_L1->Text);
        lambda1 = Convert::ToDouble(textBox_lambda1->Text);
        ro1 = Convert::ToDouble(textBox_ro1->Text);
        c1 = Convert::ToDouble(textBox_c1->Text);
        lambda2 = Convert::ToDouble(textBox_lambda2->Text);
        ro2 = Convert::ToDouble(textBox_ro2->Text);
        c2 = Convert::ToDouble(textBox_c2->Text);
        T0 = Convert::ToDouble(textBox_T01->Text);
        Tc = Convert::ToDouble(textBox_Tc->Text);
        Tfr = Convert::ToDouble(textBox_Tfr->Text);
        Qfr = Convert::ToDouble(textBox_Qfr->Text);
        w = Convert::ToDouble(textBox_w->Text);

        // Определяем расчетный шаг сетки по пространственной координате
        h = L / (N - 1);

        // Определяем коэффициенты температуропроводности
        a1 = lambda1 / (ro1 * c1);
        a2 = lambda2 / (ro2 * c2);

        // Определяем поле температуры в начальный момент времени
        time = 0;

        for (i = 1; i <= N; i++)
        {
            T[i] = T0;
        }
        
        // Определяем положение границы фазового перехода
        k = 1;

        // Проводим интегрирование нестационарного уравнения теплопроводности
        while (time < t_end)
        {
            // Запоминаем поле температуры на предыдущем временном слое
            for (i = 1; i <= N; i++)
            {
                Tn[i] = T[i];
            }
            k++;
            do
            {
                // Запоминаем поле температуры на предыдущей итерации
                for (i = 1; i <= N; i++)
                {
                    Ts[i] = T[i];

                }

                // Определяем соответствующий шаг по времени 
                tau = (2.0 * a1 * a2 * Qfr * w * 0.5 * (ro1 + ro2) * (h * h) - (h * h) * (lambda1 * a2 + lambda2
                    * a1) * (Tfr - Tn[k])) / (2.0 * a1 * a2 * (lambda1 * (Tfr - T[k - 1]) - lambda2
                        * (T[k + 1] - Tfr)));

                // Определяем начальные прогоночные коэффициенты на основе левого граничного условия
                alfa[1] = 0.0;
                beta[1] = Tc; 

                for (i = 2; i <= k - 1; i++)
                {
                    ai = a1 / (h * h);
                    bi = 2.0 * a1 / (h * h) + 1.0 / tau;
                    ci = a1 / (h * h);
                    fi = -Tn[i] / tau;
                    alfa[i] = ai / (bi - ci * alfa[i - 1]);
                    beta[i] = (ci * beta[i - 1] - fi) / (bi - ci * alfa[i - 1]);
                }

                // Определяем значение температуры на границе фазового перехода
                T[k] = Tfr;

                for (i = k - 1; i >= 1; i--)
                {
                    T[i] = alfa[i] * T[i + 1] + beta[i];
                }

                alfa[k] = 0.0;
                beta[k] = Tfr;

                for (i = k + 1; i <= N - 1; i++)
                {
                    ai = a2 / (h * h);
                    bi = 2.0 * a2 / (h * h) + 1.0 / tau;
                    ci = a2 / (h * h);
                    fi = -Tn[i] / tau;
                    alfa[i] = ai / (bi - ci * alfa[i - 1]);
                    beta[i] = (ci * beta[i - 1] - fi) / (bi - ci * alfa[i - 1]);

                }

                // Определяем значение температуры на правой границе на основе граничного условия
                T[N] = (2.0 * a2 * tau * beta[N - 1] + (h * h) * Tn[N]) / (2.0 * a2 * tau * (1.0 - alfa[N - 1]) + (h * h));

                for (i = N - 1; i >= k; i--)
                {
                    T[i] = alfa[i] * T[i + 1] + beta[i];
                }

                max = Math::Abs(T[1] - Ts[1]);

                for (i = 2; i < N; i++)
                    if (max < Math::Abs(T[i] - Ts[i]))
                    {
                        max = Math::Abs(T[i] - Ts[i]);

                    }
            } while (max > eps);
            time = time + tau;
        }

        // Вывод результатов


            // Вывод результатов
        List<double>^ keys = gcnew List<double>();
        List<double>^ values = gcnew List<double>();

        for (i = 1; i <= N; i++)
        {

            keys->Add(h * (i - 1));
            values->Add(T[i] - 273);
        }

        GraphPane^ myPane = gcnew GraphPane();

        Rectangle r;// = new Rectangle();
        r.Width = zedGraphControl1->Width;
        r.Height = zedGraphControl1->Height;
        myPane->Rect = r;

        zedGraphControl1->GraphPane = myPane;

        // Запрет на самосогласования и выход за установленные границы
        myPane->XAxis->Scale->MaxGrace = 0;
        myPane->XAxis->Scale->MinGrace = 0;
        myPane->YAxis->Scale->MaxGrace = 0;
        myPane->YAxis->Scale->MinGrace = 0;

        // 
        /* if (metroToggle1->Checked)
        {
            myPane.XAxis.Scale.Min = Convert.ToDouble(metroTextBox17.Text);
            myPane.XAxis.Scale.Max = Convert.ToDouble(metroTextBox16.Text);
            myPane.YAxis.Scale.Min = Convert.ToDouble(metroTextBox15.Text);
            myPane.YAxis.Scale.Max = Convert.ToDouble(metroTextBox18.Text);
        }*/

        myPane->XAxis->Title->Text = "Координата X (Толщина М)";
        myPane->YAxis->Title->Text = "Координата Y (Температура C)";
        myPane->Title->Text = "График распределения температуры";
        myPane->Fill = gcnew Fill(Color::White, Color::LightSkyBlue, 45.0f);
        myPane->Chart->Fill->Type = FillType::None;
        myPane->Legend->Position = LegendPos::Float;
        myPane->Legend->IsHStack = false;

        LineItem^ myCurve = myPane->AddCurve(t_end.ToString() + " сек.", keys->ToArray(), values->ToArray(), Color::Red, SymbolType::None);
        myCurve->Symbol->Fill = gcnew Fill(Color::White);

        zedGraphControl1->AxisChange();
        zedGraphControl1->Invalidate();
    }
    else if (tabControl1->SelectedIndex == 2) {

    int N = 100;
    int i, j;
    double* T = new double[mf];
    double h = 0;
    double r1, r2, r3, r4, ts;
    double T4, T3, T2, T1, Tw;


    // Ввод данных
    ts = Convert::ToDouble(textBox_ts->Text);
    r1 = Convert::ToDouble(textBox_r1->Text);
    r2 = Convert::ToDouble(textBox_r2->Text);
    r3 = Convert::ToDouble(textBox_r3->Text);
    r4 = Convert::ToDouble(textBox_r4->Text);

    h = (r2 - r1) / (N - 1);

    T4 = ts;
    T3 = 327.5;
    T2 = 324.988333029047;
    T1 = 319.793241143219;
    Tw = 312.097702358571;
    double temp = r1;
    for (i = 1; i <= N; i++) {
        T[i] = T1 - (T1 - T2) * log(temp / r1) / log(r2 / r1);
        temp += h;
    }
    temp = r2;
    double h2 = (r3 - r2) / (N - 1);
    for (i = 1; i <= N; i++) {
        T[i + N] = T2 - (T2 - T3) * log(temp / r2) / log(r3 / r2);
        temp += h2;
    }
    temp = r3;
    double h3 = (r4 - r3) / (N - 1);
    for (i = 1; i <= N; i++) {
        T[i + 2 * N] = T3 - (T3 - T4) * log(temp / r3) / log(r4 / r3);
        temp += h3;
    }
    // Вывод результатов
    List<double>^ keys = gcnew List<double>();
    List<double>^ values = gcnew List<double>();

    for (i = 1; i <= N; i++)
    {

        keys->Add(r1 + h * (i - 1));
        values->Add(T[i]);
    }
    for (i = N; i <= 2 * N; i++)
    {

        keys->Add(r2 + h2 * (i - N - 1));
        values->Add(T[i]);
    }
    for (i = 2 * N; i <= 3 * N; i++)
    {
        keys->Add(r3 + h3 * (i - 2 * N - 1));
        values->Add(T[i]);
    }
    GraphPane^ myPane = gcnew GraphPane();

    Rectangle r;// = new Rectangle();
    r.Width = zedGraphControl1->Width;
    r.Height = zedGraphControl1->Height;
    myPane->Rect = r;

    zedGraphControl1->GraphPane = myPane;

    // Запрет на самосогласования и выход за установленные границы
    myPane->XAxis->Scale->MaxGrace = 0;
    myPane->XAxis->Scale->MinGrace = 0;
    myPane->YAxis->Scale->MaxGrace = 0;
    myPane->YAxis->Scale->MinGrace = 0;

    // 
    /* if (metroToggle1->Checked)
    {
        myPane.XAxis.Scale.Min = Convert.ToDouble(metroTextBox17.Text);
        myPane.XAxis.Scale.Max = Convert.ToDouble(metroTextBox16.Text);
        myPane.YAxis.Scale.Min = Convert.ToDouble(metroTextBox15.Text);
        myPane.YAxis.Scale.Max = Convert.ToDouble(metroTextBox18.Text);
    }*/

    myPane->XAxis->Title->Text = "Координата X (Толщина М)";
    myPane->YAxis->Title->Text = "Координата Y (Температура C)";
    myPane->Title->Text = "График распределения температуры";
    myPane->Fill = gcnew Fill(Color::White, Color::LightSkyBlue, 45.0f);
    myPane->Chart->Fill->Type = FillType::None;
    myPane->Legend->Position = LegendPos::Float;
    myPane->Legend->IsHStack = false;

    LineItem^ myCurve = myPane->AddCurve("статика", keys->ToArray(), values->ToArray(), Color::Red, SymbolType::None);
    myCurve->Symbol->Fill = gcnew Fill(Color::White);

    zedGraphControl1->AxisChange();
    zedGraphControl1->Invalidate();
    }
}

System::Void Calculationofthermalconductivity::MyForm::выходToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    Application::Exit();
}

System::Void Calculationofthermalconductivity::MyForm::оПрограммеToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    String^ fileName = "..\\Resources\\AboutProgramm.txt";
    try
    {
        StreamReader^ din = File::OpenText(fileName);

        String^ str;
        String^ txt;
        int count = 0;
        while ((str = din->ReadLine()) != nullptr)
        {
            txt += str + "\r\n";
        }

        MessageBox::Show(txt,"О программе!");

        din->Close();
    }
    catch (Exception^ e)
    {
        if (dynamic_cast<FileNotFoundException^>(e))
            MessageBox::Show("Файл не найден!","Вызвано исключение!");
        else
            MessageBox::Show("Проблемы чтения файла!", "Вызвано исключение!");
    }

}
