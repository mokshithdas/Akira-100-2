#pragma once

namespace VCPP_Order_Systems {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^  menu;
	protected: 

	protected: 
	private: System::Windows::Forms::TabPage^  tabPage1;

	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::ComboBox^  comboBox2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::TabPage^  tabPage3;
	private: System::Windows::Forms::PictureBox^  pictureBox1;


















	private: System::Windows::Forms::CheckBox^  checkBox1;






	private: System::Windows::Forms::NumericUpDown^  numericUpDown1;
	private: System::Windows::Forms::CheckBox^  checkBox2;
	private: System::Windows::Forms::CheckBox^  checkBox3;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  textBox30;
	private: System::Windows::Forms::TextBox^  textBox8;
	private: System::Windows::Forms::TextBox^  textBox29;
	private: System::Windows::Forms::TextBox^  textBox15;
	private: System::Windows::Forms::TextBox^  textBox28;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::TextBox^  textBox27;
	private: System::Windows::Forms::TextBox^  textBox14;
	private: System::Windows::Forms::TextBox^  textBox26;
	private: System::Windows::Forms::TextBox^  textBox13;
	private: System::Windows::Forms::TextBox^  textBox25;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox24;
	private: System::Windows::Forms::TextBox^  textBox12;
	private: System::Windows::Forms::TextBox^  textBox23;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::TextBox^  textBox22;
	private: System::Windows::Forms::TextBox^  textBox11;
	private: System::Windows::Forms::TextBox^  textBox21;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox20;
	private: System::Windows::Forms::TextBox^  textBox10;
	private: System::Windows::Forms::TextBox^  textBox19;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::TextBox^  textBox18;
	private: System::Windows::Forms::TextBox^  textBox9;
	private: System::Windows::Forms::TextBox^  textBox17;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox16;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::CheckBox^  checkBox36;
	private: System::Windows::Forms::CheckBox^  checkBox18;
	private: System::Windows::Forms::CheckBox^  checkBox35;
	private: System::Windows::Forms::CheckBox^  checkBox14;
	private: System::Windows::Forms::CheckBox^  checkBox34;
	private: System::Windows::Forms::CheckBox^  checkBox6;
	private: System::Windows::Forms::CheckBox^  checkBox33;
	private: System::Windows::Forms::CheckBox^  checkBox13;
	private: System::Windows::Forms::CheckBox^  checkBox32;
	private: System::Windows::Forms::CheckBox^  checkBox31;
	private: System::Windows::Forms::CheckBox^  checkBox17;
	private: System::Windows::Forms::CheckBox^  checkBox30;
	private: System::Windows::Forms::CheckBox^  checkBox12;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown30;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown8;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown29;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown15;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown28;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown4;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown27;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown14;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown26;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown7;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown25;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown13;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown24;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown2;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown23;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown12;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown22;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown6;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown21;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown11;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown20;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown5;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown19;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown10;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown18;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown3;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown17;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown16;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown9;
	private: System::Windows::Forms::CheckBox^  checkBox29;
	private: System::Windows::Forms::CheckBox^  checkBox28;
	private: System::Windows::Forms::CheckBox^  checkBox16;
	private: System::Windows::Forms::CheckBox^  checkBox27;
	private: System::Windows::Forms::CheckBox^  checkBox11;
	private: System::Windows::Forms::CheckBox^  checkBox26;
	private: System::Windows::Forms::CheckBox^  checkBox7;
	private: System::Windows::Forms::CheckBox^  checkBox25;
	private: System::Windows::Forms::CheckBox^  checkBox15;
	private: System::Windows::Forms::CheckBox^  checkBox24;
	private: System::Windows::Forms::CheckBox^  checkBox10;
	private: System::Windows::Forms::CheckBox^  checkBox23;
	private: System::Windows::Forms::CheckBox^  checkBox5;
	private: System::Windows::Forms::CheckBox^  checkBox22;
	private: System::Windows::Forms::CheckBox^  checkBox9;
	private: System::Windows::Forms::CheckBox^  checkBox21;
	private: System::Windows::Forms::CheckBox^  checkBox4;
	private: System::Windows::Forms::CheckBox^  checkBox20;
	private: System::Windows::Forms::CheckBox^  checkBox8;
	private: System::Windows::Forms::CheckBox^  checkBox19;
private: System::Windows::Forms::RichTextBox^  richTextBox1;
private: System::Windows::Forms::TextBox^  textBox31;
private: System::Windows::Forms::CheckBox^  checkBox44;
private: System::Windows::Forms::CheckBox^  checkBox51;
private: System::Windows::Forms::CheckBox^  checkBox40;
private: System::Windows::Forms::CheckBox^  checkBox50;
private: System::Windows::Forms::CheckBox^  checkBox43;
private: System::Windows::Forms::CheckBox^  checkBox49;
private: System::Windows::Forms::CheckBox^  checkBox42;
private: System::Windows::Forms::CheckBox^  checkBox48;
private: System::Windows::Forms::CheckBox^  checkBox47;
private: System::Windows::Forms::CheckBox^  checkBox38;
private: System::Windows::Forms::CheckBox^  checkBox46;
private: System::Windows::Forms::CheckBox^  checkBox41;
private: System::Windows::Forms::CheckBox^  checkBox45;
private: System::Windows::Forms::CheckBox^  checkBox39;
private: System::Windows::Forms::CheckBox^  checkBox37;
private: System::Windows::Forms::Button^  button1;
private: System::Windows::Forms::TextBox^  textBox32;




















































	protected: 

	protected: 


















	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->menu = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->textBox32 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox30 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox29 = (gcnew System::Windows::Forms::TextBox());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->textBox28 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox27 = (gcnew System::Windows::Forms::TextBox());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->textBox26 = (gcnew System::Windows::Forms::TextBox());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->textBox25 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox24 = (gcnew System::Windows::Forms::TextBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->textBox23 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox22 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox21 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox20 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox19 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox18 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox17 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->checkBox36 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox18 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox35 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox14 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox34 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox6 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox33 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox13 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox32 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox31 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox17 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox30 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox12 = (gcnew System::Windows::Forms::CheckBox());
			this->numericUpDown30 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown8 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown29 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown15 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown28 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown4 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown27 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown14 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown26 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown7 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown25 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown13 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown24 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown23 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown12 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown22 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown6 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown21 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown11 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown20 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown5 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown19 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown10 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown18 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown3 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown17 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown16 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown9 = (gcnew System::Windows::Forms::NumericUpDown());
			this->checkBox29 = (gcnew System::Windows::Forms::CheckBox());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->checkBox28 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox16 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox27 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox11 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox26 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox7 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox25 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox15 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox24 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox10 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox23 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox5 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox22 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox9 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox21 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox4 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox20 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox8 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox19 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->textBox31 = (gcnew System::Windows::Forms::TextBox());
			this->checkBox44 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox51 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox40 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox50 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox43 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox49 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox42 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox48 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox47 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox38 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox46 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox41 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox45 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox39 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox37 = (gcnew System::Windows::Forms::CheckBox());
			this->menu->SuspendLayout();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown30))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown29))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown15))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown28))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown27))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown14))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown26))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown25))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown13))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown24))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown23))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown22))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown21))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown20))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown19))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown18))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown17))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown16))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown1))->BeginInit();
			this->tabPage3->SuspendLayout();
			this->SuspendLayout();
			// 
			// menu
			// 
			this->menu->Controls->Add(this->tabPage1);
			this->menu->Controls->Add(this->tabPage2);
			this->menu->Controls->Add(this->tabPage3);
			this->menu->Location = System::Drawing::Point(1, 2);
			this->menu->Name = L"menu";
			this->menu->SelectedIndex = 0;
			this->menu->Size = System::Drawing::Size(1083, 486);
			this->menu->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->BackColor = System::Drawing::Color::LightGray;
			this->tabPage1->Controls->Add(this->textBox32);
			this->tabPage1->Controls->Add(this->button1);
			this->tabPage1->Controls->Add(this->pictureBox1);
			this->tabPage1->Controls->Add(this->label4);
			this->tabPage1->Controls->Add(this->comboBox2);
			this->tabPage1->Controls->Add(this->label3);
			this->tabPage1->Controls->Add(this->comboBox1);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(1075, 460);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"WELCOME";
			this->tabPage1->Click += gcnew System::EventHandler(this, &Form1::tabPage1_Click);
			// 
			// textBox32
			// 
			this->textBox32->Location = System::Drawing::Point(268, 370);
			this->textBox32->Name = L"textBox32";
			this->textBox32->Size = System::Drawing::Size(223, 20);
			this->textBox32->TabIndex = 10;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(164, 240);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(174, 46);
			this->button1->TabIndex = 9;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->ErrorImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.ErrorImage")));
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(497, 13);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(541, 405);
			this->pictureBox1->TabIndex = 8;
			this->pictureBox1->TabStop = false;
			// 
			// label4
			// 
			this->label4->BackColor = System::Drawing::Color::DimGray;
			this->label4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(7, 356);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(226, 34);
			this->label4->TabIndex = 6;
			this->label4->Text = L"TABLE NUMBER";
			this->label4->Click += gcnew System::EventHandler(this, &Form1::label4_Click);
			// 
			// comboBox2
			// 
			this->comboBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(10) {L"1", L"2", L"3", L"4", L"5", L"6", L"7", L"8", 
				L"9", L"10"});
			this->comboBox2->Location = System::Drawing::Point(268, 177);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(223, 33);
			this->comboBox2->TabIndex = 5;
			this->comboBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::comboBox2_SelectedIndexChanged);
			// 
			// label3
			// 
			this->label3->BackColor = System::Drawing::Color::DimGray;
			this->label3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(7, 177);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(226, 34);
			this->label3->TabIndex = 4;
			this->label3->Text = L"NO. OF PERSONS";
			this->label3->Click += gcnew System::EventHandler(this, &Form1::label3_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) {L"A/C", L"NON-A/C"});
			this->comboBox1->Location = System::Drawing::Point(268, 110);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(223, 33);
			this->comboBox1->TabIndex = 3;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::comboBox1_SelectedIndexChanged);
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::Color::DimGray;
			this->label2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(7, 109);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(226, 34);
			this->label2->TabIndex = 1;
			this->label2->Text = L"COMFORTABILITY";
			this->label2->Click += gcnew System::EventHandler(this, &Form1::label2_Click);
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::DimGray;
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(128, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(222, 61);
			this->label1->TabIndex = 0;
			this->label1->Text = L"WELCOME TO RESTAURANT";
			this->label1->Click += gcnew System::EventHandler(this, &Form1::label1_Click);
			// 
			// tabPage2
			// 
			this->tabPage2->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->tabPage2->Controls->Add(this->richTextBox1);
			this->tabPage2->Controls->Add(this->label10);
			this->tabPage2->Controls->Add(this->label7);
			this->tabPage2->Controls->Add(this->label9);
			this->tabPage2->Controls->Add(this->label8);
			this->tabPage2->Controls->Add(this->label6);
			this->tabPage2->Controls->Add(this->label5);
			this->tabPage2->Controls->Add(this->textBox30);
			this->tabPage2->Controls->Add(this->textBox8);
			this->tabPage2->Controls->Add(this->textBox29);
			this->tabPage2->Controls->Add(this->textBox15);
			this->tabPage2->Controls->Add(this->textBox28);
			this->tabPage2->Controls->Add(this->textBox7);
			this->tabPage2->Controls->Add(this->textBox27);
			this->tabPage2->Controls->Add(this->textBox14);
			this->tabPage2->Controls->Add(this->textBox26);
			this->tabPage2->Controls->Add(this->textBox13);
			this->tabPage2->Controls->Add(this->textBox25);
			this->tabPage2->Controls->Add(this->textBox4);
			this->tabPage2->Controls->Add(this->textBox24);
			this->tabPage2->Controls->Add(this->textBox12);
			this->tabPage2->Controls->Add(this->textBox23);
			this->tabPage2->Controls->Add(this->textBox6);
			this->tabPage2->Controls->Add(this->textBox22);
			this->tabPage2->Controls->Add(this->textBox11);
			this->tabPage2->Controls->Add(this->textBox21);
			this->tabPage2->Controls->Add(this->textBox2);
			this->tabPage2->Controls->Add(this->textBox20);
			this->tabPage2->Controls->Add(this->textBox10);
			this->tabPage2->Controls->Add(this->textBox19);
			this->tabPage2->Controls->Add(this->textBox5);
			this->tabPage2->Controls->Add(this->textBox18);
			this->tabPage2->Controls->Add(this->textBox9);
			this->tabPage2->Controls->Add(this->textBox17);
			this->tabPage2->Controls->Add(this->textBox3);
			this->tabPage2->Controls->Add(this->textBox16);
			this->tabPage2->Controls->Add(this->textBox1);
			this->tabPage2->Controls->Add(this->checkBox36);
			this->tabPage2->Controls->Add(this->checkBox18);
			this->tabPage2->Controls->Add(this->checkBox35);
			this->tabPage2->Controls->Add(this->checkBox14);
			this->tabPage2->Controls->Add(this->checkBox34);
			this->tabPage2->Controls->Add(this->checkBox6);
			this->tabPage2->Controls->Add(this->checkBox33);
			this->tabPage2->Controls->Add(this->checkBox13);
			this->tabPage2->Controls->Add(this->checkBox32);
			this->tabPage2->Controls->Add(this->checkBox3);
			this->tabPage2->Controls->Add(this->checkBox31);
			this->tabPage2->Controls->Add(this->checkBox17);
			this->tabPage2->Controls->Add(this->checkBox30);
			this->tabPage2->Controls->Add(this->checkBox12);
			this->tabPage2->Controls->Add(this->numericUpDown30);
			this->tabPage2->Controls->Add(this->numericUpDown8);
			this->tabPage2->Controls->Add(this->numericUpDown29);
			this->tabPage2->Controls->Add(this->numericUpDown15);
			this->tabPage2->Controls->Add(this->numericUpDown28);
			this->tabPage2->Controls->Add(this->numericUpDown4);
			this->tabPage2->Controls->Add(this->numericUpDown27);
			this->tabPage2->Controls->Add(this->numericUpDown14);
			this->tabPage2->Controls->Add(this->numericUpDown26);
			this->tabPage2->Controls->Add(this->numericUpDown7);
			this->tabPage2->Controls->Add(this->numericUpDown25);
			this->tabPage2->Controls->Add(this->numericUpDown13);
			this->tabPage2->Controls->Add(this->numericUpDown24);
			this->tabPage2->Controls->Add(this->numericUpDown2);
			this->tabPage2->Controls->Add(this->numericUpDown23);
			this->tabPage2->Controls->Add(this->numericUpDown12);
			this->tabPage2->Controls->Add(this->numericUpDown22);
			this->tabPage2->Controls->Add(this->numericUpDown6);
			this->tabPage2->Controls->Add(this->numericUpDown21);
			this->tabPage2->Controls->Add(this->numericUpDown11);
			this->tabPage2->Controls->Add(this->numericUpDown20);
			this->tabPage2->Controls->Add(this->numericUpDown5);
			this->tabPage2->Controls->Add(this->numericUpDown19);
			this->tabPage2->Controls->Add(this->numericUpDown10);
			this->tabPage2->Controls->Add(this->numericUpDown18);
			this->tabPage2->Controls->Add(this->numericUpDown3);
			this->tabPage2->Controls->Add(this->numericUpDown17);
			this->tabPage2->Controls->Add(this->numericUpDown16);
			this->tabPage2->Controls->Add(this->numericUpDown9);
			this->tabPage2->Controls->Add(this->checkBox29);
			this->tabPage2->Controls->Add(this->numericUpDown1);
			this->tabPage2->Controls->Add(this->checkBox28);
			this->tabPage2->Controls->Add(this->checkBox16);
			this->tabPage2->Controls->Add(this->checkBox27);
			this->tabPage2->Controls->Add(this->checkBox11);
			this->tabPage2->Controls->Add(this->checkBox26);
			this->tabPage2->Controls->Add(this->checkBox7);
			this->tabPage2->Controls->Add(this->checkBox25);
			this->tabPage2->Controls->Add(this->checkBox15);
			this->tabPage2->Controls->Add(this->checkBox24);
			this->tabPage2->Controls->Add(this->checkBox10);
			this->tabPage2->Controls->Add(this->checkBox23);
			this->tabPage2->Controls->Add(this->checkBox5);
			this->tabPage2->Controls->Add(this->checkBox22);
			this->tabPage2->Controls->Add(this->checkBox9);
			this->tabPage2->Controls->Add(this->checkBox21);
			this->tabPage2->Controls->Add(this->checkBox4);
			this->tabPage2->Controls->Add(this->checkBox20);
			this->tabPage2->Controls->Add(this->checkBox8);
			this->tabPage2->Controls->Add(this->checkBox19);
			this->tabPage2->Controls->Add(this->checkBox2);
			this->tabPage2->Controls->Add(this->checkBox1);
			this->tabPage2->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(1075, 460);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"MENU";
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(755, 41);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(296, 384);
			this->richTextBox1->TabIndex = 20;
			this->richTextBox1->Text = L"";
			// 
			// label10
			// 
			this->label10->Location = System::Drawing::Point(612, 16);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(100, 20);
			this->label10->TabIndex = 19;
			this->label10->Text = L"PRICE";
			// 
			// label7
			// 
			this->label7->Location = System::Drawing::Point(227, 16);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(100, 20);
			this->label7->TabIndex = 19;
			this->label7->Text = L"PRICE";
			// 
			// label9
			// 
			this->label9->Location = System::Drawing::Point(488, 16);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(100, 20);
			this->label9->TabIndex = 19;
			this->label9->Text = L"QUANTITY";
			// 
			// label8
			// 
			this->label8->Location = System::Drawing::Point(351, 16);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(120, 20);
			this->label8->TabIndex = 19;
			this->label8->Text = L"NONVEG";
			// 
			// label6
			// 
			this->label6->Location = System::Drawing::Point(106, 16);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(100, 20);
			this->label6->TabIndex = 19;
			this->label6->Text = L"QUANTITY";
			// 
			// label5
			// 
			this->label5->Location = System::Drawing::Point(6, 16);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(100, 20);
			this->label5->TabIndex = 19;
			this->label5->Text = L"VEG";
			// 
			// textBox30
			// 
			this->textBox30->Location = System::Drawing::Point(609, 223);
			this->textBox30->Name = L"textBox30";
			this->textBox30->Size = System::Drawing::Size(100, 20);
			this->textBox30->TabIndex = 18;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(227, 223);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(100, 20);
			this->textBox8->TabIndex = 18;
			// 
			// textBox29
			// 
			this->textBox29->Location = System::Drawing::Point(609, 377);
			this->textBox29->Name = L"textBox29";
			this->textBox29->Size = System::Drawing::Size(100, 20);
			this->textBox29->TabIndex = 18;
			// 
			// textBox15
			// 
			this->textBox15->Location = System::Drawing::Point(227, 377);
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(100, 20);
			this->textBox15->TabIndex = 18;
			// 
			// textBox28
			// 
			this->textBox28->Location = System::Drawing::Point(609, 171);
			this->textBox28->Name = L"textBox28";
			this->textBox28->Size = System::Drawing::Size(100, 20);
			this->textBox28->TabIndex = 18;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(227, 171);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(100, 20);
			this->textBox7->TabIndex = 18;
			// 
			// textBox27
			// 
			this->textBox27->Location = System::Drawing::Point(609, 325);
			this->textBox27->Name = L"textBox27";
			this->textBox27->Size = System::Drawing::Size(100, 20);
			this->textBox27->TabIndex = 18;
			// 
			// textBox14
			// 
			this->textBox14->Location = System::Drawing::Point(227, 325);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(100, 20);
			this->textBox14->TabIndex = 18;
			// 
			// textBox26
			// 
			this->textBox26->Location = System::Drawing::Point(609, 403);
			this->textBox26->Name = L"textBox26";
			this->textBox26->Size = System::Drawing::Size(100, 20);
			this->textBox26->TabIndex = 18;
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(227, 403);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(100, 20);
			this->textBox13->TabIndex = 18;
			// 
			// textBox25
			// 
			this->textBox25->Location = System::Drawing::Point(609, 119);
			this->textBox25->Name = L"textBox25";
			this->textBox25->Size = System::Drawing::Size(100, 20);
			this->textBox25->TabIndex = 18;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(227, 119);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 20);
			this->textBox4->TabIndex = 18;
			// 
			// textBox24
			// 
			this->textBox24->Location = System::Drawing::Point(609, 273);
			this->textBox24->Name = L"textBox24";
			this->textBox24->Size = System::Drawing::Size(100, 20);
			this->textBox24->TabIndex = 18;
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(227, 273);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(100, 20);
			this->textBox12->TabIndex = 18;
			// 
			// textBox23
			// 
			this->textBox23->Location = System::Drawing::Point(609, 197);
			this->textBox23->Name = L"textBox23";
			this->textBox23->Size = System::Drawing::Size(100, 20);
			this->textBox23->TabIndex = 18;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(227, 197);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(100, 20);
			this->textBox6->TabIndex = 18;
			// 
			// textBox22
			// 
			this->textBox22->Location = System::Drawing::Point(609, 351);
			this->textBox22->Name = L"textBox22";
			this->textBox22->Size = System::Drawing::Size(100, 20);
			this->textBox22->TabIndex = 18;
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(227, 351);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(100, 20);
			this->textBox11->TabIndex = 18;
			// 
			// textBox21
			// 
			this->textBox21->Location = System::Drawing::Point(609, 67);
			this->textBox21->Name = L"textBox21";
			this->textBox21->Size = System::Drawing::Size(100, 20);
			this->textBox21->TabIndex = 18;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(227, 67);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 18;
			// 
			// textBox20
			// 
			this->textBox20->Location = System::Drawing::Point(609, 299);
			this->textBox20->Name = L"textBox20";
			this->textBox20->Size = System::Drawing::Size(100, 20);
			this->textBox20->TabIndex = 18;
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(227, 299);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(100, 20);
			this->textBox10->TabIndex = 18;
			// 
			// textBox19
			// 
			this->textBox19->Location = System::Drawing::Point(609, 145);
			this->textBox19->Name = L"textBox19";
			this->textBox19->Size = System::Drawing::Size(100, 20);
			this->textBox19->TabIndex = 18;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(227, 145);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 20);
			this->textBox5->TabIndex = 18;
			// 
			// textBox18
			// 
			this->textBox18->Location = System::Drawing::Point(609, 247);
			this->textBox18->Name = L"textBox18";
			this->textBox18->Size = System::Drawing::Size(100, 20);
			this->textBox18->TabIndex = 18;
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(227, 247);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(100, 20);
			this->textBox9->TabIndex = 18;
			// 
			// textBox17
			// 
			this->textBox17->Location = System::Drawing::Point(609, 93);
			this->textBox17->Name = L"textBox17";
			this->textBox17->Size = System::Drawing::Size(100, 20);
			this->textBox17->TabIndex = 18;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(227, 93);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 18;
			// 
			// textBox16
			// 
			this->textBox16->Location = System::Drawing::Point(609, 41);
			this->textBox16->Name = L"textBox16";
			this->textBox16->Size = System::Drawing::Size(100, 20);
			this->textBox16->TabIndex = 18;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(227, 41);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 18;
			// 
			// checkBox36
			// 
			this->checkBox36->Location = System::Drawing::Point(352, 405);
			this->checkBox36->Name = L"checkBox36";
			this->checkBox36->Size = System::Drawing::Size(120, 20);
			this->checkBox36->TabIndex = 0;
			this->checkBox36->Text = L"MUT.BIR.FP";
			this->checkBox36->UseVisualStyleBackColor = true;
			// 
			// checkBox18
			// 
			this->checkBox18->Location = System::Drawing::Point(7, 405);
			this->checkBox18->Name = L"checkBox18";
			this->checkBox18->Size = System::Drawing::Size(100, 20);
			this->checkBox18->TabIndex = 0;
			this->checkBox18->Text = L"VEG BIRIYANI";
			this->checkBox18->UseVisualStyleBackColor = true;
			// 
			// checkBox35
			// 
			this->checkBox35->Location = System::Drawing::Point(352, 327);
			this->checkBox35->Name = L"checkBox35";
			this->checkBox35->Size = System::Drawing::Size(120, 20);
			this->checkBox35->TabIndex = 0;
			this->checkBox35->Text = L"MUT.DUM.BIR";
			this->checkBox35->UseVisualStyleBackColor = true;
			// 
			// checkBox14
			// 
			this->checkBox14->Location = System::Drawing::Point(7, 327);
			this->checkBox14->Name = L"checkBox14";
			this->checkBox14->Size = System::Drawing::Size(100, 20);
			this->checkBox14->TabIndex = 0;
			this->checkBox14->Text = L"PUDINABATH";
			this->checkBox14->UseVisualStyleBackColor = true;
			// 
			// checkBox34
			// 
			this->checkBox34->Location = System::Drawing::Point(352, 171);
			this->checkBox34->Name = L"checkBox34";
			this->checkBox34->Size = System::Drawing::Size(120, 20);
			this->checkBox34->TabIndex = 0;
			this->checkBox34->Text = L"CHICK.SPL";
			this->checkBox34->UseVisualStyleBackColor = true;
			// 
			// checkBox6
			// 
			this->checkBox6->Location = System::Drawing::Point(7, 171);
			this->checkBox6->Name = L"checkBox6";
			this->checkBox6->Size = System::Drawing::Size(100, 20);
			this->checkBox6->TabIndex = 0;
			this->checkBox6->Text = L"PAROTA";
			this->checkBox6->UseVisualStyleBackColor = true;
			// 
			// checkBox33
			// 
			this->checkBox33->Location = System::Drawing::Point(352, 247);
			this->checkBox33->Name = L"checkBox33";
			this->checkBox33->Size = System::Drawing::Size(120, 20);
			this->checkBox33->TabIndex = 0;
			this->checkBox33->Text = L"MUT.BIRYANI";
			this->checkBox33->UseVisualStyleBackColor = true;
			// 
			// checkBox13
			// 
			this->checkBox13->Location = System::Drawing::Point(7, 247);
			this->checkBox13->Name = L"checkBox13";
			this->checkBox13->Size = System::Drawing::Size(100, 20);
			this->checkBox13->TabIndex = 0;
			this->checkBox13->Text = L"VADA";
			this->checkBox13->UseVisualStyleBackColor = true;
			// 
			// checkBox32
			// 
			this->checkBox32->Location = System::Drawing::Point(352, 91);
			this->checkBox32->Name = L"checkBox32";
			this->checkBox32->Size = System::Drawing::Size(120, 20);
			this->checkBox32->TabIndex = 0;
			this->checkBox32->Text = L"CHICK.TIKK.BIR";
			this->checkBox32->UseVisualStyleBackColor = true;
			// 
			// checkBox3
			// 
			this->checkBox3->Location = System::Drawing::Point(7, 91);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(100, 20);
			this->checkBox3->TabIndex = 0;
			this->checkBox3->Text = L"IDLY";
			this->checkBox3->UseVisualStyleBackColor = true;
			// 
			// checkBox31
			// 
			this->checkBox31->Location = System::Drawing::Point(352, 379);
			this->checkBox31->Name = L"checkBox31";
			this->checkBox31->Size = System::Drawing::Size(120, 20);
			this->checkBox31->TabIndex = 0;
			this->checkBox31->Text = L"CHIC.DUM.FP";
			this->checkBox31->UseVisualStyleBackColor = true;
			// 
			// checkBox17
			// 
			this->checkBox17->Location = System::Drawing::Point(7, 379);
			this->checkBox17->Name = L"checkBox17";
			this->checkBox17->Size = System::Drawing::Size(100, 20);
			this->checkBox17->TabIndex = 0;
			this->checkBox17->Text = L"CURDRICE";
			this->checkBox17->UseVisualStyleBackColor = true;
			// 
			// checkBox30
			// 
			this->checkBox30->Location = System::Drawing::Point(352, 301);
			this->checkBox30->Name = L"checkBox30";
			this->checkBox30->Size = System::Drawing::Size(120, 20);
			this->checkBox30->TabIndex = 0;
			this->checkBox30->Text = L"CHIC.WINGS";
			this->checkBox30->UseVisualStyleBackColor = true;
			// 
			// checkBox12
			// 
			this->checkBox12->Location = System::Drawing::Point(7, 302);
			this->checkBox12->Name = L"checkBox12";
			this->checkBox12->Size = System::Drawing::Size(100, 20);
			this->checkBox12->TabIndex = 0;
			this->checkBox12->Text = L"PULIOGRE";
			this->checkBox12->UseVisualStyleBackColor = true;
			// 
			// numericUpDown30
			// 
			this->numericUpDown30->Location = System::Drawing::Point(491, 223);
			this->numericUpDown30->Name = L"numericUpDown30";
			this->numericUpDown30->Size = System::Drawing::Size(100, 20);
			this->numericUpDown30->TabIndex = 17;
			this->numericUpDown30->ValueChanged += gcnew System::EventHandler(this, &Form1::numericUpDown1_ValueChanged);
			// 
			// numericUpDown8
			// 
			this->numericUpDown8->Location = System::Drawing::Point(109, 223);
			this->numericUpDown8->Name = L"numericUpDown8";
			this->numericUpDown8->Size = System::Drawing::Size(100, 20);
			this->numericUpDown8->TabIndex = 17;
			this->numericUpDown8->ValueChanged += gcnew System::EventHandler(this, &Form1::numericUpDown1_ValueChanged);
			// 
			// numericUpDown29
			// 
			this->numericUpDown29->Location = System::Drawing::Point(491, 325);
			this->numericUpDown29->Name = L"numericUpDown29";
			this->numericUpDown29->Size = System::Drawing::Size(100, 20);
			this->numericUpDown29->TabIndex = 17;
			this->numericUpDown29->ValueChanged += gcnew System::EventHandler(this, &Form1::numericUpDown1_ValueChanged);
			// 
			// numericUpDown15
			// 
			this->numericUpDown15->Location = System::Drawing::Point(109, 325);
			this->numericUpDown15->Name = L"numericUpDown15";
			this->numericUpDown15->Size = System::Drawing::Size(100, 20);
			this->numericUpDown15->TabIndex = 17;
			this->numericUpDown15->ValueChanged += gcnew System::EventHandler(this, &Form1::numericUpDown1_ValueChanged);
			// 
			// numericUpDown28
			// 
			this->numericUpDown28->Location = System::Drawing::Point(491, 119);
			this->numericUpDown28->Name = L"numericUpDown28";
			this->numericUpDown28->Size = System::Drawing::Size(100, 20);
			this->numericUpDown28->TabIndex = 17;
			this->numericUpDown28->ValueChanged += gcnew System::EventHandler(this, &Form1::numericUpDown1_ValueChanged);
			// 
			// numericUpDown4
			// 
			this->numericUpDown4->Location = System::Drawing::Point(109, 119);
			this->numericUpDown4->Name = L"numericUpDown4";
			this->numericUpDown4->Size = System::Drawing::Size(100, 20);
			this->numericUpDown4->TabIndex = 17;
			this->numericUpDown4->ValueChanged += gcnew System::EventHandler(this, &Form1::numericUpDown1_ValueChanged);
			// 
			// numericUpDown27
			// 
			this->numericUpDown27->Location = System::Drawing::Point(491, 377);
			this->numericUpDown27->Name = L"numericUpDown27";
			this->numericUpDown27->Size = System::Drawing::Size(100, 20);
			this->numericUpDown27->TabIndex = 17;
			this->numericUpDown27->ValueChanged += gcnew System::EventHandler(this, &Form1::numericUpDown1_ValueChanged);
			// 
			// numericUpDown14
			// 
			this->numericUpDown14->Location = System::Drawing::Point(109, 377);
			this->numericUpDown14->Name = L"numericUpDown14";
			this->numericUpDown14->Size = System::Drawing::Size(100, 20);
			this->numericUpDown14->TabIndex = 17;
			this->numericUpDown14->ValueChanged += gcnew System::EventHandler(this, &Form1::numericUpDown1_ValueChanged);
			// 
			// numericUpDown26
			// 
			this->numericUpDown26->Location = System::Drawing::Point(491, 171);
			this->numericUpDown26->Name = L"numericUpDown26";
			this->numericUpDown26->Size = System::Drawing::Size(100, 20);
			this->numericUpDown26->TabIndex = 17;
			this->numericUpDown26->ValueChanged += gcnew System::EventHandler(this, &Form1::numericUpDown1_ValueChanged);
			// 
			// numericUpDown7
			// 
			this->numericUpDown7->Location = System::Drawing::Point(109, 171);
			this->numericUpDown7->Name = L"numericUpDown7";
			this->numericUpDown7->Size = System::Drawing::Size(100, 20);
			this->numericUpDown7->TabIndex = 17;
			this->numericUpDown7->ValueChanged += gcnew System::EventHandler(this, &Form1::numericUpDown1_ValueChanged);
			// 
			// numericUpDown25
			// 
			this->numericUpDown25->Location = System::Drawing::Point(491, 273);
			this->numericUpDown25->Name = L"numericUpDown25";
			this->numericUpDown25->Size = System::Drawing::Size(100, 20);
			this->numericUpDown25->TabIndex = 17;
			this->numericUpDown25->ValueChanged += gcnew System::EventHandler(this, &Form1::numericUpDown1_ValueChanged);
			// 
			// numericUpDown13
			// 
			this->numericUpDown13->Location = System::Drawing::Point(109, 273);
			this->numericUpDown13->Name = L"numericUpDown13";
			this->numericUpDown13->Size = System::Drawing::Size(100, 20);
			this->numericUpDown13->TabIndex = 17;
			this->numericUpDown13->ValueChanged += gcnew System::EventHandler(this, &Form1::numericUpDown1_ValueChanged);
			// 
			// numericUpDown24
			// 
			this->numericUpDown24->Location = System::Drawing::Point(491, 67);
			this->numericUpDown24->Name = L"numericUpDown24";
			this->numericUpDown24->Size = System::Drawing::Size(100, 20);
			this->numericUpDown24->TabIndex = 17;
			this->numericUpDown24->ValueChanged += gcnew System::EventHandler(this, &Form1::numericUpDown1_ValueChanged);
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->Location = System::Drawing::Point(109, 67);
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(100, 20);
			this->numericUpDown2->TabIndex = 17;
			this->numericUpDown2->ValueChanged += gcnew System::EventHandler(this, &Form1::numericUpDown1_ValueChanged);
			// 
			// numericUpDown23
			// 
			this->numericUpDown23->Location = System::Drawing::Point(491, 403);
			this->numericUpDown23->Name = L"numericUpDown23";
			this->numericUpDown23->Size = System::Drawing::Size(100, 20);
			this->numericUpDown23->TabIndex = 17;
			this->numericUpDown23->ValueChanged += gcnew System::EventHandler(this, &Form1::numericUpDown1_ValueChanged);
			// 
			// numericUpDown12
			// 
			this->numericUpDown12->Location = System::Drawing::Point(109, 403);
			this->numericUpDown12->Name = L"numericUpDown12";
			this->numericUpDown12->Size = System::Drawing::Size(100, 20);
			this->numericUpDown12->TabIndex = 17;
			this->numericUpDown12->ValueChanged += gcnew System::EventHandler(this, &Form1::numericUpDown1_ValueChanged);
			// 
			// numericUpDown22
			// 
			this->numericUpDown22->Location = System::Drawing::Point(491, 197);
			this->numericUpDown22->Name = L"numericUpDown22";
			this->numericUpDown22->Size = System::Drawing::Size(100, 20);
			this->numericUpDown22->TabIndex = 17;
			this->numericUpDown22->ValueChanged += gcnew System::EventHandler(this, &Form1::numericUpDown1_ValueChanged);
			// 
			// numericUpDown6
			// 
			this->numericUpDown6->Location = System::Drawing::Point(109, 197);
			this->numericUpDown6->Name = L"numericUpDown6";
			this->numericUpDown6->Size = System::Drawing::Size(100, 20);
			this->numericUpDown6->TabIndex = 17;
			this->numericUpDown6->ValueChanged += gcnew System::EventHandler(this, &Form1::numericUpDown1_ValueChanged);
			// 
			// numericUpDown21
			// 
			this->numericUpDown21->Location = System::Drawing::Point(491, 351);
			this->numericUpDown21->Name = L"numericUpDown21";
			this->numericUpDown21->Size = System::Drawing::Size(100, 20);
			this->numericUpDown21->TabIndex = 17;
			this->numericUpDown21->ValueChanged += gcnew System::EventHandler(this, &Form1::numericUpDown1_ValueChanged);
			// 
			// numericUpDown11
			// 
			this->numericUpDown11->Location = System::Drawing::Point(109, 351);
			this->numericUpDown11->Name = L"numericUpDown11";
			this->numericUpDown11->Size = System::Drawing::Size(100, 20);
			this->numericUpDown11->TabIndex = 17;
			this->numericUpDown11->ValueChanged += gcnew System::EventHandler(this, &Form1::numericUpDown1_ValueChanged);
			// 
			// numericUpDown20
			// 
			this->numericUpDown20->Location = System::Drawing::Point(491, 145);
			this->numericUpDown20->Name = L"numericUpDown20";
			this->numericUpDown20->Size = System::Drawing::Size(100, 20);
			this->numericUpDown20->TabIndex = 17;
			this->numericUpDown20->ValueChanged += gcnew System::EventHandler(this, &Form1::numericUpDown1_ValueChanged);
			// 
			// numericUpDown5
			// 
			this->numericUpDown5->Location = System::Drawing::Point(109, 145);
			this->numericUpDown5->Name = L"numericUpDown5";
			this->numericUpDown5->Size = System::Drawing::Size(100, 20);
			this->numericUpDown5->TabIndex = 17;
			this->numericUpDown5->ValueChanged += gcnew System::EventHandler(this, &Form1::numericUpDown1_ValueChanged);
			// 
			// numericUpDown19
			// 
			this->numericUpDown19->Location = System::Drawing::Point(491, 299);
			this->numericUpDown19->Name = L"numericUpDown19";
			this->numericUpDown19->Size = System::Drawing::Size(100, 20);
			this->numericUpDown19->TabIndex = 17;
			this->numericUpDown19->ValueChanged += gcnew System::EventHandler(this, &Form1::numericUpDown1_ValueChanged);
			// 
			// numericUpDown10
			// 
			this->numericUpDown10->Location = System::Drawing::Point(109, 299);
			this->numericUpDown10->Name = L"numericUpDown10";
			this->numericUpDown10->Size = System::Drawing::Size(100, 20);
			this->numericUpDown10->TabIndex = 17;
			this->numericUpDown10->ValueChanged += gcnew System::EventHandler(this, &Form1::numericUpDown1_ValueChanged);
			// 
			// numericUpDown18
			// 
			this->numericUpDown18->Location = System::Drawing::Point(491, 93);
			this->numericUpDown18->Name = L"numericUpDown18";
			this->numericUpDown18->Size = System::Drawing::Size(100, 20);
			this->numericUpDown18->TabIndex = 17;
			this->numericUpDown18->ValueChanged += gcnew System::EventHandler(this, &Form1::numericUpDown1_ValueChanged);
			// 
			// numericUpDown3
			// 
			this->numericUpDown3->Location = System::Drawing::Point(109, 93);
			this->numericUpDown3->Name = L"numericUpDown3";
			this->numericUpDown3->Size = System::Drawing::Size(100, 20);
			this->numericUpDown3->TabIndex = 17;
			this->numericUpDown3->ValueChanged += gcnew System::EventHandler(this, &Form1::numericUpDown1_ValueChanged);
			// 
			// numericUpDown17
			// 
			this->numericUpDown17->Location = System::Drawing::Point(491, 247);
			this->numericUpDown17->Name = L"numericUpDown17";
			this->numericUpDown17->Size = System::Drawing::Size(100, 20);
			this->numericUpDown17->TabIndex = 17;
			this->numericUpDown17->ValueChanged += gcnew System::EventHandler(this, &Form1::numericUpDown1_ValueChanged);
			// 
			// numericUpDown16
			// 
			this->numericUpDown16->Location = System::Drawing::Point(491, 41);
			this->numericUpDown16->Name = L"numericUpDown16";
			this->numericUpDown16->Size = System::Drawing::Size(100, 20);
			this->numericUpDown16->TabIndex = 17;
			this->numericUpDown16->ValueChanged += gcnew System::EventHandler(this, &Form1::numericUpDown1_ValueChanged);
			// 
			// numericUpDown9
			// 
			this->numericUpDown9->Location = System::Drawing::Point(109, 247);
			this->numericUpDown9->Name = L"numericUpDown9";
			this->numericUpDown9->Size = System::Drawing::Size(100, 20);
			this->numericUpDown9->TabIndex = 17;
			this->numericUpDown9->ValueChanged += gcnew System::EventHandler(this, &Form1::numericUpDown1_ValueChanged);
			// 
			// checkBox29
			// 
			this->checkBox29->Location = System::Drawing::Point(352, 379);
			this->checkBox29->Name = L"checkBox29";
			this->checkBox29->Size = System::Drawing::Size(120, 20);
			this->checkBox29->TabIndex = 0;
			this->checkBox29->Text = L"checkBox1";
			this->checkBox29->UseVisualStyleBackColor = true;
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(109, 41);
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(100, 20);
			this->numericUpDown1->TabIndex = 17;
			this->numericUpDown1->ValueChanged += gcnew System::EventHandler(this, &Form1::numericUpDown1_ValueChanged);
			// 
			// checkBox28
			// 
			this->checkBox28->Location = System::Drawing::Point(352, 301);
			this->checkBox28->Name = L"checkBox28";
			this->checkBox28->Size = System::Drawing::Size(120, 20);
			this->checkBox28->TabIndex = 0;
			this->checkBox28->Text = L"checkBox1";
			this->checkBox28->UseVisualStyleBackColor = true;
			// 
			// checkBox16
			// 
			this->checkBox16->Location = System::Drawing::Point(7, 379);
			this->checkBox16->Name = L"checkBox16";
			this->checkBox16->Size = System::Drawing::Size(100, 20);
			this->checkBox16->TabIndex = 0;
			this->checkBox16->Text = L"checkBox1";
			this->checkBox16->UseVisualStyleBackColor = true;
			// 
			// checkBox27
			// 
			this->checkBox27->Location = System::Drawing::Point(352, 145);
			this->checkBox27->Name = L"checkBox27";
			this->checkBox27->Size = System::Drawing::Size(120, 20);
			this->checkBox27->TabIndex = 0;
			this->checkBox27->Text = L"CHIC.PEPP";
			this->checkBox27->UseVisualStyleBackColor = true;
			// 
			// checkBox11
			// 
			this->checkBox11->Location = System::Drawing::Point(7, 301);
			this->checkBox11->Name = L"checkBox11";
			this->checkBox11->Size = System::Drawing::Size(100, 20);
			this->checkBox11->TabIndex = 0;
			this->checkBox11->Text = L"checkBox1";
			this->checkBox11->UseVisualStyleBackColor = true;
			// 
			// checkBox26
			// 
			this->checkBox26->Location = System::Drawing::Point(352, 353);
			this->checkBox26->Name = L"checkBox26";
			this->checkBox26->Size = System::Drawing::Size(120, 20);
			this->checkBox26->TabIndex = 0;
			this->checkBox26->Text = L"CHIC.SPL.FP";
			this->checkBox26->UseVisualStyleBackColor = true;
			// 
			// checkBox7
			// 
			this->checkBox7->Location = System::Drawing::Point(7, 145);
			this->checkBox7->Name = L"checkBox7";
			this->checkBox7->Size = System::Drawing::Size(100, 20);
			this->checkBox7->TabIndex = 0;
			this->checkBox7->Text = L"GOBICHILLY";
			this->checkBox7->UseVisualStyleBackColor = true;
			// 
			// checkBox25
			// 
			this->checkBox25->Location = System::Drawing::Point(352, 275);
			this->checkBox25->Name = L"checkBox25";
			this->checkBox25->Size = System::Drawing::Size(120, 20);
			this->checkBox25->TabIndex = 0;
			this->checkBox25->Text = L"APPOLO.FISH";
			this->checkBox25->UseVisualStyleBackColor = true;
			// 
			// checkBox15
			// 
			this->checkBox15->Location = System::Drawing::Point(7, 353);
			this->checkBox15->Name = L"checkBox15";
			this->checkBox15->Size = System::Drawing::Size(100, 20);
			this->checkBox15->TabIndex = 0;
			this->checkBox15->Text = L"TOMATARICE";
			this->checkBox15->UseVisualStyleBackColor = true;
			// 
			// checkBox24
			// 
			this->checkBox24->Location = System::Drawing::Point(352, 145);
			this->checkBox24->Name = L"checkBox24";
			this->checkBox24->Size = System::Drawing::Size(120, 20);
			this->checkBox24->TabIndex = 0;
			this->checkBox24->Text = L"checkBox1";
			this->checkBox24->UseVisualStyleBackColor = true;
			// 
			// checkBox10
			// 
			this->checkBox10->Location = System::Drawing::Point(7, 275);
			this->checkBox10->Name = L"checkBox10";
			this->checkBox10->Size = System::Drawing::Size(100, 20);
			this->checkBox10->TabIndex = 0;
			this->checkBox10->Text = L"RAVAIDLY";
			this->checkBox10->UseVisualStyleBackColor = true;
			// 
			// checkBox23
			// 
			this->checkBox23->Location = System::Drawing::Point(352, 221);
			this->checkBox23->Name = L"checkBox23";
			this->checkBox23->Size = System::Drawing::Size(120, 20);
			this->checkBox23->TabIndex = 0;
			this->checkBox23->Text = L"MUT.TIKKA";
			this->checkBox23->UseVisualStyleBackColor = true;
			// 
			// checkBox5
			// 
			this->checkBox5->Location = System::Drawing::Point(7, 145);
			this->checkBox5->Name = L"checkBox5";
			this->checkBox5->Size = System::Drawing::Size(100, 20);
			this->checkBox5->TabIndex = 0;
			this->checkBox5->Text = L"checkBox1";
			this->checkBox5->UseVisualStyleBackColor = true;
			// 
			// checkBox22
			// 
			this->checkBox22->Location = System::Drawing::Point(352, 119);
			this->checkBox22->Name = L"checkBox22";
			this->checkBox22->Size = System::Drawing::Size(120, 20);
			this->checkBox22->TabIndex = 0;
			this->checkBox22->Text = L"CHICK.BUTTER";
			this->checkBox22->UseVisualStyleBackColor = true;
			// 
			// checkBox9
			// 
			this->checkBox9->Location = System::Drawing::Point(7, 221);
			this->checkBox9->Name = L"checkBox9";
			this->checkBox9->Size = System::Drawing::Size(100, 20);
			this->checkBox9->TabIndex = 0;
			this->checkBox9->Text = L"LEMONRICE";
			this->checkBox9->UseVisualStyleBackColor = true;
			// 
			// checkBox21
			// 
			this->checkBox21->Location = System::Drawing::Point(352, 195);
			this->checkBox21->Name = L"checkBox21";
			this->checkBox21->Size = System::Drawing::Size(120, 20);
			this->checkBox21->TabIndex = 0;
			this->checkBox21->Text = L"CHICK.DUM.BIR";
			this->checkBox21->UseVisualStyleBackColor = true;
			// 
			// checkBox4
			// 
			this->checkBox4->Location = System::Drawing::Point(7, 119);
			this->checkBox4->Name = L"checkBox4";
			this->checkBox4->Size = System::Drawing::Size(100, 20);
			this->checkBox4->TabIndex = 0;
			this->checkBox4->Text = L"POORI";
			this->checkBox4->UseVisualStyleBackColor = true;
			// 
			// checkBox20
			// 
			this->checkBox20->Location = System::Drawing::Point(352, 65);
			this->checkBox20->Name = L"checkBox20";
			this->checkBox20->Size = System::Drawing::Size(120, 20);
			this->checkBox20->TabIndex = 0;
			this->checkBox20->Text = L"CHICK.BIRIYANI";
			this->checkBox20->UseVisualStyleBackColor = true;
			// 
			// checkBox8
			// 
			this->checkBox8->Location = System::Drawing::Point(7, 195);
			this->checkBox8->Name = L"checkBox8";
			this->checkBox8->Size = System::Drawing::Size(100, 20);
			this->checkBox8->TabIndex = 0;
			this->checkBox8->Text = L"SSPECIAL";
			this->checkBox8->UseVisualStyleBackColor = true;
			// 
			// checkBox19
			// 
			this->checkBox19->Location = System::Drawing::Point(352, 39);
			this->checkBox19->Name = L"checkBox19";
			this->checkBox19->Size = System::Drawing::Size(120, 20);
			this->checkBox19->TabIndex = 0;
			this->checkBox19->Text = L"CHICKENTIKKA";
			this->checkBox19->UseVisualStyleBackColor = true;
			// 
			// checkBox2
			// 
			this->checkBox2->Location = System::Drawing::Point(7, 66);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(100, 20);
			this->checkBox2->TabIndex = 0;
			this->checkBox2->Text = L"DOSA";
			this->checkBox2->UseVisualStyleBackColor = true;
			this->checkBox2->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox2_CheckedChanged);
			// 
			// checkBox1
			// 
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->checkBox1->Location = System::Drawing::Point(7, 39);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(100, 20);
			this->checkBox1->TabIndex = 0;
			this->checkBox1->Text = L"GOBI65";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox1_CheckedChanged);
			// 
			// tabPage3
			// 
			this->tabPage3->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->tabPage3->Controls->Add(this->textBox31);
			this->tabPage3->Controls->Add(this->checkBox44);
			this->tabPage3->Controls->Add(this->checkBox51);
			this->tabPage3->Controls->Add(this->checkBox40);
			this->tabPage3->Controls->Add(this->checkBox50);
			this->tabPage3->Controls->Add(this->checkBox43);
			this->tabPage3->Controls->Add(this->checkBox49);
			this->tabPage3->Controls->Add(this->checkBox42);
			this->tabPage3->Controls->Add(this->checkBox48);
			this->tabPage3->Controls->Add(this->checkBox47);
			this->tabPage3->Controls->Add(this->checkBox38);
			this->tabPage3->Controls->Add(this->checkBox46);
			this->tabPage3->Controls->Add(this->checkBox41);
			this->tabPage3->Controls->Add(this->checkBox45);
			this->tabPage3->Controls->Add(this->checkBox39);
			this->tabPage3->Controls->Add(this->checkBox37);
			this->tabPage3->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(1075, 460);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"RECEIPT";
			// 
			// textBox31
			// 
			this->textBox31->AutoCompleteCustomSource->AddRange(gcnew cli::array< System::String^  >(3) {L"ahgdhshd", L"ahdjhs", L"ajsddhasd"});
			this->textBox31->Location = System::Drawing::Point(22, 28);
			this->textBox31->Name = L"textBox31";
			this->textBox31->Size = System::Drawing::Size(166, 20);
			this->textBox31->TabIndex = 1;
			this->textBox31->TextChanged += gcnew System::EventHandler(this, &Form1::textBox31_TextChanged);
			// 
			// checkBox44
			// 
			this->checkBox44->AutoSize = true;
			this->checkBox44->Location = System::Drawing::Point(528, 30);
			this->checkBox44->Name = L"checkBox44";
			this->checkBox44->Size = System::Drawing::Size(86, 17);
			this->checkBox44->TabIndex = 0;
			this->checkBox44->Text = L"checkBox37";
			this->checkBox44->UseVisualStyleBackColor = true;
			// 
			// checkBox51
			// 
			this->checkBox51->AutoSize = true;
			this->checkBox51->Location = System::Drawing::Point(528, 121);
			this->checkBox51->Name = L"checkBox51";
			this->checkBox51->Size = System::Drawing::Size(86, 17);
			this->checkBox51->TabIndex = 0;
			this->checkBox51->Text = L"checkBox37";
			this->checkBox51->UseVisualStyleBackColor = true;
			// 
			// checkBox40
			// 
			this->checkBox40->AutoSize = true;
			this->checkBox40->Location = System::Drawing::Point(6, 162);
			this->checkBox40->Name = L"checkBox40";
			this->checkBox40->Size = System::Drawing::Size(86, 17);
			this->checkBox40->TabIndex = 0;
			this->checkBox40->Text = L"checkBox37";
			this->checkBox40->UseVisualStyleBackColor = true;
			// 
			// checkBox50
			// 
			this->checkBox50->AutoSize = true;
			this->checkBox50->Location = System::Drawing::Point(6, 228);
			this->checkBox50->Name = L"checkBox50";
			this->checkBox50->Size = System::Drawing::Size(86, 17);
			this->checkBox50->TabIndex = 0;
			this->checkBox50->Text = L"checkBox37";
			this->checkBox50->UseVisualStyleBackColor = true;
			// 
			// checkBox43
			// 
			this->checkBox43->AutoSize = true;
			this->checkBox43->Location = System::Drawing::Point(6, 205);
			this->checkBox43->Name = L"checkBox43";
			this->checkBox43->Size = System::Drawing::Size(86, 17);
			this->checkBox43->TabIndex = 0;
			this->checkBox43->Text = L"checkBox37";
			this->checkBox43->UseVisualStyleBackColor = true;
			// 
			// checkBox49
			// 
			this->checkBox49->AutoSize = true;
			this->checkBox49->Location = System::Drawing::Point(6, 251);
			this->checkBox49->Name = L"checkBox49";
			this->checkBox49->Size = System::Drawing::Size(86, 17);
			this->checkBox49->TabIndex = 0;
			this->checkBox49->Text = L"checkBox37";
			this->checkBox49->UseVisualStyleBackColor = true;
			// 
			// checkBox42
			// 
			this->checkBox42->AutoSize = true;
			this->checkBox42->Location = System::Drawing::Point(528, 7);
			this->checkBox42->Name = L"checkBox42";
			this->checkBox42->Size = System::Drawing::Size(86, 17);
			this->checkBox42->TabIndex = 0;
			this->checkBox42->Text = L"checkBox37";
			this->checkBox42->UseVisualStyleBackColor = true;
			// 
			// checkBox48
			// 
			this->checkBox48->AutoSize = true;
			this->checkBox48->Location = System::Drawing::Point(528, 75);
			this->checkBox48->Name = L"checkBox48";
			this->checkBox48->Size = System::Drawing::Size(86, 17);
			this->checkBox48->TabIndex = 0;
			this->checkBox48->Text = L"checkBox37";
			this->checkBox48->UseVisualStyleBackColor = true;
			// 
			// checkBox47
			// 
			this->checkBox47->AutoSize = true;
			this->checkBox47->Location = System::Drawing::Point(528, 141);
			this->checkBox47->Name = L"checkBox47";
			this->checkBox47->Size = System::Drawing::Size(86, 17);
			this->checkBox47->TabIndex = 0;
			this->checkBox47->Text = L"checkBox37";
			this->checkBox47->UseVisualStyleBackColor = true;
			// 
			// checkBox38
			// 
			this->checkBox38->AutoSize = true;
			this->checkBox38->Location = System::Drawing::Point(6, 116);
			this->checkBox38->Name = L"checkBox38";
			this->checkBox38->Size = System::Drawing::Size(86, 17);
			this->checkBox38->TabIndex = 0;
			this->checkBox38->Text = L"checkBox37";
			this->checkBox38->UseVisualStyleBackColor = true;
			// 
			// checkBox46
			// 
			this->checkBox46->AutoSize = true;
			this->checkBox46->Location = System::Drawing::Point(528, 98);
			this->checkBox46->Name = L"checkBox46";
			this->checkBox46->Size = System::Drawing::Size(86, 17);
			this->checkBox46->TabIndex = 0;
			this->checkBox46->Text = L"checkBox37";
			this->checkBox46->UseVisualStyleBackColor = true;
			// 
			// checkBox41
			// 
			this->checkBox41->AutoSize = true;
			this->checkBox41->Location = System::Drawing::Point(6, 182);
			this->checkBox41->Name = L"checkBox41";
			this->checkBox41->Size = System::Drawing::Size(86, 17);
			this->checkBox41->TabIndex = 0;
			this->checkBox41->Text = L"checkBox37";
			this->checkBox41->UseVisualStyleBackColor = true;
			// 
			// checkBox45
			// 
			this->checkBox45->AutoSize = true;
			this->checkBox45->Location = System::Drawing::Point(528, 52);
			this->checkBox45->Name = L"checkBox45";
			this->checkBox45->Size = System::Drawing::Size(86, 17);
			this->checkBox45->TabIndex = 0;
			this->checkBox45->Text = L"checkBox37";
			this->checkBox45->UseVisualStyleBackColor = true;
			// 
			// checkBox39
			// 
			this->checkBox39->AutoSize = true;
			this->checkBox39->Location = System::Drawing::Point(6, 139);
			this->checkBox39->Name = L"checkBox39";
			this->checkBox39->Size = System::Drawing::Size(86, 17);
			this->checkBox39->TabIndex = 0;
			this->checkBox39->Text = L"checkBox37";
			this->checkBox39->UseVisualStyleBackColor = true;
			// 
			// checkBox37
			// 
			this->checkBox37->AutoSize = true;
			this->checkBox37->Location = System::Drawing::Point(7, 6);
			this->checkBox37->Name = L"checkBox37";
			this->checkBox37->Size = System::Drawing::Size(86, 17);
			this->checkBox37->TabIndex = 0;
			this->checkBox37->Text = L"checkBox37";
			this->checkBox37->UseVisualStyleBackColor = true;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->ClientSize = System::Drawing::Size(1350, 661);
			this->Controls->Add(this->menu);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->menu->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown30))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown29))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown15))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown28))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown27))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown14))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown26))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown25))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown13))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown24))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown23))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown22))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown21))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown20))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown19))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown18))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown17))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown16))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown1))->EndInit();
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label4_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void comboBox3_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 
		 }
private: System::Void comboBox2_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void tabPage1_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void tableLayoutPanel1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
		 }
private: System::Void tableLayoutPanel2_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
		 }
private: System::Void tableLayoutPanel2_Paint_1(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
		 }
private: System::Void checkBox18_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void numericUpDown11_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void numericUpDown9_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void numericUpDown1_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void checkBox2_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void checkBox1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void tabPage2_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void textBox31_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

		 }
};
}

