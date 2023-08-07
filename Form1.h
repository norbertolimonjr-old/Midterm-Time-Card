#pragma once

namespace CppCLRWinformsProjekt {

	using namespace System;
	using namespace System::IO;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	// Global Variables
	double hoursPerWeek = 0;
	double wage = 0;
	double totalSalary = 0;

	/// <summary>
	/// Zusammenfassung für Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufügen.

			//
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox30;
	private: System::Windows::Forms::TextBox^ textBox32;
	protected:

	protected:


	private: System::Windows::Forms::TextBox^ textBox31;


	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::TextBox^ textBox12;
	private: System::Windows::Forms::TextBox^ textBox13;
	private: System::Windows::Forms::TextBox^ textBox14;
	private: System::Windows::Forms::TextBox^ textBox15;
	private: System::Windows::Forms::TextBox^ textBox16;
	private: System::Windows::Forms::TextBox^ textBox17;
	private: System::Windows::Forms::TextBox^ textBox18;
	private: System::Windows::Forms::TextBox^ textBox19;
	private: System::Windows::Forms::TextBox^ textBox20;
	private: System::Windows::Forms::TextBox^ textBox21;
	private: System::Windows::Forms::TextBox^ textBox22;
	private: System::Windows::Forms::TextBox^ textBox23;
	private: System::Windows::Forms::TextBox^ textBox24;
	private: System::Windows::Forms::TextBox^ textBox25;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::CheckedListBox^ checkedListBox1;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel2;
	private: System::Windows::Forms::TextBox^ textBox26;
	private: System::Windows::Forms::TextBox^ textBox27;
	private: System::Windows::Forms::TextBox^ textBox28;
	private: System::Windows::Forms::TextBox^ textBox29;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ newToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ openToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ saveToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ saveAsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ printToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ printPreviewToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ exitToolStripMenuItem;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;
	private: System::Drawing::Printing::PrintDocument^ printDocument1;
	private: System::Windows::Forms::PrintDialog^ printDialog1;
	private: System::Windows::Forms::PrintPreviewDialog^ printPreviewDialog1;

	private: System::ComponentModel::IContainer^ components;


	protected:

	protected:

	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode für die Designerunterstützung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->textBox30 = (gcnew System::Windows::Forms::TextBox());
			this->textBox32 = (gcnew System::Windows::Forms::TextBox());
			this->textBox31 = (gcnew System::Windows::Forms::TextBox());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->textBox17 = (gcnew System::Windows::Forms::TextBox());
			this->textBox18 = (gcnew System::Windows::Forms::TextBox());
			this->textBox19 = (gcnew System::Windows::Forms::TextBox());
			this->textBox20 = (gcnew System::Windows::Forms::TextBox());
			this->textBox21 = (gcnew System::Windows::Forms::TextBox());
			this->textBox22 = (gcnew System::Windows::Forms::TextBox());
			this->textBox23 = (gcnew System::Windows::Forms::TextBox());
			this->textBox24 = (gcnew System::Windows::Forms::TextBox());
			this->textBox25 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->checkedListBox1 = (gcnew System::Windows::Forms::CheckedListBox());
			this->flowLayoutPanel2 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->textBox26 = (gcnew System::Windows::Forms::TextBox());
			this->textBox27 = (gcnew System::Windows::Forms::TextBox());
			this->textBox28 = (gcnew System::Windows::Forms::TextBox());
			this->textBox29 = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->newToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveAsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->printToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->printPreviewToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->printDocument1 = (gcnew System::Drawing::Printing::PrintDocument());
			this->printDialog1 = (gcnew System::Windows::Forms::PrintDialog());
			this->printPreviewDialog1 = (gcnew System::Windows::Forms::PrintPreviewDialog());
			this->flowLayoutPanel1->SuspendLayout();
			this->flowLayoutPanel2->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// textBox30
			// 
			this->textBox30->Location = System::Drawing::Point(3, 29);
			this->textBox30->Name = L"textBox30";
			this->textBox30->Size = System::Drawing::Size(100, 20);
			this->textBox30->TabIndex = 0;
			// 
			// textBox32
			// 
			this->textBox32->Location = System::Drawing::Point(533, 3);
			this->textBox32->Name = L"textBox32";
			this->textBox32->Size = System::Drawing::Size(100, 20);
			this->textBox32->TabIndex = 1;
			// 
			// textBox31
			// 
			this->textBox31->Location = System::Drawing::Point(427, 3);
			this->textBox31->Name = L"textBox31";
			this->textBox31->Size = System::Drawing::Size(100, 20);
			this->textBox31->TabIndex = 2;
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->Controls->Add(this->textBox1);
			this->flowLayoutPanel1->Controls->Add(this->textBox2);
			this->flowLayoutPanel1->Controls->Add(this->textBox3);
			this->flowLayoutPanel1->Controls->Add(this->textBox4);
			this->flowLayoutPanel1->Controls->Add(this->textBox31);
			this->flowLayoutPanel1->Controls->Add(this->textBox32);
			this->flowLayoutPanel1->Controls->Add(this->textBox5);
			this->flowLayoutPanel1->Controls->Add(this->textBox30);
			this->flowLayoutPanel1->Controls->Add(this->textBox6);
			this->flowLayoutPanel1->Controls->Add(this->textBox7);
			this->flowLayoutPanel1->Controls->Add(this->textBox8);
			this->flowLayoutPanel1->Controls->Add(this->textBox10);
			this->flowLayoutPanel1->Controls->Add(this->textBox9);
			this->flowLayoutPanel1->Controls->Add(this->textBox11);
			this->flowLayoutPanel1->Controls->Add(this->textBox12);
			this->flowLayoutPanel1->Controls->Add(this->textBox13);
			this->flowLayoutPanel1->Controls->Add(this->textBox14);
			this->flowLayoutPanel1->Controls->Add(this->textBox15);
			this->flowLayoutPanel1->Controls->Add(this->textBox16);
			this->flowLayoutPanel1->Controls->Add(this->textBox17);
			this->flowLayoutPanel1->Controls->Add(this->textBox18);
			this->flowLayoutPanel1->Controls->Add(this->textBox19);
			this->flowLayoutPanel1->Controls->Add(this->textBox20);
			this->flowLayoutPanel1->Controls->Add(this->textBox21);
			this->flowLayoutPanel1->Controls->Add(this->textBox22);
			this->flowLayoutPanel1->Controls->Add(this->textBox23);
			this->flowLayoutPanel1->Controls->Add(this->textBox24);
			this->flowLayoutPanel1->Controls->Add(this->textBox25);
			this->flowLayoutPanel1->Location = System::Drawing::Point(85, 201);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(746, 106);
			this->flowLayoutPanel1->TabIndex = 4;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(3, 3);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 3;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Form1::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(109, 3);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 4;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(215, 3);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 5;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(321, 3);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 20);
			this->textBox4->TabIndex = 6;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(639, 3);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 20);
			this->textBox5->TabIndex = 7;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(109, 29);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(100, 20);
			this->textBox6->TabIndex = 8;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(215, 29);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(100, 20);
			this->textBox7->TabIndex = 9;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(321, 29);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(100, 20);
			this->textBox8->TabIndex = 10;
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(427, 29);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(100, 20);
			this->textBox10->TabIndex = 12;
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(533, 29);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(100, 20);
			this->textBox9->TabIndex = 11;
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(639, 29);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(100, 20);
			this->textBox11->TabIndex = 13;
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(3, 55);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(100, 20);
			this->textBox12->TabIndex = 14;
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(109, 55);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(100, 20);
			this->textBox13->TabIndex = 15;
			// 
			// textBox14
			// 
			this->textBox14->Location = System::Drawing::Point(215, 55);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(100, 20);
			this->textBox14->TabIndex = 16;
			// 
			// textBox15
			// 
			this->textBox15->Location = System::Drawing::Point(321, 55);
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(100, 20);
			this->textBox15->TabIndex = 17;
			// 
			// textBox16
			// 
			this->textBox16->Location = System::Drawing::Point(427, 55);
			this->textBox16->Name = L"textBox16";
			this->textBox16->Size = System::Drawing::Size(100, 20);
			this->textBox16->TabIndex = 18;
			// 
			// textBox17
			// 
			this->textBox17->Location = System::Drawing::Point(533, 55);
			this->textBox17->Name = L"textBox17";
			this->textBox17->Size = System::Drawing::Size(100, 20);
			this->textBox17->TabIndex = 19;
			// 
			// textBox18
			// 
			this->textBox18->Location = System::Drawing::Point(639, 55);
			this->textBox18->Name = L"textBox18";
			this->textBox18->Size = System::Drawing::Size(100, 20);
			this->textBox18->TabIndex = 20;
			// 
			// textBox19
			// 
			this->textBox19->Location = System::Drawing::Point(3, 81);
			this->textBox19->Name = L"textBox19";
			this->textBox19->Size = System::Drawing::Size(100, 20);
			this->textBox19->TabIndex = 21;
			// 
			// textBox20
			// 
			this->textBox20->Location = System::Drawing::Point(109, 81);
			this->textBox20->Name = L"textBox20";
			this->textBox20->Size = System::Drawing::Size(100, 20);
			this->textBox20->TabIndex = 22;
			// 
			// textBox21
			// 
			this->textBox21->Location = System::Drawing::Point(215, 81);
			this->textBox21->Name = L"textBox21";
			this->textBox21->Size = System::Drawing::Size(100, 20);
			this->textBox21->TabIndex = 23;
			// 
			// textBox22
			// 
			this->textBox22->Location = System::Drawing::Point(321, 81);
			this->textBox22->Name = L"textBox22";
			this->textBox22->Size = System::Drawing::Size(100, 20);
			this->textBox22->TabIndex = 24;
			// 
			// textBox23
			// 
			this->textBox23->Location = System::Drawing::Point(427, 81);
			this->textBox23->Name = L"textBox23";
			this->textBox23->Size = System::Drawing::Size(100, 20);
			this->textBox23->TabIndex = 25;
			// 
			// textBox24
			// 
			this->textBox24->Location = System::Drawing::Point(533, 81);
			this->textBox24->Name = L"textBox24";
			this->textBox24->Size = System::Drawing::Size(100, 20);
			this->textBox24->TabIndex = 26;
			// 
			// textBox25
			// 
			this->textBox25->Location = System::Drawing::Point(639, 81);
			this->textBox25->Name = L"textBox25";
			this->textBox25->Size = System::Drawing::Size(100, 20);
			this->textBox25->TabIndex = 27;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(143, 171);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(45, 13);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Monday";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(246, 171);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(48, 13);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Tuesday";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(331, 170);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(69, 13);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Wednessday";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(455, 170);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(51, 13);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Thursday";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(577, 171);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(35, 13);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Friday";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(669, 171);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(49, 13);
			this->label6->TabIndex = 10;
			this->label6->Text = L"Saturday";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(781, 171);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(43, 13);
			this->label7->TabIndex = 11;
			this->label7->Text = L"Sunday";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(402, 81);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(81, 20);
			this->label8->TabIndex = 12;
			this->label8->Text = L"Time Card";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(11, 204);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(57, 13);
			this->label9->TabIndex = 13;
			this->label9->Text = L"Morning In";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(11, 230);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(57, 13);
			this->label10->TabIndex = 14;
			this->label10->Text = L"Lunch Out";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(11, 256);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(49, 13);
			this->label11->TabIndex = 15;
			this->label11->Text = L"Lunch In";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(11, 282);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(66, 13);
			this->label12->TabIndex = 16;
			this->label12->Text = L"Evening Out";
			// 
			// checkedListBox1
			// 
			this->checkedListBox1->FormattingEnabled = true;
			this->checkedListBox1->Location = System::Drawing::Point(113, 372);
			this->checkedListBox1->Name = L"checkedListBox1";
			this->checkedListBox1->Size = System::Drawing::Size(8, 4);
			this->checkedListBox1->TabIndex = 17;
			// 
			// flowLayoutPanel2
			// 
			this->flowLayoutPanel2->Controls->Add(this->textBox26);
			this->flowLayoutPanel2->Controls->Add(this->textBox27);
			this->flowLayoutPanel2->Controls->Add(this->textBox28);
			this->flowLayoutPanel2->Controls->Add(this->textBox29);
			this->flowLayoutPanel2->Location = System::Drawing::Point(85, 49);
			this->flowLayoutPanel2->Name = L"flowLayoutPanel2";
			this->flowLayoutPanel2->Size = System::Drawing::Size(109, 106);
			this->flowLayoutPanel2->TabIndex = 18;
			// 
			// textBox26
			// 
			this->textBox26->Location = System::Drawing::Point(3, 3);
			this->textBox26->Name = L"textBox26";
			this->textBox26->Size = System::Drawing::Size(100, 20);
			this->textBox26->TabIndex = 0;
			// 
			// textBox27
			// 
			this->textBox27->Location = System::Drawing::Point(3, 29);
			this->textBox27->Name = L"textBox27";
			this->textBox27->Size = System::Drawing::Size(100, 20);
			this->textBox27->TabIndex = 1;
			// 
			// textBox28
			// 
			this->textBox28->Location = System::Drawing::Point(3, 55);
			this->textBox28->Name = L"textBox28";
			this->textBox28->Size = System::Drawing::Size(100, 20);
			this->textBox28->TabIndex = 2;
			// 
			// textBox29
			// 
			this->textBox29->Location = System::Drawing::Point(3, 81);
			this->textBox29->Name = L"textBox29";
			this->textBox29->Size = System::Drawing::Size(100, 20);
			this->textBox29->TabIndex = 3;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(14, 58);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(53, 13);
			this->label13->TabIndex = 19;
			this->label13->Text = L"Employee";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(14, 81);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(62, 13);
			this->label14->TabIndex = 20;
			this->label14->Text = L"Total Hours";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(14, 107);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(36, 13);
			this->label15->TabIndex = 21;
			this->label15->Text = L"Wage";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(14, 133);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(63, 13);
			this->label16->TabIndex = 22;
			this->label16->Text = L"Total Salary";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(391, 351);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(92, 37);
			this->button1->TabIndex = 23;
			this->button1->Text = L"Calculate Time Card";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->fileToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(905, 24);
			this->menuStrip1->TabIndex = 24;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(7) {
				this->newToolStripMenuItem,
					this->openToolStripMenuItem, this->saveToolStripMenuItem, this->saveAsToolStripMenuItem, this->printToolStripMenuItem, this->printPreviewToolStripMenuItem,
					this->exitToolStripMenuItem
			});
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(37, 20);
			this->fileToolStripMenuItem->Text = L"File";
			// 
			// newToolStripMenuItem
			// 
			this->newToolStripMenuItem->Name = L"newToolStripMenuItem";
			this->newToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->newToolStripMenuItem->Text = L"New";
			this->newToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::newToolStripMenuItem_Click);
			// 
			// openToolStripMenuItem
			// 
			this->openToolStripMenuItem->Name = L"openToolStripMenuItem";
			this->openToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->openToolStripMenuItem->Text = L"Open";
			this->openToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::openToolStripMenuItem_Click);
			// 
			// saveToolStripMenuItem
			// 
			this->saveToolStripMenuItem->Name = L"saveToolStripMenuItem";
			this->saveToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->saveToolStripMenuItem->Text = L"Save";
			this->saveToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::saveToolStripMenuItem_Click);
			// 
			// saveAsToolStripMenuItem
			// 
			this->saveAsToolStripMenuItem->Name = L"saveAsToolStripMenuItem";
			this->saveAsToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->saveAsToolStripMenuItem->Text = L"Save As";
			this->saveAsToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::saveAsToolStripMenuItem_Click);
			// 
			// printToolStripMenuItem
			// 
			this->printToolStripMenuItem->Name = L"printToolStripMenuItem";
			this->printToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->printToolStripMenuItem->Text = L"Print";
			this->printToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::printToolStripMenuItem_Click);
			// 
			// printPreviewToolStripMenuItem
			// 
			this->printPreviewToolStripMenuItem->Name = L"printPreviewToolStripMenuItem";
			this->printPreviewToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->printPreviewToolStripMenuItem->Text = L"Print Preview";
			this->printPreviewToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::printPreviewToolStripMenuItem_Click);
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->exitToolStripMenuItem->Text = L"Exit";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::exitToolStripMenuItem_Click);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// printDocument1
			// 
			this->printDocument1->PrintPage += gcnew System::Drawing::Printing::PrintPageEventHandler(this, &Form1::printDocument1_PrintPage);
			// 
			// printDialog1
			// 
			this->printDialog1->UseEXDialog = true;
			// 
			// printPreviewDialog1
			// 
			this->printPreviewDialog1->AutoScrollMargin = System::Drawing::Size(0, 0);
			this->printPreviewDialog1->AutoScrollMinSize = System::Drawing::Size(0, 0);
			this->printPreviewDialog1->ClientSize = System::Drawing::Size(400, 300);
			this->printPreviewDialog1->Enabled = true;
			//this->printPreviewDialog1->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"printPreviewDialog1.Icon")));
			this->printPreviewDialog1->Name = L"printPreviewDialog1";
			this->printPreviewDialog1->Visible = false;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(905, 421);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->flowLayoutPanel2);
			this->Controls->Add(this->checkedListBox1);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->flowLayoutPanel1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->flowLayoutPanel1->ResumeLayout(false);
			this->flowLayoutPanel1->PerformLayout();
			this->flowLayoutPanel2->ResumeLayout(false);
			this->flowLayoutPanel2->PerformLayout();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
// Testbox1 double-click
#pragma endregion
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			// Calculte sum of each textBox in column for daily hours, add for total

			/*** Correction: Add the sum of the ranges not the sum of the values***/
			// Formula: Day == LunchOut-MorningIn + eveningOut-LunchIn AKA [2]-[1] + [4]-[3]

			// Monday: 1, 30, 12, 19
			TimeSpan MondayMorning = (Convert::ToDateTime(this->textBox30->Text) - Convert::ToDateTime(this->textBox1->Text));
			double MondayMorningTotalMin = (MondayMorning.Hours * 60) + MondayMorning.Minutes;
			TimeSpan MondayAfternoon = (Convert::ToDateTime(this->textBox19->Text) - Convert::ToDateTime(this->textBox12->Text));
			double MondayAfternoonTotalMin = (MondayAfternoon.Hours * 60) + MondayAfternoon.Minutes;
			double Monday = MondayMorningTotalMin + MondayAfternoonTotalMin;

			// Tuesday: 2, 6, 13, 20
			TimeSpan TuesdayMorning = (Convert::ToDateTime(this->textBox6->Text) - Convert::ToDateTime(this->textBox2->Text));
			double TuesdayMorningTotalMin = (TuesdayMorning.Hours * 60) + TuesdayMorning.Minutes;
			TimeSpan TuesdayAfternoon = (Convert::ToDateTime(this->textBox20->Text) - Convert::ToDateTime(this->textBox13->Text));
			double TuesdayAfternoonTotalMin = (TuesdayAfternoon.Hours * 60) + TuesdayAfternoon.Minutes;
			double Tuesday = TuesdayMorningTotalMin + TuesdayAfternoonTotalMin;


			// Wednessday: 3, 7, 14, 21
			TimeSpan WednessdayMorning = (Convert::ToDateTime(this->textBox7->Text) - Convert::ToDateTime(this->textBox3->Text));
			double WednessdayMorningTotalMin = (WednessdayMorning.Hours * 60) + WednessdayMorning.Minutes;
			TimeSpan WednessdayAfternoon = (Convert::ToDateTime(this->textBox21->Text) - Convert::ToDateTime(this->textBox14->Text));
			double WednessdayAfternoonTotalMin = (WednessdayAfternoon.Hours * 60) + WednessdayAfternoon.Minutes;
			double Wednessday = WednessdayMorningTotalMin + WednessdayAfternoonTotalMin;


			// Thursday: 4, 8, 15, 22
			TimeSpan ThursdayMorning = (Convert::ToDateTime(this->textBox8->Text) - Convert::ToDateTime(this->textBox3->Text));
			double ThursdayMorningTotalMin = (ThursdayMorning.Hours * 60) + ThursdayMorning.Minutes;
			TimeSpan ThursdayAfternoon = (Convert::ToDateTime(this->textBox22->Text) - Convert::ToDateTime(this->textBox15->Text));
			double ThursdayAfternoonTotalMin = (ThursdayAfternoon.Hours * 60) + ThursdayAfternoon.Minutes;
			double Thursday = ThursdayMorningTotalMin + ThursdayAfternoonTotalMin;


			// Friday: 31, 10, 16, 23
			TimeSpan FridayMorning = (Convert::ToDateTime(this->textBox10->Text) - Convert::ToDateTime(this->textBox31->Text));
			double FridayMorningTotalMin = (FridayMorning.Hours * 60) + FridayMorning.Minutes;
			TimeSpan FridayAfternoon = (Convert::ToDateTime(this->textBox23->Text) - Convert::ToDateTime(this->textBox16->Text));
			double FridayAfternoonTotalMin = (FridayAfternoon.Hours * 60) + FridayAfternoon.Minutes;
			double Friday = FridayMorningTotalMin + FridayAfternoonTotalMin;


			// Saturday: 32, 9, 17, 24
			TimeSpan SaturdayMorning = (Convert::ToDateTime(this->textBox9->Text) - Convert::ToDateTime(this->textBox32->Text));
			double SaturdayMorningTotalMin = (SaturdayMorning.Hours * 60) + SaturdayMorning.Minutes;
			TimeSpan SaturdayAfternoon = (Convert::ToDateTime(this->textBox24->Text) - Convert::ToDateTime(this->textBox17->Text));
			double SaturdayAfternoonTotalMin = (SaturdayAfternoon.Hours * 60) + SaturdayAfternoon.Minutes;
			double Saturday = SaturdayMorningTotalMin + SaturdayAfternoonTotalMin;


			// Sunday: 5, 11, 18, 25
			TimeSpan SundayMorning = (Convert::ToDateTime(this->textBox11->Text) - Convert::ToDateTime(this->textBox5->Text));
			double SundayMorningTotalMin = (SundayMorning.Hours * 60) + SundayMorning.Minutes;
			TimeSpan SundayAfternoon = (Convert::ToDateTime(this->textBox25->Text) - Convert::ToDateTime(this->textBox18->Text));
			double SundayAfternoonTotalMin = (SundayAfternoon.Hours * 60) + SundayAfternoon.Minutes;
			double Sunday = SundayMorningTotalMin + SundayAfternoonTotalMin;

			// Total Hours: Output to totalHours at textBox27
			hoursPerWeek = (Monday + Tuesday + Wednessday + Thursday + Friday + Saturday + Sunday) / 60;
			this->textBox27->Text = Convert::ToString(hoursPerWeek);
			// Designate Wages
			wage = Convert::ToDouble(this->textBox28->Text);
			totalSalary = hoursPerWeek * wage;
			this->textBox29->Text = Convert::ToString(totalSalary);
		}
		catch (DivideByZeroException^ myException)
		{
			MessageBox::Show("Cannot Divide by Zero!");
		}
		catch (FormatException^ myException)
		{
			MessageBox::Show("Invalid Format");
		}
		catch (...)
		{
			MessageBox::Show("You've encountered a problem");
		}
		finally
		{
			MessageBox::Show("That's all folks!");
		}
	}
private: System::Void exitToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	Form::Close();
}
private: System::Void newToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	// Clears each textBox
	this->textBox1->Text = "";
	this->textBox2->Text = "";
	this->textBox3->Text = "";
	this->textBox4->Text = "";
	this->textBox5->Text = "";
	this->textBox6->Text = "";
	this->textBox7->Text = "";
	this->textBox8->Text = "";
	this->textBox9->Text = "";
	this->textBox10->Text = "";
	this->textBox11->Text = "";
	this->textBox12->Text = "";
	this->textBox13->Text = "";
	this->textBox14->Text = "";
	this->textBox15->Text = "";
	this->textBox16->Text = "";
	this->textBox17->Text = "";
	this->textBox18->Text = "";
	this->textBox19->Text = "";
	this->textBox20->Text = "";
	this->textBox21->Text = "";
	this->textBox22->Text = "";
	this->textBox23->Text = "";
	this->textBox24->Text = "";
	this->textBox25->Text = "";
	this->textBox26->Text = "";
	this->textBox27->Text = "";
	this->textBox28->Text = "";
	this->textBox29->Text = "";
	this->textBox30->Text = "";
	this->textBox31->Text = "";
	this->textBox32->Text = "";
}
private: System::Void printDocument1_PrintPage(System::Object^ sender, System::Drawing::Printing::PrintPageEventArgs^ e) {
	Brush^ myBrush = gcnew SolidBrush(System::Drawing::Color::Black);
	System::Drawing::Font^ myFont = gcnew System::Drawing::Font("Arial", 10);

	//e has a graphics property, from graphics use the funtion DrawString (Draws words onto a page)
	//Draw string requires text, a font, a brush, and a location position for the text
	e->Graphics->DrawString(this->textBox1->Text, myFont, myBrush, this->textBox1->Location);
	e->Graphics->DrawString(this->textBox2->Text, myFont, myBrush, this->textBox2->Location);
	e->Graphics->DrawString(this->textBox3->Text, myFont, myBrush, this->textBox3->Location);
	e->Graphics->DrawString(this->textBox4->Text, myFont, myBrush, this->textBox4->Location);
	e->Graphics->DrawString(this->textBox5->Text, myFont, myBrush, this->textBox5->Location);
	e->Graphics->DrawString(this->textBox6->Text, myFont, myBrush, this->textBox6->Location);
	e->Graphics->DrawString(this->textBox7->Text, myFont, myBrush, this->textBox7->Location);
	e->Graphics->DrawString(this->textBox8->Text, myFont, myBrush, this->textBox8->Location);
	e->Graphics->DrawString(this->textBox9->Text, myFont, myBrush, this->textBox9->Location);
	e->Graphics->DrawString(this->textBox10->Text, myFont, myBrush, this->textBox10->Location);
	e->Graphics->DrawString(this->textBox11->Text, myFont, myBrush, this->textBox11->Location);
	e->Graphics->DrawString(this->textBox12->Text, myFont, myBrush, this->textBox12->Location);
	e->Graphics->DrawString(this->textBox13->Text, myFont, myBrush, this->textBox13->Location);
	e->Graphics->DrawString(this->textBox14->Text, myFont, myBrush, this->textBox14->Location);
	e->Graphics->DrawString(this->textBox15->Text, myFont, myBrush, this->textBox15->Location);
	e->Graphics->DrawString(this->textBox16->Text, myFont, myBrush, this->textBox16->Location);
	e->Graphics->DrawString(this->textBox17->Text, myFont, myBrush, this->textBox17->Location);
	e->Graphics->DrawString(this->textBox18->Text, myFont, myBrush, this->textBox18->Location);
	e->Graphics->DrawString(this->textBox19->Text, myFont, myBrush, this->textBox19->Location);
	e->Graphics->DrawString(this->textBox20->Text, myFont, myBrush, this->textBox20->Location);
	e->Graphics->DrawString(this->textBox21->Text, myFont, myBrush, this->textBox21->Location);
	e->Graphics->DrawString(this->textBox22->Text, myFont, myBrush, this->textBox22->Location);
	e->Graphics->DrawString(this->textBox23->Text, myFont, myBrush, this->textBox23->Location);
	e->Graphics->DrawString(this->textBox24->Text, myFont, myBrush, this->textBox24->Location);
	e->Graphics->DrawString(this->textBox25->Text, myFont, myBrush, this->textBox25->Location);
	e->Graphics->DrawString(this->textBox26->Text, myFont, myBrush, this->textBox26->Location);
	e->Graphics->DrawString(this->textBox27->Text, myFont, myBrush, this->textBox27->Location);
	e->Graphics->DrawString(this->textBox28->Text, myFont, myBrush, this->textBox28->Location);
	e->Graphics->DrawString(this->textBox29->Text, myFont, myBrush, this->textBox29->Location);
	e->Graphics->DrawString(this->textBox30->Text, myFont, myBrush, this->textBox30->Location);

	// Labels
	e->Graphics->DrawString(this->label1->Text, myFont, myBrush, this->label1->Location);
	e->Graphics->DrawString(this->label2->Text, myFont, myBrush, this->label2->Location);
	e->Graphics->DrawString(this->label3->Text, myFont, myBrush, this->label3->Location);
	e->Graphics->DrawString(this->label4->Text, myFont, myBrush, this->label4->Location);
	e->Graphics->DrawString(this->label5->Text, myFont, myBrush, this->label5->Location);
	e->Graphics->DrawString(this->label6->Text, myFont, myBrush, this->label6->Location);
	e->Graphics->DrawString(this->label7->Text, myFont, myBrush, this->label7->Location);
	e->Graphics->DrawString(this->label8->Text, myFont, myBrush, this->label8->Location);
	e->Graphics->DrawString(this->label9->Text, myFont, myBrush, this->label9->Location);
	e->Graphics->DrawString(this->label10->Text, myFont, myBrush, this->label10->Location);
	e->Graphics->DrawString(this->label11->Text, myFont, myBrush, this->label11->Location);
	e->Graphics->DrawString(this->label12->Text, myFont, myBrush, this->label12->Location);
	e->Graphics->DrawString(this->label13->Text, myFont, myBrush, this->label13->Location);
	e->Graphics->DrawString(this->label14->Text, myFont, myBrush, this->label14->Location);
	e->Graphics->DrawString(this->label15->Text, myFont, myBrush, this->label15->Location);
	e->Graphics->DrawString(this->label16->Text, myFont, myBrush, this->label16->Location);

}
private: System::Void printToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->printDialog1->Document = this->printDocument1; //store the image of the document
	if (printDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) //If print is selected
	{
		printDocument1->Print(); // ten print Document
	}

}
private: System::Void printPreviewToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->printPreviewDialog1->Document = this->printDocument1; //store the image of the document
	if (printPreviewDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) //If print is selected
	{
		printDocument1->Print(); // ten print Document
	}
}
private: System::Void saveAsToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	saveFileDialog1->Title = "This is a title for the dialog box";
	saveFileDialog1->FileName = "Default name";
	saveFileDialog1->DefaultExt = ".txt";
	saveFileDialog1->Filter = "text Files|*.txt";

	if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		FileStream^ fileName = gcnew FileStream(saveFileDialog1->FileName, FileMode::Create);

		StreamWriter^ outputObject = gcnew StreamWriter(fileName);

		outputObject->WriteLine(this->textBox1->Text);
		outputObject->WriteLine(this->textBox2->Text);
		outputObject->WriteLine(this->textBox3->Text);
		outputObject->WriteLine(this->textBox4->Text);
		outputObject->WriteLine(this->textBox5->Text);
		outputObject->WriteLine(this->textBox6->Text);
		outputObject->WriteLine(this->textBox7->Text);
		outputObject->WriteLine(this->textBox8->Text);
		outputObject->WriteLine(this->textBox9->Text);
		outputObject->WriteLine(this->textBox10->Text);
		outputObject->WriteLine(this->textBox11->Text);
		outputObject->WriteLine(this->textBox12->Text);
		outputObject->WriteLine(this->textBox13->Text);
		outputObject->WriteLine(this->textBox14->Text);
		outputObject->WriteLine(this->textBox15->Text);
		outputObject->WriteLine(this->textBox16->Text);
		outputObject->WriteLine(this->textBox17->Text);
		outputObject->WriteLine(this->textBox18->Text);
		outputObject->WriteLine(this->textBox19->Text);
		outputObject->WriteLine(this->textBox20->Text);
		outputObject->WriteLine(this->textBox21->Text);
		outputObject->WriteLine(this->textBox22->Text);
		outputObject->WriteLine(this->textBox23->Text);
		outputObject->WriteLine(this->textBox24->Text);
		outputObject->WriteLine(this->textBox25->Text);
		outputObject->WriteLine(this->textBox26->Text);
		outputObject->WriteLine(this->textBox27->Text);
		outputObject->WriteLine(this->textBox28->Text);
		outputObject->WriteLine(this->textBox29->Text);
		outputObject->WriteLine(this->textBox30->Text);
		outputObject->WriteLine(this->textBox31->Text);
		outputObject->WriteLine(this->textBox32->Text);

		outputObject->Close();
	}
}
private: System::Void openToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	openFileDialog1->Title = "This is a title for the dialog box";
	openFileDialog1->FileName = "Default Name";
	openFileDialog1->DefaultExt = ".txt";
	openFileDialog1->Filter = "Text Files|*.txt";

	if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		FileStream^ fileName = gcnew FileStream(openFileDialog1->FileName, FileMode::OpenOrCreate);

		StreamReader^ inputObject = gcnew StreamReader(fileName);

		this->textBox1->Text = inputObject->ReadLine();
		this->textBox2->Text = inputObject->ReadLine();
		this->textBox3->Text = inputObject->ReadLine();
		this->textBox4->Text = inputObject->ReadLine();
		this->textBox5->Text = inputObject->ReadLine();
		this->textBox6->Text = inputObject->ReadLine();
		this->textBox7->Text = inputObject->ReadLine();
		this->textBox8->Text = inputObject->ReadLine();
		this->textBox9->Text = inputObject->ReadLine();
		this->textBox10->Text = inputObject->ReadLine();
		this->textBox11->Text = inputObject->ReadLine();
		this->textBox12->Text = inputObject->ReadLine();
		this->textBox13->Text = inputObject->ReadLine();
		this->textBox14->Text = inputObject->ReadLine();
		this->textBox15->Text = inputObject->ReadLine();
		this->textBox16->Text = inputObject->ReadLine();
		this->textBox17->Text = inputObject->ReadLine();
		this->textBox18->Text = inputObject->ReadLine();
		this->textBox19->Text = inputObject->ReadLine();
		this->textBox20->Text = inputObject->ReadLine();
		this->textBox21->Text = inputObject->ReadLine();
		this->textBox22->Text = inputObject->ReadLine();
		this->textBox23->Text = inputObject->ReadLine();
		this->textBox24->Text = inputObject->ReadLine();
		this->textBox25->Text = inputObject->ReadLine();
		this->textBox26->Text = inputObject->ReadLine();
		this->textBox27->Text = inputObject->ReadLine();
		this->textBox28->Text = inputObject->ReadLine();
		this->textBox29->Text = inputObject->ReadLine();
		this->textBox30->Text = inputObject->ReadLine();
		this->textBox31->Text = inputObject->ReadLine();
		this->textBox32->Text = inputObject->ReadLine();

		inputObject->Close();
	}
}
private: System::Void saveToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	// If file exists, save. If file does not yet exist, save as
	saveFileDialog1->Title = "This is a title for the dialog box";
	saveFileDialog1->FileName = "Default name";
	saveFileDialog1->DefaultExt = ".txt";
	saveFileDialog1->Filter = "text Files|*.txt";

	if (this->openFileDialog1->FileName == this->saveFileDialog1->FileName) // File exists (Was already saved)
	{
		FileStream^ fileName = gcnew FileStream(openFileDialog1->FileName, FileMode::Append);

		StreamReader^ inputObject = gcnew StreamReader(fileName);

		this->textBox1->Text = inputObject->ReadLine();
		this->textBox2->Text = inputObject->ReadLine();
		this->textBox3->Text = inputObject->ReadLine();
		this->textBox4->Text = inputObject->ReadLine();
		this->textBox5->Text = inputObject->ReadLine();
		this->textBox6->Text = inputObject->ReadLine();
		this->textBox7->Text = inputObject->ReadLine();
		this->textBox8->Text = inputObject->ReadLine();
		this->textBox9->Text = inputObject->ReadLine();
		this->textBox10->Text = inputObject->ReadLine();
		this->textBox11->Text = inputObject->ReadLine();
		this->textBox12->Text = inputObject->ReadLine();
		this->textBox13->Text = inputObject->ReadLine();
		this->textBox14->Text = inputObject->ReadLine();
		this->textBox15->Text = inputObject->ReadLine();
		this->textBox16->Text = inputObject->ReadLine();
		this->textBox17->Text = inputObject->ReadLine();
		this->textBox18->Text = inputObject->ReadLine();
		this->textBox19->Text = inputObject->ReadLine();
		this->textBox20->Text = inputObject->ReadLine();
		this->textBox21->Text = inputObject->ReadLine();
		this->textBox22->Text = inputObject->ReadLine();
		this->textBox23->Text = inputObject->ReadLine();
		this->textBox24->Text = inputObject->ReadLine();
		this->textBox25->Text = inputObject->ReadLine();
		this->textBox26->Text = inputObject->ReadLine();
		this->textBox27->Text = inputObject->ReadLine();
		this->textBox28->Text = inputObject->ReadLine();
		this->textBox29->Text = inputObject->ReadLine();
		this->textBox30->Text = inputObject->ReadLine();
		this->textBox31->Text = inputObject->ReadLine();
		this->textBox32->Text = inputObject->ReadLine();

		inputObject->Close();
	}
	else {
		if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			FileStream^ fileName = gcnew FileStream(saveFileDialog1->FileName, FileMode::Create);

			StreamWriter^ outputObject = gcnew StreamWriter(fileName);

			outputObject->WriteLine(this->textBox1->Text);
			outputObject->WriteLine(this->textBox2->Text);
			outputObject->WriteLine(this->textBox3->Text);
			outputObject->WriteLine(this->textBox4->Text);
			outputObject->WriteLine(this->textBox5->Text);
			outputObject->WriteLine(this->textBox6->Text);
			outputObject->WriteLine(this->textBox7->Text);
			outputObject->WriteLine(this->textBox8->Text);
			outputObject->WriteLine(this->textBox9->Text);
			outputObject->WriteLine(this->textBox10->Text);
			outputObject->WriteLine(this->textBox11->Text);
			outputObject->WriteLine(this->textBox12->Text);
			outputObject->WriteLine(this->textBox13->Text);
			outputObject->WriteLine(this->textBox14->Text);
			outputObject->WriteLine(this->textBox15->Text);
			outputObject->WriteLine(this->textBox16->Text);
			outputObject->WriteLine(this->textBox17->Text);
			outputObject->WriteLine(this->textBox18->Text);
			outputObject->WriteLine(this->textBox19->Text);
			outputObject->WriteLine(this->textBox20->Text);
			outputObject->WriteLine(this->textBox21->Text);
			outputObject->WriteLine(this->textBox22->Text);
			outputObject->WriteLine(this->textBox23->Text);
			outputObject->WriteLine(this->textBox24->Text);
			outputObject->WriteLine(this->textBox25->Text);
			outputObject->WriteLine(this->textBox26->Text);
			outputObject->WriteLine(this->textBox27->Text);
			outputObject->WriteLine(this->textBox28->Text);
			outputObject->WriteLine(this->textBox29->Text);
			outputObject->WriteLine(this->textBox30->Text);
			outputObject->WriteLine(this->textBox31->Text);
			outputObject->WriteLine(this->textBox32->Text);

			outputObject->Close();
		}
	}
}
};
}