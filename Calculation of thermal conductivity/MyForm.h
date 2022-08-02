#pragma once

namespace Calculationofthermalconductivity {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Collections::Generic;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace ZedGraph;

	/// <summary>
	/// Ñâîäêà äëÿ MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: äîáàâüòå êîä êîíñòðóêòîðà
			//
		}

	protected:
		/// <summary>
		/// Îñâîáîäèòü âñå èñïîëüçóåìûå ðåñóðñû.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: ZedGraph::ZedGraphControl^ zedGraphControl1;
	protected:
	private: System::Windows::Forms::Label^ label1;

















	private: System::Windows::Forms::Button^ buttonBuild;































	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ îÏðîãðàììåToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ âûõîäToolStripMenuItem;
    private: System::Windows::Forms::TabPage^ tabPage9;
    private: System::Windows::Forms::TextBox^ textBox_ts;

    private: System::Windows::Forms::Label^ label25;
    private: System::Windows::Forms::TabPage^ tabPage2;
    private: System::Windows::Forms::TextBox^ textBox_w;
    private: System::Windows::Forms::TextBox^ textBox_Qfr;
    private: System::Windows::Forms::TextBox^ textBox_Tfr;
    private: System::Windows::Forms::TextBox^ textBox_Tc;
    private: System::Windows::Forms::TextBox^ textBox_T01;
    private: System::Windows::Forms::TextBox^ textBox_c2;
    private: System::Windows::Forms::TextBox^ textBox_ro2;
    private: System::Windows::Forms::TextBox^ textBox_lambda2;
    private: System::Windows::Forms::TextBox^ textBox_c1;
    private: System::Windows::Forms::TextBox^ textBox_ro1;
    private: System::Windows::Forms::TextBox^ textBox_lambda1;
    private: System::Windows::Forms::TextBox^ textBox_L1;
    private: System::Windows::Forms::TextBox^ textBox_t_end;
    private: System::Windows::Forms::Label^ label24;
    private: System::Windows::Forms::Label^ label18;
    private: System::Windows::Forms::Label^ label19;
    private: System::Windows::Forms::Label^ label20;
    private: System::Windows::Forms::Label^ label21;
    private: System::Windows::Forms::Label^ label22;
    private: System::Windows::Forms::Label^ label23;
    private: System::Windows::Forms::Label^ label28;
    private: System::Windows::Forms::Label^ label29;
    private: System::Windows::Forms::Label^ label30;
    private: System::Windows::Forms::Label^ label31;
    private: System::Windows::Forms::Label^ label32;
    private: System::Windows::Forms::Label^ label33;
    private: System::Windows::Forms::TabPage^ tabPage1;
    private: System::Windows::Forms::TabControl^ tabControlRightBorder;
    private: System::Windows::Forms::TabPage^ tabPage6;
    private: System::Windows::Forms::TextBox^ textBox_TempConstRight;
    private: System::Windows::Forms::Label^ label14;
    private: System::Windows::Forms::TabPage^ tabPage7;
    private: System::Windows::Forms::TextBox^ textBox_qRight;
    private: System::Windows::Forms::Label^ label15;
    private: System::Windows::Forms::TabPage^ tabPage8;
    private: System::Windows::Forms::TextBox^ textBox_TeRight;
    private: System::Windows::Forms::Label^ label16;
    private: System::Windows::Forms::TextBox^ textBox_kapaRight;
    private: System::Windows::Forms::Label^ label17;
    private: System::Windows::Forms::TabControl^ tabControlLeftBorder;
    private: System::Windows::Forms::TabPage^ tabPage3;
    private: System::Windows::Forms::TextBox^ textBox_TempConstLeft;
    private: System::Windows::Forms::Label^ label10;
    private: System::Windows::Forms::TabPage^ tabPage4;
    private: System::Windows::Forms::TextBox^ textBox_qLeft;
    private: System::Windows::Forms::Label^ label11;
    private: System::Windows::Forms::TabPage^ tabPage5;
    private: System::Windows::Forms::TextBox^ textBox_TeLeft;
    private: System::Windows::Forms::Label^ label13;
    private: System::Windows::Forms::TextBox^ textBox_kapaLeft;
    private: System::Windows::Forms::Label^ label12;
    private: System::Windows::Forms::Label^ label9;
    private: System::Windows::Forms::Label^ label8;
    private: System::Windows::Forms::TextBox^ textBox_c;
    private: System::Windows::Forms::TextBox^ textBox_p;
    private: System::Windows::Forms::TextBox^ textBox_Lamda;
    private: System::Windows::Forms::TextBox^ textBox_T0;
    private: System::Windows::Forms::TextBox^ textBox_L;
    private: System::Windows::Forms::TextBox^ textBox_t;
    private: System::Windows::Forms::Label^ label7;
    private: System::Windows::Forms::Label^ label6;
    private: System::Windows::Forms::Label^ label5;
    private: System::Windows::Forms::Label^ label4;
    private: System::Windows::Forms::Label^ label3;
    private: System::Windows::Forms::Label^ label2;
    private: System::Windows::Forms::TabControl^ tabControl1;
private: System::Windows::Forms::TextBox^ textBox_r1;

private: System::Windows::Forms::Label^ label35;
private: System::Windows::Forms::TextBox^ textBox_r2;

private: System::Windows::Forms::Label^ label34;
private: System::Windows::Forms::TextBox^ textBox_r3;

private: System::Windows::Forms::Label^ label27;
private: System::Windows::Forms::TextBox^ textBox_r4;

private: System::Windows::Forms::Label^ label26;
private: System::Windows::Forms::Label^ label36;
private: System::Windows::Forms::Label^ label37;
private: System::Windows::Forms::Label^ label38;
private: System::Windows::Forms::Label^ label39;

































































	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Îáÿçàòåëüíàÿ ïåðåìåííàÿ êîíñòðóêòîðà.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Òðåáóåìûé ìåòîä äëÿ ïîääåðæêè êîíñòðóêòîðà — íå èçìåíÿéòå 
		/// ñîäåðæèìîå ýòîãî ìåòîäà ñ ïîìîùüþ ðåäàêòîðà êîäà.
		/// </summary>
		void InitializeComponent(void)
		{
            this->components = (gcnew System::ComponentModel::Container());
            this->zedGraphControl1 = (gcnew ZedGraph::ZedGraphControl());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->buttonBuild = (gcnew System::Windows::Forms::Button());
            this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
            this->îÏðîãðàììåToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->âûõîäToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->tabPage9 = (gcnew System::Windows::Forms::TabPage());
            this->label25 = (gcnew System::Windows::Forms::Label());
            this->textBox_ts = (gcnew System::Windows::Forms::TextBox());
            this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
            this->label33 = (gcnew System::Windows::Forms::Label());
            this->label32 = (gcnew System::Windows::Forms::Label());
            this->label31 = (gcnew System::Windows::Forms::Label());
            this->label30 = (gcnew System::Windows::Forms::Label());
            this->label29 = (gcnew System::Windows::Forms::Label());
            this->label28 = (gcnew System::Windows::Forms::Label());
            this->textBox_t_end = (gcnew System::Windows::Forms::TextBox());
            this->textBox_L1 = (gcnew System::Windows::Forms::TextBox());
            this->textBox_lambda1 = (gcnew System::Windows::Forms::TextBox());
            this->textBox_ro1 = (gcnew System::Windows::Forms::TextBox());
            this->textBox_c1 = (gcnew System::Windows::Forms::TextBox());
            this->textBox_lambda2 = (gcnew System::Windows::Forms::TextBox());
            this->label23 = (gcnew System::Windows::Forms::Label());
            this->label22 = (gcnew System::Windows::Forms::Label());
            this->label21 = (gcnew System::Windows::Forms::Label());
            this->label20 = (gcnew System::Windows::Forms::Label());
            this->label19 = (gcnew System::Windows::Forms::Label());
            this->label18 = (gcnew System::Windows::Forms::Label());
            this->textBox_ro2 = (gcnew System::Windows::Forms::TextBox());
            this->textBox_c2 = (gcnew System::Windows::Forms::TextBox());
            this->textBox_T01 = (gcnew System::Windows::Forms::TextBox());
            this->textBox_Tc = (gcnew System::Windows::Forms::TextBox());
            this->textBox_Tfr = (gcnew System::Windows::Forms::TextBox());
            this->textBox_Qfr = (gcnew System::Windows::Forms::TextBox());
            this->label24 = (gcnew System::Windows::Forms::Label());
            this->textBox_w = (gcnew System::Windows::Forms::TextBox());
            this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->label4 = (gcnew System::Windows::Forms::Label());
            this->label5 = (gcnew System::Windows::Forms::Label());
            this->label6 = (gcnew System::Windows::Forms::Label());
            this->label7 = (gcnew System::Windows::Forms::Label());
            this->textBox_t = (gcnew System::Windows::Forms::TextBox());
            this->textBox_L = (gcnew System::Windows::Forms::TextBox());
            this->textBox_T0 = (gcnew System::Windows::Forms::TextBox());
            this->textBox_Lamda = (gcnew System::Windows::Forms::TextBox());
            this->textBox_p = (gcnew System::Windows::Forms::TextBox());
            this->textBox_c = (gcnew System::Windows::Forms::TextBox());
            this->label8 = (gcnew System::Windows::Forms::Label());
            this->label9 = (gcnew System::Windows::Forms::Label());
            this->tabControlLeftBorder = (gcnew System::Windows::Forms::TabControl());
            this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
            this->label12 = (gcnew System::Windows::Forms::Label());
            this->textBox_kapaLeft = (gcnew System::Windows::Forms::TextBox());
            this->label13 = (gcnew System::Windows::Forms::Label());
            this->textBox_TeLeft = (gcnew System::Windows::Forms::TextBox());
            this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
            this->label11 = (gcnew System::Windows::Forms::Label());
            this->textBox_qLeft = (gcnew System::Windows::Forms::TextBox());
            this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
            this->label10 = (gcnew System::Windows::Forms::Label());
            this->textBox_TempConstLeft = (gcnew System::Windows::Forms::TextBox());
            this->tabControlRightBorder = (gcnew System::Windows::Forms::TabControl());
            this->tabPage8 = (gcnew System::Windows::Forms::TabPage());
            this->label17 = (gcnew System::Windows::Forms::Label());
            this->textBox_kapaRight = (gcnew System::Windows::Forms::TextBox());
            this->label16 = (gcnew System::Windows::Forms::Label());
            this->textBox_TeRight = (gcnew System::Windows::Forms::TextBox());
            this->tabPage7 = (gcnew System::Windows::Forms::TabPage());
            this->label15 = (gcnew System::Windows::Forms::Label());
            this->textBox_qRight = (gcnew System::Windows::Forms::TextBox());
            this->tabPage6 = (gcnew System::Windows::Forms::TabPage());
            this->label14 = (gcnew System::Windows::Forms::Label());
            this->textBox_TempConstRight = (gcnew System::Windows::Forms::TextBox());
            this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
            this->textBox_r4 = (gcnew System::Windows::Forms::TextBox());
            this->label26 = (gcnew System::Windows::Forms::Label());
            this->textBox_r3 = (gcnew System::Windows::Forms::TextBox());
            this->label27 = (gcnew System::Windows::Forms::Label());
            this->textBox_r2 = (gcnew System::Windows::Forms::TextBox());
            this->label34 = (gcnew System::Windows::Forms::Label());
            this->textBox_r1 = (gcnew System::Windows::Forms::TextBox());
            this->label35 = (gcnew System::Windows::Forms::Label());
            this->label36 = (gcnew System::Windows::Forms::Label());
            this->label37 = (gcnew System::Windows::Forms::Label());
            this->label38 = (gcnew System::Windows::Forms::Label());
            this->label39 = (gcnew System::Windows::Forms::Label());
            this->menuStrip1->SuspendLayout();
            this->tabPage9->SuspendLayout();
            this->tabPage2->SuspendLayout();
            this->tabPage1->SuspendLayout();
            this->tabControlLeftBorder->SuspendLayout();
            this->tabPage5->SuspendLayout();
            this->tabPage4->SuspendLayout();
            this->tabPage3->SuspendLayout();
            this->tabControlRightBorder->SuspendLayout();
            this->tabPage8->SuspendLayout();
            this->tabPage7->SuspendLayout();
            this->tabPage6->SuspendLayout();
            this->tabControl1->SuspendLayout();
            this->SuspendLayout();
            // 
            // zedGraphControl1
            // 
            this->zedGraphControl1->AutoSize = true;
            this->zedGraphControl1->Location = System::Drawing::Point(10, 64);
            this->zedGraphControl1->Name = L"zedGraphControl1";
            this->zedGraphControl1->ScrollGrace = 0;
            this->zedGraphControl1->ScrollMaxX = 0;
            this->zedGraphControl1->ScrollMaxY = 0;
            this->zedGraphControl1->ScrollMaxY2 = 0;
            this->zedGraphControl1->ScrollMinX = 0;
            this->zedGraphControl1->ScrollMinY = 0;
            this->zedGraphControl1->ScrollMinY2 = 0;
            this->zedGraphControl1->Size = System::Drawing::Size(593, 606);
            this->zedGraphControl1->TabIndex = 0;
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label1->Location = System::Drawing::Point(188, 30);
            this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(224, 26);
            this->label1->TabIndex = 1;
            this->label1->Text = L"Òåìïåðàòóðíîå ïîëå";
            // 
            // buttonBuild
            // 
            this->buttonBuild->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->buttonBuild->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->buttonBuild->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            this->buttonBuild->Location = System::Drawing::Point(830, 613);
            this->buttonBuild->Margin = System::Windows::Forms::Padding(2);
            this->buttonBuild->Name = L"buttonBuild";
            this->buttonBuild->Size = System::Drawing::Size(317, 58);
            this->buttonBuild->TabIndex = 3;
            this->buttonBuild->Text = L"Ïîñòðîèòü";
            this->buttonBuild->UseVisualStyleBackColor = false;
            this->buttonBuild->Click += gcnew System::EventHandler(this, &MyForm::buttonBuild_Click);
            // 
            // menuStrip1
            // 
            this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
            this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
                this->îÏðîãðàììåToolStripMenuItem,
                    this->âûõîäToolStripMenuItem
            });
            this->menuStrip1->Location = System::Drawing::Point(0, 0);
            this->menuStrip1->Name = L"menuStrip1";
            this->menuStrip1->Padding = System::Windows::Forms::Padding(4, 2, 0, 2);
            this->menuStrip1->Size = System::Drawing::Size(1285, 24);
            this->menuStrip1->TabIndex = 4;
            this->menuStrip1->Text = L"menuStrip1";
            // 
            // îÏðîãðàììåToolStripMenuItem
            // 
            this->îÏðîãðàììåToolStripMenuItem->Name = L"îÏðîãðàììåToolStripMenuItem";
            this->îÏðîãðàììåToolStripMenuItem->Size = System::Drawing::Size(94, 20);
            this->îÏðîãðàììåToolStripMenuItem->Text = L"Î ïðîãðàììå";
            this->îÏðîãðàììåToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::îÏðîãðàììåToolStripMenuItem_Click);
            // 
            // âûõîäToolStripMenuItem
            // 
            this->âûõîäToolStripMenuItem->Name = L"âûõîäToolStripMenuItem";
            this->âûõîäToolStripMenuItem->Size = System::Drawing::Size(54, 20);
            this->âûõîäToolStripMenuItem->Text = L"Âûõîä";
            this->âûõîäToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::âûõîäToolStripMenuItem_Click);
            // 
            // tabPage9
            // 
            this->tabPage9->Controls->Add(this->label39);
            this->tabPage9->Controls->Add(this->label38);
            this->tabPage9->Controls->Add(this->label37);
            this->tabPage9->Controls->Add(this->label36);
            this->tabPage9->Controls->Add(this->textBox_r1);
            this->tabPage9->Controls->Add(this->label35);
            this->tabPage9->Controls->Add(this->textBox_r2);
            this->tabPage9->Controls->Add(this->label34);
            this->tabPage9->Controls->Add(this->textBox_r3);
            this->tabPage9->Controls->Add(this->label27);
            this->tabPage9->Controls->Add(this->textBox_r4);
            this->tabPage9->Controls->Add(this->label26);
            this->tabPage9->Controls->Add(this->textBox_ts);
            this->tabPage9->Controls->Add(this->label25);
            this->tabPage9->Location = System::Drawing::Point(4, 22);
            this->tabPage9->Name = L"tabPage9";
            this->tabPage9->Padding = System::Windows::Forms::Padding(3);
            this->tabPage9->Size = System::Drawing::Size(663, 518);
            this->tabPage9->TabIndex = 2;
            this->tabPage9->Text = L"Îñí. ñòàòèêà";
            this->tabPage9->UseVisualStyleBackColor = true;
            this->tabPage9->Click += gcnew System::EventHandler(this, &MyForm::tabPage9_Click);
            // 
            // label25
            // 
            this->label25->AutoSize = true;
            this->label25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label25->Location = System::Drawing::Point(11, 28);
            this->label25->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
            this->label25->Name = L"label25";
            this->label25->Size = System::Drawing::Size(91, 24);
            this->label25->TabIndex = 9;
            this->label25->Text = L"T ñâèíöà";
            this->label25->Click += gcnew System::EventHandler(this, &MyForm::label25_Click);
            // 
            // textBox_ts
            // 
            this->textBox_ts->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox_ts->Location = System::Drawing::Point(269, 28);
            this->textBox_ts->Margin = System::Windows::Forms::Padding(2);
            this->textBox_ts->Name = L"textBox_ts";
            this->textBox_ts->Size = System::Drawing::Size(382, 28);
            this->textBox_ts->TabIndex = 10;
            this->textBox_ts->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
            // 
            // tabPage2
            // 
            this->tabPage2->Controls->Add(this->textBox_w);
            this->tabPage2->Controls->Add(this->textBox_Qfr);
            this->tabPage2->Controls->Add(this->textBox_Tfr);
            this->tabPage2->Controls->Add(this->textBox_Tc);
            this->tabPage2->Controls->Add(this->textBox_T01);
            this->tabPage2->Controls->Add(this->textBox_c2);
            this->tabPage2->Controls->Add(this->textBox_ro2);
            this->tabPage2->Controls->Add(this->textBox_lambda2);
            this->tabPage2->Controls->Add(this->textBox_c1);
            this->tabPage2->Controls->Add(this->textBox_ro1);
            this->tabPage2->Controls->Add(this->textBox_lambda1);
            this->tabPage2->Controls->Add(this->textBox_L1);
            this->tabPage2->Controls->Add(this->textBox_t_end);
            this->tabPage2->Controls->Add(this->label24);
            this->tabPage2->Controls->Add(this->label18);
            this->tabPage2->Controls->Add(this->label19);
            this->tabPage2->Controls->Add(this->label20);
            this->tabPage2->Controls->Add(this->label21);
            this->tabPage2->Controls->Add(this->label22);
            this->tabPage2->Controls->Add(this->label23);
            this->tabPage2->Controls->Add(this->label28);
            this->tabPage2->Controls->Add(this->label29);
            this->tabPage2->Controls->Add(this->label30);
            this->tabPage2->Controls->Add(this->label31);
            this->tabPage2->Controls->Add(this->label32);
            this->tabPage2->Controls->Add(this->label33);
            this->tabPage2->Location = System::Drawing::Point(4, 22);
            this->tabPage2->Margin = System::Windows::Forms::Padding(2);
            this->tabPage2->Name = L"tabPage2";
            this->tabPage2->Padding = System::Windows::Forms::Padding(2);
            this->tabPage2->Size = System::Drawing::Size(663, 518);
            this->tabPage2->TabIndex = 1;
            this->tabPage2->Text = L"Ïðîìåðçàíèå";
            this->tabPage2->UseVisualStyleBackColor = true;
            // 
            // label33
            // 
            this->label33->AutoSize = true;
            this->label33->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label33->Location = System::Drawing::Point(13, 21);
            this->label33->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
            this->label33->Name = L"label33";
            this->label33->Size = System::Drawing::Size(57, 24);
            this->label33->TabIndex = 18;
            this->label33->Text = L"t_end";
            // 
            // label32
            // 
            this->label32->AutoSize = true;
            this->label32->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label32->Location = System::Drawing::Point(13, 54);
            this->label32->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
            this->label32->Name = L"label32";
            this->label32->Size = System::Drawing::Size(20, 24);
            this->label32->TabIndex = 19;
            this->label32->Text = L"L";
            // 
            // label31
            // 
            this->label31->AutoSize = true;
            this->label31->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label31->Location = System::Drawing::Point(14, 89);
            this->label31->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
            this->label31->Name = L"label31";
            this->label31->Size = System::Drawing::Size(82, 24);
            this->label31->TabIndex = 20;
            this->label31->Text = L"lambda1";
            // 
            // label30
            // 
            this->label30->AutoSize = true;
            this->label30->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label30->Location = System::Drawing::Point(13, 119);
            this->label30->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
            this->label30->Name = L"label30";
            this->label30->Size = System::Drawing::Size(37, 24);
            this->label30->TabIndex = 21;
            this->label30->Text = L"ro1";
            // 
            // label29
            // 
            this->label29->AutoSize = true;
            this->label29->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label29->Location = System::Drawing::Point(13, 151);
            this->label29->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
            this->label29->Name = L"label29";
            this->label29->Size = System::Drawing::Size(30, 24);
            this->label29->TabIndex = 22;
            this->label29->Text = L"c1";
            this->label29->Click += gcnew System::EventHandler(this, &MyForm::label29_Click);
            // 
            // label28
            // 
            this->label28->AutoSize = true;
            this->label28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label28->Location = System::Drawing::Point(14, 186);
            this->label28->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
            this->label28->Name = L"label28";
            this->label28->Size = System::Drawing::Size(82, 24);
            this->label28->TabIndex = 23;
            this->label28->Text = L"lambda2";
            // 
            // textBox_t_end
            // 
            this->textBox_t_end->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox_t_end->Location = System::Drawing::Point(271, 21);
            this->textBox_t_end->Margin = System::Windows::Forms::Padding(2);
            this->textBox_t_end->Name = L"textBox_t_end";
            this->textBox_t_end->Size = System::Drawing::Size(382, 28);
            this->textBox_t_end->TabIndex = 24;
            // 
            // textBox_L1
            // 
            this->textBox_L1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox_L1->Location = System::Drawing::Point(271, 54);
            this->textBox_L1->Margin = System::Windows::Forms::Padding(2);
            this->textBox_L1->Name = L"textBox_L1";
            this->textBox_L1->Size = System::Drawing::Size(382, 28);
            this->textBox_L1->TabIndex = 25;
            // 
            // textBox_lambda1
            // 
            this->textBox_lambda1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox_lambda1->Location = System::Drawing::Point(271, 86);
            this->textBox_lambda1->Margin = System::Windows::Forms::Padding(2);
            this->textBox_lambda1->Name = L"textBox_lambda1";
            this->textBox_lambda1->Size = System::Drawing::Size(382, 28);
            this->textBox_lambda1->TabIndex = 26;
            // 
            // textBox_ro1
            // 
            this->textBox_ro1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox_ro1->Location = System::Drawing::Point(271, 119);
            this->textBox_ro1->Margin = System::Windows::Forms::Padding(2);
            this->textBox_ro1->Name = L"textBox_ro1";
            this->textBox_ro1->Size = System::Drawing::Size(382, 28);
            this->textBox_ro1->TabIndex = 27;
            // 
            // textBox_c1
            // 
            this->textBox_c1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox_c1->Location = System::Drawing::Point(271, 151);
            this->textBox_c1->Margin = System::Windows::Forms::Padding(2);
            this->textBox_c1->Name = L"textBox_c1";
            this->textBox_c1->Size = System::Drawing::Size(382, 28);
            this->textBox_c1->TabIndex = 28;
            // 
            // textBox_lambda2
            // 
            this->textBox_lambda2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox_lambda2->Location = System::Drawing::Point(271, 186);
            this->textBox_lambda2->Margin = System::Windows::Forms::Padding(2);
            this->textBox_lambda2->Name = L"textBox_lambda2";
            this->textBox_lambda2->Size = System::Drawing::Size(382, 28);
            this->textBox_lambda2->TabIndex = 29;
            // 
            // label23
            // 
            this->label23->AutoSize = true;
            this->label23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label23->Location = System::Drawing::Point(13, 219);
            this->label23->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
            this->label23->Name = L"label23";
            this->label23->Size = System::Drawing::Size(37, 24);
            this->label23->TabIndex = 30;
            this->label23->Text = L"ro2";
            // 
            // label22
            // 
            this->label22->AutoSize = true;
            this->label22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label22->Location = System::Drawing::Point(13, 251);
            this->label22->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
            this->label22->Name = L"label22";
            this->label22->Size = System::Drawing::Size(30, 24);
            this->label22->TabIndex = 31;
            this->label22->Text = L"c2";
            // 
            // label21
            // 
            this->label21->AutoSize = true;
            this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label21->Location = System::Drawing::Point(14, 286);
            this->label21->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
            this->label21->Name = L"label21";
            this->label21->Size = System::Drawing::Size(32, 24);
            this->label21->TabIndex = 32;
            this->label21->Text = L"T0";
            // 
            // label20
            // 
            this->label20->AutoSize = true;
            this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label20->Location = System::Drawing::Point(13, 316);
            this->label20->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
            this->label20->Name = L"label20";
            this->label20->Size = System::Drawing::Size(32, 24);
            this->label20->TabIndex = 33;
            this->label20->Text = L"Tc";
            // 
            // label19
            // 
            this->label19->AutoSize = true;
            this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label19->Location = System::Drawing::Point(13, 349);
            this->label19->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
            this->label19->Name = L"label19";
            this->label19->Size = System::Drawing::Size(32, 24);
            this->label19->TabIndex = 34;
            this->label19->Text = L"Tfr";
            // 
            // label18
            // 
            this->label18->AutoSize = true;
            this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label18->Location = System::Drawing::Point(14, 384);
            this->label18->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
            this->label18->Name = L"label18";
            this->label18->Size = System::Drawing::Size(35, 24);
            this->label18->TabIndex = 35;
            this->label18->Text = L"Qfr";
            // 
            // textBox_ro2
            // 
            this->textBox_ro2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox_ro2->Location = System::Drawing::Point(271, 219);
            this->textBox_ro2->Margin = System::Windows::Forms::Padding(2);
            this->textBox_ro2->Name = L"textBox_ro2";
            this->textBox_ro2->Size = System::Drawing::Size(382, 28);
            this->textBox_ro2->TabIndex = 36;
            // 
            // textBox_c2
            // 
            this->textBox_c2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox_c2->Location = System::Drawing::Point(271, 251);
            this->textBox_c2->Margin = System::Windows::Forms::Padding(2);
            this->textBox_c2->Name = L"textBox_c2";
            this->textBox_c2->Size = System::Drawing::Size(382, 28);
            this->textBox_c2->TabIndex = 37;
            // 
            // textBox_T01
            // 
            this->textBox_T01->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox_T01->Location = System::Drawing::Point(271, 284);
            this->textBox_T01->Margin = System::Windows::Forms::Padding(2);
            this->textBox_T01->Name = L"textBox_T01";
            this->textBox_T01->Size = System::Drawing::Size(382, 28);
            this->textBox_T01->TabIndex = 38;
            // 
            // textBox_Tc
            // 
            this->textBox_Tc->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox_Tc->Location = System::Drawing::Point(271, 316);
            this->textBox_Tc->Margin = System::Windows::Forms::Padding(2);
            this->textBox_Tc->Name = L"textBox_Tc";
            this->textBox_Tc->Size = System::Drawing::Size(382, 28);
            this->textBox_Tc->TabIndex = 39;
            // 
            // textBox_Tfr
            // 
            this->textBox_Tfr->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox_Tfr->Location = System::Drawing::Point(271, 349);
            this->textBox_Tfr->Margin = System::Windows::Forms::Padding(2);
            this->textBox_Tfr->Name = L"textBox_Tfr";
            this->textBox_Tfr->Size = System::Drawing::Size(382, 28);
            this->textBox_Tfr->TabIndex = 40;
            // 
            // textBox_Qfr
            // 
            this->textBox_Qfr->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox_Qfr->Location = System::Drawing::Point(271, 384);
            this->textBox_Qfr->Margin = System::Windows::Forms::Padding(2);
            this->textBox_Qfr->Name = L"textBox_Qfr";
            this->textBox_Qfr->Size = System::Drawing::Size(382, 28);
            this->textBox_Qfr->TabIndex = 41;
            // 
            // label24
            // 
            this->label24->AutoSize = true;
            this->label24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label24->Location = System::Drawing::Point(14, 416);
            this->label24->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
            this->label24->Name = L"label24";
            this->label24->Size = System::Drawing::Size(24, 24);
            this->label24->TabIndex = 42;
            this->label24->Text = L"w";
            // 
            // textBox_w
            // 
            this->textBox_w->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox_w->Location = System::Drawing::Point(271, 416);
            this->textBox_w->Margin = System::Windows::Forms::Padding(2);
            this->textBox_w->Name = L"textBox_w";
            this->textBox_w->Size = System::Drawing::Size(382, 28);
            this->textBox_w->TabIndex = 43;
            // 
            // tabPage1
            // 
            this->tabPage1->Controls->Add(this->tabControlRightBorder);
            this->tabPage1->Controls->Add(this->tabControlLeftBorder);
            this->tabPage1->Controls->Add(this->label9);
            this->tabPage1->Controls->Add(this->label8);
            this->tabPage1->Controls->Add(this->textBox_c);
            this->tabPage1->Controls->Add(this->textBox_p);
            this->tabPage1->Controls->Add(this->textBox_Lamda);
            this->tabPage1->Controls->Add(this->textBox_T0);
            this->tabPage1->Controls->Add(this->textBox_L);
            this->tabPage1->Controls->Add(this->textBox_t);
            this->tabPage1->Controls->Add(this->label7);
            this->tabPage1->Controls->Add(this->label6);
            this->tabPage1->Controls->Add(this->label5);
            this->tabPage1->Controls->Add(this->label4);
            this->tabPage1->Controls->Add(this->label3);
            this->tabPage1->Controls->Add(this->label2);
            this->tabPage1->Location = System::Drawing::Point(4, 22);
            this->tabPage1->Margin = System::Windows::Forms::Padding(2);
            this->tabPage1->Name = L"tabPage1";
            this->tabPage1->Padding = System::Windows::Forms::Padding(2);
            this->tabPage1->Size = System::Drawing::Size(663, 518);
            this->tabPage1->TabIndex = 0;
            this->tabPage1->Text = L"Ïëàñòèíà";
            this->tabPage1->UseVisualStyleBackColor = true;
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label2->Location = System::Drawing::Point(12, 31);
            this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(81, 24);
            this->label2->TabIndex = 2;
            this->label2->Text = L"Âðåìÿ t:";
            // 
            // label3
            // 
            this->label3->AutoSize = true;
            this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label3->Location = System::Drawing::Point(12, 63);
            this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(108, 24);
            this->label3->TabIndex = 3;
            this->label3->Text = L"Òîëùèíà L:";
            // 
            // label4
            // 
            this->label4->AutoSize = true;
            this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label4->Location = System::Drawing::Point(13, 98);
            this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
            this->label4->Name = L"label4";
            this->label4->Size = System::Drawing::Size(259, 24);
            this->label4->TabIndex = 4;
            this->label4->Text = L"Íà÷àëüíàÿ òåìïåðàòóðà T0:";
            // 
            // label5
            // 
            this->label5->AutoSize = true;
            this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label5->Location = System::Drawing::Point(12, 128);
            this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
            this->label5->Name = L"label5";
            this->label5->Size = System::Drawing::Size(150, 24);
            this->label5->TabIndex = 5;
            this->label5->Text = L"lamda Âò/(ì•°Ñ):";
            // 
            // label6
            // 
            this->label6->AutoSize = true;
            this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label6->Location = System::Drawing::Point(12, 161);
            this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
            this->label6->Name = L"label6";
            this->label6->Size = System::Drawing::Size(72, 24);
            this->label6->TabIndex = 6;
            this->label6->Text = L"p êã/ì3";
            // 
            // label7
            // 
            this->label7->AutoSize = true;
            this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label7->Location = System::Drawing::Point(13, 196);
            this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
            this->label7->Name = L"label7";
            this->label7->Size = System::Drawing::Size(115, 24);
            this->label7->TabIndex = 7;
            this->label7->Text = L"ñ Äæ/(êã•°Ñ)";
            // 
            // textBox_t
            // 
            this->textBox_t->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox_t->Location = System::Drawing::Point(270, 31);
            this->textBox_t->Margin = System::Windows::Forms::Padding(2);
            this->textBox_t->Name = L"textBox_t";
            this->textBox_t->Size = System::Drawing::Size(382, 28);
            this->textBox_t->TabIndex = 8;
            // 
            // textBox_L
            // 
            this->textBox_L->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox_L->Location = System::Drawing::Point(270, 63);
            this->textBox_L->Margin = System::Windows::Forms::Padding(2);
            this->textBox_L->Name = L"textBox_L";
            this->textBox_L->Size = System::Drawing::Size(382, 28);
            this->textBox_L->TabIndex = 9;
            // 
            // textBox_T0
            // 
            this->textBox_T0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox_T0->Location = System::Drawing::Point(270, 96);
            this->textBox_T0->Margin = System::Windows::Forms::Padding(2);
            this->textBox_T0->Name = L"textBox_T0";
            this->textBox_T0->Size = System::Drawing::Size(382, 28);
            this->textBox_T0->TabIndex = 10;
            // 
            // textBox_Lamda
            // 
            this->textBox_Lamda->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox_Lamda->Location = System::Drawing::Point(270, 128);
            this->textBox_Lamda->Margin = System::Windows::Forms::Padding(2);
            this->textBox_Lamda->Name = L"textBox_Lamda";
            this->textBox_Lamda->Size = System::Drawing::Size(382, 28);
            this->textBox_Lamda->TabIndex = 11;
            // 
            // textBox_p
            // 
            this->textBox_p->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox_p->Location = System::Drawing::Point(270, 161);
            this->textBox_p->Margin = System::Windows::Forms::Padding(2);
            this->textBox_p->Name = L"textBox_p";
            this->textBox_p->Size = System::Drawing::Size(382, 28);
            this->textBox_p->TabIndex = 12;
            // 
            // textBox_c
            // 
            this->textBox_c->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox_c->Location = System::Drawing::Point(270, 196);
            this->textBox_c->Margin = System::Windows::Forms::Padding(2);
            this->textBox_c->Name = L"textBox_c";
            this->textBox_c->Size = System::Drawing::Size(382, 28);
            this->textBox_c->TabIndex = 13;
            // 
            // label8
            // 
            this->label8->AutoSize = true;
            this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label8->Location = System::Drawing::Point(31, 257);
            this->label8->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
            this->label8->Name = L"label8";
            this->label8->Size = System::Drawing::Size(55, 24);
            this->label8->TabIndex = 14;
            this->label8->Text = L"X = 0";
            // 
            // label9
            // 
            this->label9->AutoSize = true;
            this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label9->Location = System::Drawing::Point(31, 387);
            this->label9->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
            this->label9->Name = L"label9";
            this->label9->Size = System::Drawing::Size(55, 24);
            this->label9->TabIndex = 15;
            this->label9->Text = L"X = L";
            // 
            // tabControlLeftBorder
            // 
            this->tabControlLeftBorder->Controls->Add(this->tabPage3);
            this->tabControlLeftBorder->Controls->Add(this->tabPage4);
            this->tabControlLeftBorder->Controls->Add(this->tabPage5);
            this->tabControlLeftBorder->Location = System::Drawing::Point(216, 236);
            this->tabControlLeftBorder->Margin = System::Windows::Forms::Padding(2);
            this->tabControlLeftBorder->Name = L"tabControlLeftBorder";
            this->tabControlLeftBorder->SelectedIndex = 0;
            this->tabControlLeftBorder->Size = System::Drawing::Size(274, 134);
            this->tabControlLeftBorder->TabIndex = 16;
            // 
            // tabPage5
            // 
            this->tabPage5->Controls->Add(this->textBox_TeLeft);
            this->tabPage5->Controls->Add(this->label13);
            this->tabPage5->Controls->Add(this->textBox_kapaLeft);
            this->tabPage5->Controls->Add(this->label12);
            this->tabPage5->Location = System::Drawing::Point(4, 22);
            this->tabPage5->Margin = System::Windows::Forms::Padding(2);
            this->tabPage5->Name = L"tabPage5";
            this->tabPage5->Size = System::Drawing::Size(266, 108);
            this->tabPage5->TabIndex = 2;
            this->tabPage5->Text = L"Ñðåäà";
            this->tabPage5->UseVisualStyleBackColor = true;
            // 
            // label12
            // 
            this->label12->AutoSize = true;
            this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label12->Location = System::Drawing::Point(52, 20);
            this->label12->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
            this->label12->Name = L"label12";
            this->label12->Size = System::Drawing::Size(79, 24);
            this->label12->TabIndex = 22;
            this->label12->Text = L"kapaLeft";
            // 
            // textBox_kapaLeft
            // 
            this->textBox_kapaLeft->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
            this->textBox_kapaLeft->Location = System::Drawing::Point(134, 18);
            this->textBox_kapaLeft->Margin = System::Windows::Forms::Padding(2);
            this->textBox_kapaLeft->Name = L"textBox_kapaLeft";
            this->textBox_kapaLeft->Size = System::Drawing::Size(83, 28);
            this->textBox_kapaLeft->TabIndex = 23;
            // 
            // label13
            // 
            this->label13->AutoSize = true;
            this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label13->Location = System::Drawing::Point(52, 60);
            this->label13->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
            this->label13->Name = L"label13";
            this->label13->Size = System::Drawing::Size(62, 24);
            this->label13->TabIndex = 24;
            this->label13->Text = L"TeLeft";
            // 
            // textBox_TeLeft
            // 
            this->textBox_TeLeft->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox_TeLeft->Location = System::Drawing::Point(134, 58);
            this->textBox_TeLeft->Margin = System::Windows::Forms::Padding(2);
            this->textBox_TeLeft->Name = L"textBox_TeLeft";
            this->textBox_TeLeft->Size = System::Drawing::Size(83, 28);
            this->textBox_TeLeft->TabIndex = 25;
            // 
            // tabPage4
            // 
            this->tabPage4->Controls->Add(this->textBox_qLeft);
            this->tabPage4->Controls->Add(this->label11);
            this->tabPage4->Location = System::Drawing::Point(4, 22);
            this->tabPage4->Margin = System::Windows::Forms::Padding(2);
            this->tabPage4->Name = L"tabPage4";
            this->tabPage4->Padding = System::Windows::Forms::Padding(2);
            this->tabPage4->Size = System::Drawing::Size(266, 108);
            this->tabPage4->TabIndex = 1;
            this->tabPage4->Text = L"Ïîòîê";
            this->tabPage4->UseVisualStyleBackColor = true;
            // 
            // label11
            // 
            this->label11->AutoSize = true;
            this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label11->Location = System::Drawing::Point(52, 20);
            this->label11->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
            this->label11->Name = L"label11";
            this->label11->Size = System::Drawing::Size(50, 24);
            this->label11->TabIndex = 20;
            this->label11->Text = L"qLeft";
            // 
            // textBox_qLeft
            // 
            this->textBox_qLeft->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox_qLeft->Location = System::Drawing::Point(134, 18);
            this->textBox_qLeft->Margin = System::Windows::Forms::Padding(2);
            this->textBox_qLeft->Name = L"textBox_qLeft";
            this->textBox_qLeft->Size = System::Drawing::Size(83, 28);
            this->textBox_qLeft->TabIndex = 21;
            // 
            // tabPage3
            // 
            this->tabPage3->Controls->Add(this->textBox_TempConstLeft);
            this->tabPage3->Controls->Add(this->label10);
            this->tabPage3->Location = System::Drawing::Point(4, 22);
            this->tabPage3->Margin = System::Windows::Forms::Padding(2);
            this->tabPage3->Name = L"tabPage3";
            this->tabPage3->Padding = System::Windows::Forms::Padding(2);
            this->tabPage3->Size = System::Drawing::Size(266, 108);
            this->tabPage3->TabIndex = 0;
            this->tabPage3->Text = L"Const";
            this->tabPage3->UseVisualStyleBackColor = true;
            // 
            // label10
            // 
            this->label10->AutoSize = true;
            this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label10->Location = System::Drawing::Point(40, 22);
            this->label10->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
            this->label10->Name = L"label10";
            this->label10->Size = System::Drawing::Size(26, 24);
            this->label10->TabIndex = 18;
            this->label10->Text = L"Tl";
            // 
            // textBox_TempConstLeft
            // 
            this->textBox_TempConstLeft->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
            this->textBox_TempConstLeft->Location = System::Drawing::Point(122, 20);
            this->textBox_TempConstLeft->Margin = System::Windows::Forms::Padding(2);
            this->textBox_TempConstLeft->Name = L"textBox_TempConstLeft";
            this->textBox_TempConstLeft->Size = System::Drawing::Size(83, 28);
            this->textBox_TempConstLeft->TabIndex = 19;
            // 
            // tabControlRightBorder
            // 
            this->tabControlRightBorder->Controls->Add(this->tabPage6);
            this->tabControlRightBorder->Controls->Add(this->tabPage7);
            this->tabControlRightBorder->Controls->Add(this->tabPage8);
            this->tabControlRightBorder->Location = System::Drawing::Point(219, 375);
            this->tabControlRightBorder->Margin = System::Windows::Forms::Padding(2);
            this->tabControlRightBorder->Name = L"tabControlRightBorder";
            this->tabControlRightBorder->SelectedIndex = 0;
            this->tabControlRightBorder->Size = System::Drawing::Size(274, 134);
            this->tabControlRightBorder->TabIndex = 17;
            // 
            // tabPage8
            // 
            this->tabPage8->Controls->Add(this->textBox_TeRight);
            this->tabPage8->Controls->Add(this->label16);
            this->tabPage8->Controls->Add(this->textBox_kapaRight);
            this->tabPage8->Controls->Add(this->label17);
            this->tabPage8->Location = System::Drawing::Point(4, 22);
            this->tabPage8->Margin = System::Windows::Forms::Padding(2);
            this->tabPage8->Name = L"tabPage8";
            this->tabPage8->Size = System::Drawing::Size(266, 108);
            this->tabPage8->TabIndex = 2;
            this->tabPage8->Text = L"Ñðåäà";
            this->tabPage8->UseVisualStyleBackColor = true;
            // 
            // label17
            // 
            this->label17->AutoSize = true;
            this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label17->Location = System::Drawing::Point(38, 20);
            this->label17->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
            this->label17->Name = L"label17";
            this->label17->Size = System::Drawing::Size(93, 24);
            this->label17->TabIndex = 22;
            this->label17->Text = L"kapaRight";
            // 
            // textBox_kapaRight
            // 
            this->textBox_kapaRight->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
            this->textBox_kapaRight->Location = System::Drawing::Point(134, 18);
            this->textBox_kapaRight->Margin = System::Windows::Forms::Padding(2);
            this->textBox_kapaRight->Name = L"textBox_kapaRight";
            this->textBox_kapaRight->Size = System::Drawing::Size(83, 28);
            this->textBox_kapaRight->TabIndex = 23;
            // 
            // label16
            // 
            this->label16->AutoSize = true;
            this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label16->Location = System::Drawing::Point(52, 60);
            this->label16->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
            this->label16->Name = L"label16";
            this->label16->Size = System::Drawing::Size(76, 24);
            this->label16->TabIndex = 24;
            this->label16->Text = L"TeRight";
            // 
            // textBox_TeRight
            // 
            this->textBox_TeRight->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox_TeRight->Location = System::Drawing::Point(134, 58);
            this->textBox_TeRight->Margin = System::Windows::Forms::Padding(2);
            this->textBox_TeRight->Name = L"textBox_TeRight";
            this->textBox_TeRight->Size = System::Drawing::Size(83, 28);
            this->textBox_TeRight->TabIndex = 25;
            // 
            // tabPage7
            // 
            this->tabPage7->Controls->Add(this->textBox_qRight);
            this->tabPage7->Controls->Add(this->label15);
            this->tabPage7->Location = System::Drawing::Point(4, 22);
            this->tabPage7->Margin = System::Windows::Forms::Padding(2);
            this->tabPage7->Name = L"tabPage7";
            this->tabPage7->Padding = System::Windows::Forms::Padding(2);
            this->tabPage7->Size = System::Drawing::Size(266, 108);
            this->tabPage7->TabIndex = 1;
            this->tabPage7->Text = L"Ïîòîê";
            this->tabPage7->UseVisualStyleBackColor = true;
            // 
            // label15
            // 
            this->label15->AutoSize = true;
            this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label15->Location = System::Drawing::Point(52, 20);
            this->label15->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
            this->label15->Name = L"label15";
            this->label15->Size = System::Drawing::Size(64, 24);
            this->label15->TabIndex = 20;
            this->label15->Text = L"qRight";
            // 
            // textBox_qRight
            // 
            this->textBox_qRight->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox_qRight->Location = System::Drawing::Point(134, 18);
            this->textBox_qRight->Margin = System::Windows::Forms::Padding(2);
            this->textBox_qRight->Name = L"textBox_qRight";
            this->textBox_qRight->Size = System::Drawing::Size(83, 28);
            this->textBox_qRight->TabIndex = 21;
            // 
            // tabPage6
            // 
            this->tabPage6->Controls->Add(this->textBox_TempConstRight);
            this->tabPage6->Controls->Add(this->label14);
            this->tabPage6->Location = System::Drawing::Point(4, 22);
            this->tabPage6->Margin = System::Windows::Forms::Padding(2);
            this->tabPage6->Name = L"tabPage6";
            this->tabPage6->Padding = System::Windows::Forms::Padding(2);
            this->tabPage6->Size = System::Drawing::Size(266, 108);
            this->tabPage6->TabIndex = 0;
            this->tabPage6->Text = L"Const";
            this->tabPage6->UseVisualStyleBackColor = true;
            // 
            // label14
            // 
            this->label14->AutoSize = true;
            this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label14->Location = System::Drawing::Point(40, 22);
            this->label14->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
            this->label14->Name = L"label14";
            this->label14->Size = System::Drawing::Size(26, 24);
            this->label14->TabIndex = 18;
            this->label14->Text = L"Tl";
            // 
            // textBox_TempConstRight
            // 
            this->textBox_TempConstRight->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
            this->textBox_TempConstRight->Location = System::Drawing::Point(122, 20);
            this->textBox_TempConstRight->Margin = System::Windows::Forms::Padding(2);
            this->textBox_TempConstRight->Name = L"textBox_TempConstRight";
            this->textBox_TempConstRight->Size = System::Drawing::Size(83, 28);
            this->textBox_TempConstRight->TabIndex = 19;
            // 
            // tabControl1
            // 
            this->tabControl1->Controls->Add(this->tabPage1);
            this->tabControl1->Controls->Add(this->tabPage2);
            this->tabControl1->Controls->Add(this->tabPage9);
            this->tabControl1->Location = System::Drawing::Point(608, 64);
            this->tabControl1->Margin = System::Windows::Forms::Padding(2);
            this->tabControl1->Name = L"tabControl1";
            this->tabControl1->SelectedIndex = 0;
            this->tabControl1->Size = System::Drawing::Size(671, 544);
            this->tabControl1->TabIndex = 2;
            this->tabControl1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::tabControl1_SelectedIndexChanged);
            // 
            // textBox_r4
            // 
            this->textBox_r4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox_r4->Location = System::Drawing::Point(269, 245);
            this->textBox_r4->Margin = System::Windows::Forms::Padding(2);
            this->textBox_r4->Name = L"textBox_r4";
            this->textBox_r4->Size = System::Drawing::Size(382, 28);
            this->textBox_r4->TabIndex = 12;
            // 
            // label26
            // 
            this->label26->AutoSize = true;
            this->label26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label26->Location = System::Drawing::Point(11, 245);
            this->label26->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
            this->label26->Name = L"label26";
            this->label26->Size = System::Drawing::Size(26, 24);
            this->label26->TabIndex = 11;
            this->label26->Text = L"r4";
            // 
            // textBox_r3
            // 
            this->textBox_r3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox_r3->Location = System::Drawing::Point(269, 207);
            this->textBox_r3->Margin = System::Windows::Forms::Padding(2);
            this->textBox_r3->Name = L"textBox_r3";
            this->textBox_r3->Size = System::Drawing::Size(382, 28);
            this->textBox_r3->TabIndex = 14;
            // 
            // label27
            // 
            this->label27->AutoSize = true;
            this->label27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label27->Location = System::Drawing::Point(11, 207);
            this->label27->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
            this->label27->Name = L"label27";
            this->label27->Size = System::Drawing::Size(88, 24);
            this->label27->TabIndex = 13;
            this->label27->Text = L"r3 ôðîíò";
            // 
            // textBox_r2
            // 
            this->textBox_r2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox_r2->Location = System::Drawing::Point(269, 169);
            this->textBox_r2->Margin = System::Windows::Forms::Padding(2);
            this->textBox_r2->Name = L"textBox_r2";
            this->textBox_r2->Size = System::Drawing::Size(382, 28);
            this->textBox_r2->TabIndex = 16;
            // 
            // label34
            // 
            this->label34->AutoSize = true;
            this->label34->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label34->Location = System::Drawing::Point(11, 169);
            this->label34->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
            this->label34->Name = L"label34";
            this->label34->Size = System::Drawing::Size(26, 24);
            this->label34->TabIndex = 15;
            this->label34->Text = L"r2";
            // 
            // textBox_r1
            // 
            this->textBox_r1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox_r1->Location = System::Drawing::Point(269, 132);
            this->textBox_r1->Margin = System::Windows::Forms::Padding(2);
            this->textBox_r1->Name = L"textBox_r1";
            this->textBox_r1->Size = System::Drawing::Size(382, 28);
            this->textBox_r1->TabIndex = 18;
            // 
            // label35
            // 
            this->label35->AutoSize = true;
            this->label35->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label35->Location = System::Drawing::Point(11, 132);
            this->label35->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
            this->label35->Name = L"label35";
            this->label35->Size = System::Drawing::Size(26, 24);
            this->label35->TabIndex = 17;
            this->label35->Text = L"r1";
            // 
            // label36
            // 
            this->label36->AutoSize = true;
            this->label36->Location = System::Drawing::Point(38, 320);
            this->label36->Name = L"label36";
            this->label36->Size = System::Drawing::Size(148, 13);
            this->label36->TabIndex = 19;
            this->label36->Text = L"T âîäû = 312.097702358571";
            // 
            // label37
            // 
            this->label37->AutoSize = true;
            this->label37->Location = System::Drawing::Point(38, 349);
            this->label37->Name = L"label37";
            this->label37->Size = System::Drawing::Size(125, 13);
            this->label37->TabIndex = 20;
            this->label37->Text = L"T1 = 319.793241143219";
            // 
            // label38
            // 
            this->label38->AutoSize = true;
            this->label38->Location = System::Drawing::Point(38, 382);
            this->label38->Name = L"label38";
            this->label38->Size = System::Drawing::Size(125, 13);
            this->label38->TabIndex = 21;
            this->label38->Text = L"T2 = 324.988333029047";
            // 
            // label39
            // 
            this->label39->AutoSize = true;
            this->label39->Location = System::Drawing::Point(38, 415);
            this->label39->Name = L"label39";
            this->label39->Size = System::Drawing::Size(59, 13);
            this->label39->TabIndex = 22;
            this->label39->Text = L"T3 = 327.5";
            // 
            // MyForm
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(1285, 686);
            this->Controls->Add(this->buttonBuild);
            this->Controls->Add(this->tabControl1);
            this->Controls->Add(this->label1);
            this->Controls->Add(this->zedGraphControl1);
            this->Controls->Add(this->menuStrip1);
            this->MainMenuStrip = this->menuStrip1;
            this->Margin = System::Windows::Forms::Padding(2);
            this->Name = L"MyForm";
            this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
            this->Text = L"Ðàñ÷åò òåïëîïðîâîäíîñòè";
            this->menuStrip1->ResumeLayout(false);
            this->menuStrip1->PerformLayout();
            this->tabPage9->ResumeLayout(false);
            this->tabPage9->PerformLayout();
            this->tabPage2->ResumeLayout(false);
            this->tabPage2->PerformLayout();
            this->tabPage1->ResumeLayout(false);
            this->tabPage1->PerformLayout();
            this->tabControlLeftBorder->ResumeLayout(false);
            this->tabPage5->ResumeLayout(false);
            this->tabPage5->PerformLayout();
            this->tabPage4->ResumeLayout(false);
            this->tabPage4->PerformLayout();
            this->tabPage3->ResumeLayout(false);
            this->tabPage3->PerformLayout();
            this->tabControlRightBorder->ResumeLayout(false);
            this->tabPage8->ResumeLayout(false);
            this->tabPage8->PerformLayout();
            this->tabPage7->ResumeLayout(false);
            this->tabPage7->PerformLayout();
            this->tabPage6->ResumeLayout(false);
            this->tabPage6->PerformLayout();
            this->tabControl1->ResumeLayout(false);
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion
private: System::Void buttonBuild_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void âûõîäToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void îÏðîãðàììåToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void label29_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label25_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void tabControl1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void tabPage9_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
