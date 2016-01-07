#include "student.h"
#include "discipline.h"
#include "saveTable.h"
#include <msclr\marshal_cppstd.h>
#pragma once

namespace ProjectList {
	ListOfDiscipline discipline;
	tableWithStudents someTable;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Ñâîäêà äëÿ myForm
	/// </summary>
	public ref class myForm : public System::Windows::Forms::Form
	{
	public:
		myForm(void)
		{
			InitializeComponent();
			//
			//TODO: äîáàâüòå êîä êîíñòğóêòîğà
			//
		}

	protected:
		/// <summary>
		/// Îñâîáîäèòü âñå èñïîëüçóåìûå ğåñóğñû.
		/// </summary>
		~myForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:













	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  ôàéëToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  saveToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  closeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  helpToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  aboutProgramToolStripMenuItem;

	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::ToolStripMenuItem^  â³äêğèòèToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ñïèñîêÑòóäåíò³âToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ñïèñîêÄèñöèïë³íToolStripMenuItem;

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::ComboBox^  comboBox2;
	private: System::Windows::Forms::ToolStripMenuItem^  òàáëèöÿToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ñïèñîêÑòóäåíò³âToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  äèñöèïë³íèToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  òàáëèöşToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  äàí³ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  â³äñîğòóâàòèToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ïîøóêToolStripMenuItem;
	private: System::Windows::Forms::ToolStripTextBox^  toolStripTextBox1;
	private: System::Windows::Forms::ToolStripTextBox^  toolStripTextBox2;
	private: System::Windows::Forms::ToolStripTextBox^  toolStripTextBox3;

	private: System::Windows::Forms::ToolStripMenuItem^  îíîâèòèÄàí³ÂÒàáëèö³ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ïî÷àòêîâàÒàáëèöÿToolStripMenuItem;












	protected:

	private:
		/// <summary>
		/// Òğåáóåòñÿ ïåğåìåííàÿ êîíñòğóêòîğà.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Îáÿçàòåëüíûé ìåòîä äëÿ ïîääåğæêè êîíñòğóêòîğà - íå èçìåíÿéòå
		/// ñîäåğæèìîå äàííîãî ìåòîäà ïğè ïîìîùè ğåäàêòîğà êîäà.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(myForm::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->ôàéëToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->â³äêğèòèToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->òàáëèöÿToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ñïèñîêÑòóäåíò³âToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ñïèñîêÄèñöèïë³íToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ñïèñîêÑòóäåíò³âToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->äèñöèïë³íèToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->òàáëèöşToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->closeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->äàí³ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->â³äñîğòóâàòèToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ïîøóêToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripTextBox1 = (gcnew System::Windows::Forms::ToolStripTextBox());
			this->toolStripTextBox2 = (gcnew System::Windows::Forms::ToolStripTextBox());
			this->toolStripTextBox3 = (gcnew System::Windows::Forms::ToolStripTextBox());
			this->ïî÷àòêîâàÒàáëèöÿToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->îíîâèòèÄàí³ÂÒàáëèö³ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->helpToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aboutProgramToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->ôàéëToolStripMenuItem,
					this->äàí³ToolStripMenuItem, this->helpToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(558, 24);
			this->menuStrip1->TabIndex = 9;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// ôàéëToolStripMenuItem
			// 
			this->ôàéëToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->â³äêğèòèToolStripMenuItem,
					this->saveToolStripMenuItem, this->closeToolStripMenuItem
			});
			this->ôàéëToolStripMenuItem->Name = L"ôàéëToolStripMenuItem";
			this->ôàéëToolStripMenuItem->Size = System::Drawing::Size(48, 20);
			this->ôàéëToolStripMenuItem->Text = L"Ôàéë";
			// 
			// â³äêğèòèToolStripMenuItem
			// 
			this->â³äêğèòèToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->òàáëèöÿToolStripMenuItem,
					this->ñïèñîêÑòóäåíò³âToolStripMenuItem, this->ñïèñîêÄèñöèïë³íToolStripMenuItem
			});
			this->â³äêğèòèToolStripMenuItem->Name = L"â³äêğèòèToolStripMenuItem";
			this->â³äêğèòèToolStripMenuItem->Size = System::Drawing::Size(131, 22);
			this->â³äêğèòèToolStripMenuItem->Text = L"Â³äêğèòè...";
			// 
			// òàáëèöÿToolStripMenuItem
			// 
			this->òàáëèöÿToolStripMenuItem->Name = L"òàáëèöÿToolStripMenuItem";
			this->òàáëèöÿToolStripMenuItem->Size = System::Drawing::Size(175, 22);
			this->òàáëèöÿToolStripMenuItem->Text = L"Òàáëèöÿ";
			this->òàáëèöÿToolStripMenuItem->Click += gcnew System::EventHandler(this, &myForm::òàáëèöÿToolStripMenuItem_Click);
			// 
			// ñïèñîêÑòóäåíò³âToolStripMenuItem
			// 
			this->ñïèñîêÑòóäåíò³âToolStripMenuItem->Name = L"ñïèñîêÑòóäåíò³âToolStripMenuItem";
			this->ñïèñîêÑòóäåíò³âToolStripMenuItem->Size = System::Drawing::Size(175, 22);
			this->ñïèñîêÑòóäåíò³âToolStripMenuItem->Text = L"Ñïèñîê ñòóäåíò³â";
			this->ñïèñîêÑòóäåíò³âToolStripMenuItem->Click += gcnew System::EventHandler(this, &myForm::ñïèñîêÑòóäåíò³âToolStripMenuItem_Click);
			// 
			// ñïèñîêÄèñöèïë³íToolStripMenuItem
			// 
			this->ñïèñîêÄèñöèïë³íToolStripMenuItem->Name = L"ñïèñîêÄèñöèïë³íToolStripMenuItem";
			this->ñïèñîêÄèñöèïë³íToolStripMenuItem->Size = System::Drawing::Size(175, 22);
			this->ñïèñîêÄèñöèïë³íToolStripMenuItem->Text = L"Ñïèñîê äèñöèïë³í";
			this->ñïèñîêÄèñöèïë³íToolStripMenuItem->Click += gcnew System::EventHandler(this, &myForm::ñïèñîêÄèñöèïë³íToolStripMenuItem_Click);
			// 
			// saveToolStripMenuItem
			// 
			this->saveToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->ñïèñîêÑòóäåíò³âToolStripMenuItem1,
					this->äèñöèïë³íèToolStripMenuItem, this->òàáëèöşToolStripMenuItem
			});
			this->saveToolStripMenuItem->Name = L"saveToolStripMenuItem";
			this->saveToolStripMenuItem->Size = System::Drawing::Size(131, 22);
			this->saveToolStripMenuItem->Text = L"Çáåğåãòè";
			// 
			// ñïèñîêÑòóäåíò³âToolStripMenuItem1
			// 
			this->ñïèñîêÑòóäåíò³âToolStripMenuItem1->Name = L"ñïèñîêÑòóäåíò³âToolStripMenuItem1";
			this->ñïèñîêÑòóäåíò³âToolStripMenuItem1->Size = System::Drawing::Size(168, 22);
			this->ñïèñîêÑòóäåíò³âToolStripMenuItem1->Text = L"Ñïèñîê ñòóäåíò³â";
			this->ñïèñîêÑòóäåíò³âToolStripMenuItem1->Click += gcnew System::EventHandler(this, &myForm::ñïèñîêÑòóäåíò³âToolStripMenuItem1_Click);
			// 
			// äèñöèïë³íèToolStripMenuItem
			// 
			this->äèñöèïë³íèToolStripMenuItem->Name = L"äèñöèïë³íèToolStripMenuItem";
			this->äèñöèïë³íèToolStripMenuItem->Size = System::Drawing::Size(168, 22);
			this->äèñöèïë³íèToolStripMenuItem->Text = L"Äèñöèïë³íè";
			this->äèñöèïë³íèToolStripMenuItem->Click += gcnew System::EventHandler(this, &myForm::äèñöèïë³íèToolStripMenuItem_Click);
			// 
			// òàáëèöşToolStripMenuItem
			// 
			this->òàáëèöşToolStripMenuItem->Name = L"òàáëèöşToolStripMenuItem";
			this->òàáëèöşToolStripMenuItem->Size = System::Drawing::Size(168, 22);
			this->òàáëèöşToolStripMenuItem->Text = L"Òàáëèöş";
			this->òàáëèöşToolStripMenuItem->Click += gcnew System::EventHandler(this, &myForm::òàáëèöşToolStripMenuItem_Click);
			// 
			// closeToolStripMenuItem
			// 
			this->closeToolStripMenuItem->Name = L"closeToolStripMenuItem";
			this->closeToolStripMenuItem->Size = System::Drawing::Size(131, 22);
			this->closeToolStripMenuItem->Text = L"Âèõ³ä";
			this->closeToolStripMenuItem->Click += gcnew System::EventHandler(this, &myForm::closeToolStripMenuItem_Click);
			// 
			// äàí³ToolStripMenuItem
			// 
			this->äàí³ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->â³äñîğòóâàòèToolStripMenuItem,
					this->ïîøóêToolStripMenuItem, this->ïî÷àòêîâàÒàáëèöÿToolStripMenuItem, this->îíîâèòèÄàí³ÂÒàáëèö³ToolStripMenuItem
			});
			this->äàí³ToolStripMenuItem->Name = L"äàí³ToolStripMenuItem";
			this->äàí³ToolStripMenuItem->Size = System::Drawing::Size(43, 20);
			this->äàí³ToolStripMenuItem->Text = L"Äàí³";
			// 
			// â³äñîğòóâàòèToolStripMenuItem
			// 
			this->â³äñîğòóâàòèToolStripMenuItem->Name = L"â³äñîğòóâàòèToolStripMenuItem";
			this->â³äñîğòóâàòèToolStripMenuItem->Size = System::Drawing::Size(201, 22);
			this->â³äñîğòóâàòèToolStripMenuItem->Text = L"Â³äñîğòóâàòè";
			this->â³äñîğòóâàòèToolStripMenuItem->Click += gcnew System::EventHandler(this, &myForm::â³äñîğòóâàòèToolStripMenuItem_Click);
			// 
			// ïîøóêToolStripMenuItem
			// 
			this->ïîøóêToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->toolStripTextBox1,
					this->toolStripTextBox2, this->toolStripTextBox3
			});
			this->ïîøóêToolStripMenuItem->Name = L"ïîøóêToolStripMenuItem";
			this->ïîøóêToolStripMenuItem->Size = System::Drawing::Size(201, 22);
			this->ïîøóêToolStripMenuItem->Text = L"Ïîøóê";
			this->ïîøóêToolStripMenuItem->Click += gcnew System::EventHandler(this, &myForm::ïîøóêToolStripMenuItem_Click);
			// 
			// toolStripTextBox1
			// 
			this->toolStripTextBox1->Name = L"toolStripTextBox1";
			this->toolStripTextBox1->Size = System::Drawing::Size(100, 23);
			this->toolStripTextBox1->Text = L"Ïğ³çâèùå";
			// 
			// toolStripTextBox2
			// 
			this->toolStripTextBox2->Name = L"toolStripTextBox2";
			this->toolStripTextBox2->Size = System::Drawing::Size(100, 23);
			this->toolStripTextBox2->Text = L"²ì\'ÿ";
			// 
			// toolStripTextBox3
			// 
			this->toolStripTextBox3->Name = L"toolStripTextBox3";
			this->toolStripTextBox3->Size = System::Drawing::Size(100, 23);
			this->toolStripTextBox3->Text = L"Ïî-áàòüêîâ³";
			// 
			// ïî÷àòêîâàÒàáëèöÿToolStripMenuItem
			// 
			this->ïî÷àòêîâàÒàáëèöÿToolStripMenuItem->Name = L"ïî÷àòêîâàÒàáëèöÿToolStripMenuItem";
			this->ïî÷àòêîâàÒàáëèöÿToolStripMenuItem->Size = System::Drawing::Size(201, 22);
			this->ïî÷àòêîâàÒàáëèöÿToolStripMenuItem->Text = L"Ïî÷àòêîâà òàáëèöÿ";
			this->ïî÷àòêîâàÒàáëèöÿToolStripMenuItem->Click += gcnew System::EventHandler(this, &myForm::ïî÷àòêîâàÒàáëèöÿToolStripMenuItem_Click);
			// 
			// îíîâèòèÄàí³ÂÒàáëèö³ToolStripMenuItem
			// 
			this->îíîâèòèÄàí³ÂÒàáëèö³ToolStripMenuItem->Name = L"îíîâèòèÄàí³ÂÒàáëèö³ToolStripMenuItem";
			this->îíîâèòèÄàí³ÂÒàáëèö³ToolStripMenuItem->Size = System::Drawing::Size(201, 22);
			this->îíîâèòèÄàí³ÂÒàáëèö³ToolStripMenuItem->Text = L"Îíîâèòè äàí³ â òàáëèö³";
			this->îíîâèòèÄàí³ÂÒàáëèö³ToolStripMenuItem->Click += gcnew System::EventHandler(this, &myForm::îíîâèòèÄàí³ÂÒàáëèö³ToolStripMenuItem_Click);
			// 
			// helpToolStripMenuItem
			// 
			this->helpToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->aboutProgramToolStripMenuItem });
			this->helpToolStripMenuItem->Name = L"helpToolStripMenuItem";
			this->helpToolStripMenuItem->Size = System::Drawing::Size(44, 20);
			this->helpToolStripMenuItem->Text = L"Help";
			// 
			// aboutProgramToolStripMenuItem
			// 
			this->aboutProgramToolStripMenuItem->Name = L"aboutProgramToolStripMenuItem";
			this->aboutProgramToolStripMenuItem->Size = System::Drawing::Size(154, 22);
			this->aboutProgramToolStripMenuItem->Text = L"Ïğî ïğîãğàìó";
			this->aboutProgramToolStripMenuItem->Click += gcnew System::EventHandler(this, &myForm::aboutProgramToolStripMenuItem_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(12, 27);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(533, 236);
			this->dataGridView1->TabIndex = 10;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(9, 271);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(143, 16);
			this->label1->TabIndex = 12;
			this->label1->Text = L"Âèáåğ³òü äèñöèïë³íó";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"", L"-" });
			this->comboBox1->Location = System::Drawing::Point(158, 270);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(129, 21);
			this->comboBox1->TabIndex = 13;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &myForm::comboBox1_SelectedIndexChanged);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(293, 270);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(125, 21);
			this->textBox1->TabIndex = 14;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(424, 270);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(121, 21);
			this->button1->TabIndex = 15;
			this->button1->Text = L"Äîäàòè äèñöèïë³íó";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &myForm::button1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(9, 298);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(111, 16);
			this->label2->TabIndex = 12;
			this->label2->Text = L"Âèáåğ³òü îö³íêó";
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(7) { L"", L"-", L"1", L"2", L"3", L"4", L"5" });
			this->comboBox2->Location = System::Drawing::Point(158, 297);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(129, 21);
			this->comboBox2->TabIndex = 13;
			this->comboBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &myForm::comboBox2_SelectedIndexChanged);
			// 
			// myForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(558, 325);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->menuStrip1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->MaximizeBox = false;
			this->Name = L"myForm";
			this->Text = L"Çâ³ò ç äèñöèïë³í(è)";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &myForm::myForm_FormClosing);
			this->Load += gcnew System::EventHandler(this, &myForm::myForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	DataTable ^ Table = gcnew DataTable();
	private: System::Void closeToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		Application::Exit();
	}
	private: System::Void ñïèñîêÑòóäåíò³âToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		OpenFileDialog ^openFileDialog1 = gcnew OpenFileDialog;
		openFileDialog1->Filter = "Text Files|*.txt|All Files|*.*";
		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			System::IO::StreamReader ^ myStream = gcnew System::IO::StreamReader(openFileDialog1->FileName, System::Text::Encoding::Default);
			if (myStream != nullptr){
				DataTable ^ newTable = gcnew DataTable();
				newTable->Columns->Add("Ïğ³çâèùå");
				newTable->Columns->Add("²ì\'ÿ");
				newTable->Columns->Add("Ïî-áàòüêîâ³");
				newTable->Columns->Add("Äèñöèïë³íà");
				newTable->Columns->Add("Îö³íêà");
				String^ strFileName = openFileDialog1->InitialDirectory + openFileDialog1->FileName;
				ListOfStudents A(msclr::interop::marshal_as<string>(strFileName));
				tableWithStudents Z(A);
				someTable = Z;
				someTable.sort();
				try{
					if (!A.getOpen())
						throw 1;
					else{
						for (int i = 0; i < someTable.getSize(); i++)
							newTable->Rows->Add(msclr::interop::marshal_as<String^>(someTable[i].getStud().getSecondName()),
							msclr::interop::marshal_as<String^>(someTable[i].getStud().getName()),
							msclr::interop::marshal_as<String^>(someTable[i].getStud().getSurName()),
							msclr::interop::marshal_as<String^>(someTable[i].getDiscipline()),
							msclr::interop::marshal_as<String^>(someTable[i].getValue()));
					}
				}
				catch(int){
					MessageBox::Show("Íåìîæëèâî â³äêğèòè ôàéë!", "Ïîìèëêà");
				}
				dataGridView1->DataSource = newTable;
				Table = newTable;
				myStream->Close();
			}
		}
	}
	private: System::Void ñïèñîêÄèñöèïë³íToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		OpenFileDialog ^openFileDialog1 = gcnew OpenFileDialog;
		openFileDialog1->Filter = "Text Files|*.txt|All Files|*.*"/*|PDF Files|*.pdf|Excel File(2003)|*.xls|Excel File(2003+)|*.xlsx|Word Files(2003)|*.doc|Word Files(2007+)|*.docx|All Files|*.*"*/;
		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			System::IO::StreamReader ^ myStream = gcnew System::IO::StreamReader(openFileDialog1->FileName, System::Text::Encoding::Default);
			if (myStream != nullptr){
				String^ strFileName = openFileDialog1->InitialDirectory + openFileDialog1->FileName;
				ListOfDiscipline A(msclr::interop::marshal_as<string>(strFileName));
				for (int i = 0; i < discipline.getSize(); i++){
					if (comboBox1->Items->Contains(msclr::interop::marshal_as<String^>(discipline[i].getName())->ToLower())){
						MessageBox::Show("Çíà÷åííÿ " + msclr::interop::marshal_as<String^>(discipline[i].getName()) + " âæå º â âàğ³àíòàõ!", "Ïîìèëêà! Îäíàêîâ³ çíà÷åííÿ.");
					}
					else{
						comboBox1->Items->Add(msclr::interop::marshal_as<String^>(discipline[i].getName())->ToLower());
						discipline.add(A[i]);
					}
				}
				myStream->Close();
			}
		}
	}
	
	//information about creator this form, which is version, etc.
	private: System::Void aboutProgramToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		MessageBox::Show("Ïğîãğàìà ğîçğîáëåíà Áîíäàğåì Ìàêñèìîì.\nÂåğñ³ÿ 2.0\n© MaxBond Inc\nÂñ³ ïğàâà çàõèùåí³.", "Çâ³ò ç äèñöèïë³í(è)");
	}
	
	//add rable to form
	private: System::Void myForm_Load(System::Object^  sender, System::EventArgs^  e) {
		
		Table->Columns->Add("Ïğ³çâèùå");
		Table->Columns->Add("²ì\'ÿ");
		Table->Columns->Add("Ïî-áàòüêîâ³");
		Table->Columns->Add("Äèñöèïë³íà");
		Table->Columns->Add("Îö³íêà");
		dataGridView1->DataSource = Table;
	}

	//close form 
	private: System::Void myForm_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) {
		String^ message = "Âè âïåâíåí³, ùî õî÷åòå çàêğèòè ôîğìó?\nÍå çáåğåæåí³ äàí³ áóäå âòğà÷åíî.";
		String^ caption = "Çàêğèòòÿ ôîğìè";
		MessageBoxButtons buttons = MessageBoxButtons::YesNo;
		System::Windows::Forms::DialogResult result;

		// Displays the MessageBox.
		result = MessageBox::Show(this, message, caption, buttons);
		if (result == System::Windows::Forms::DialogResult::Yes)
		{
			// Close//add discipline
			Application::Exit();
		}
	}
	
	//add discipline which entered in textBox1
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		if (textBox1->Text != ""){
			if (!comboBox1->Items->Contains((textBox1->Text)->ToLower())){
				comboBox1->Items->Add((textBox1->Text)->ToLower());
				discipline.add(msclr::interop::marshal_as<string>(textBox1->Text));
				textBox1->Clear();
			}
			else{
				MessageBox::Show("Çíà÷åííÿ " + textBox1->Text + " âæå º â âàğ³àíòàõ!", "Ïîìèëêà! Îäíàêîâ³ çíà÷åííÿ.");
				textBox1->Clear();
			}
		}
	}
	
	//choose discipline or value
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		Object^ selectedItem = comboBox1->SelectedItem;
		if (selectedItem->ToString() != ""){
			//dataGridView1->DataSource = Table;
			DataTable^ newTable = gcnew DataTable();
			newTable->Columns->Add("Ïğ³çâèùå");
			newTable->Columns->Add("²ì\'ÿ");
			newTable->Columns->Add("Ïî-áàòüêîâ³");
			newTable->Columns->Add("Äèñöèïë³íà");
			newTable->Columns->Add("Îö³íêà");
			tableWithStudents res;
			res = res.updateTable(dataGridView1);
			res = res.findByDiscipline(msclr::interop::marshal_as<string>(selectedItem->ToString()));
			for (int i = 0; i < res.getSize(); i++){
				newTable->Rows->Add(msclr::interop::marshal_as<String^ >(res[i].getStud().getSecondName()),
					msclr::interop::marshal_as<String^ >(res[i].getStud().getName()),
					msclr::interop::marshal_as<String^ >(res[i].getStud().getSurName()),
					msclr::interop::marshal_as<String^ >(res[i].getDiscipline()),
					msclr::interop::marshal_as<String^ >(res[i].getValue()));
			}
			dataGridView1->DataSource = newTable;
		}
		else {
			dataGridView1->DataSource = Table;
			someTable = someTable.updateTable(dataGridView1);
			comboBox2->SelectedIndex = 0;
		}
	}
	private: System::Void comboBox2_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		Object^ selectedItem = comboBox2->SelectedItem;
		if (selectedItem->ToString() != ""){
			//dataGridView1->DataSource = Table;
			DataTable^ newTable = gcnew DataTable();
			newTable->Columns->Add("Ïğ³çâèùå");
			newTable->Columns->Add("²ì\'ÿ");
			newTable->Columns->Add("Ïî-áàòüêîâ³");
			newTable->Columns->Add("Äèñöèïë³íà");
			newTable->Columns->Add("Îö³íêà");
			tableWithStudents res;
			res = res.updateTable(dataGridView1);
			res = res.findByValue(msclr::interop::marshal_as<string>(selectedItem->ToString()));
			for (int i = 0; i < res.getSize(); i++){
				newTable->Rows->Add(msclr::interop::marshal_as<String^ >(res[i].getStud().getSecondName()),
					msclr::interop::marshal_as<String^ >(res[i].getStud().getName()),
					msclr::interop::marshal_as<String^ >(res[i].getStud().getSurName()),
					msclr::interop::marshal_as<String^ >(res[i].getDiscipline()),
					msclr::interop::marshal_as<String^ >(res[i].getValue()));
			}
			dataGridView1->DataSource = newTable;
		}
		else {
			dataGridView1->DataSource = Table;
			someTable = someTable.updateTable(dataGridView1);
			comboBox1->SelectedIndex = 0;
		}
	}
	
	//open table
	private: System::Void òàáëèöÿToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		OpenFileDialog ^openFileDialog1 = gcnew OpenFileDialog;
		openFileDialog1->Filter = "Text Files|*.txt|All Files|*.*";
		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			System::IO::StreamReader ^ myStream = gcnew System::IO::StreamReader(openFileDialog1->FileName, System::Text::Encoding::Default);
			if (myStream != nullptr){
				DataTable ^ newTable = gcnew DataTable();
				newTable->Columns->Add("Ïğ³çâèùå");
				newTable->Columns->Add("²ì\'ÿ");
				newTable->Columns->Add("Ïî-áàòüêîâ³");
				newTable->Columns->Add("Äèñöèïë³íà");
				newTable->Columns->Add("Îö³íêà");
				String^ strFileName = openFileDialog1->InitialDirectory + openFileDialog1->FileName;
				tableWithStudents A(msclr::interop::marshal_as<string>(strFileName));
				someTable = A;
				try{
					if (!someTable.getOpen())
						throw 1;
					else{
						for (int i = 0; i < someTable.getSize(); i++)
							newTable->Rows->Add(msclr::interop::marshal_as<String^>(someTable[i].getStud().getSecondName()),
							msclr::interop::marshal_as<String^>(someTable[i].getStud().getName()),
							msclr::interop::marshal_as<String^>(someTable[i].getStud().getSurName()),
							msclr::interop::marshal_as<String^>(someTable[i].getDiscipline()),
							msclr::interop::marshal_as<String^>(someTable[i].getValue()));
					}
				}
				catch (int){
					MessageBox::Show("Ïåğåâ³ğòå ïğàâèëüí³ñòü ââîäó äàíèõ â ôàéë³ ÷è øëÿõ äî ôàéëó!", "Ïîìèëêà");
				}
				dataGridView1->DataSource = newTable;
				Table = newTable;
				myStream->Close();
			}
		}
	}
			 
	//Save table
	private: System::Void òàáëèöşToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		SaveFileDialog^ saveFileDialog = gcnew SaveFileDialog();
		saveFileDialog->Filter = "Text Files|*.txt|All Files|*.*";
		if (saveFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			tableWithStudents A;
			A = A.updateTable(dataGridView1);
			String^ strFileName = saveFileDialog->InitialDirectory + saveFileDialog->FileName;
			A.saveTable(msclr::interop::marshal_as<string>(strFileName));
		}
	}
	
	//save list of students
	private: System::Void ñïèñîêÑòóäåíò³âToolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) {
		SaveFileDialog^ saveFileDialog = gcnew SaveFileDialog();
		saveFileDialog->Filter = "Text Files|*.txt|All Files|*.*";
		
		if (saveFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			String^ strFileName = saveFileDialog->InitialDirectory + saveFileDialog->FileName;
			ListOfStudents A;
			for (int i = 0; i < dataGridView1->RowCount - 1; i++){
				string name = msclr::interop::marshal_as<string>(dataGridView1->Rows[i]->Cells[1]->Value->ToString());
				string secondName = msclr::interop::marshal_as<string>(dataGridView1->Rows[i]->Cells[0]->Value->ToString());
				string surname = msclr::interop::marshal_as<string>(dataGridView1->Rows[i]->Cells[2]->Value->ToString());
				A.add(secondName, name, surname);
			}
			A.saveStudents(msclr::interop::marshal_as<string>(strFileName));
		}
	}
	
	//save list of discipline
	private: System::Void äèñöèïë³íèToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		SaveFileDialog^ saveFileDialog = gcnew SaveFileDialog();
		saveFileDialog->Filter = "Text Files|*.txt|All Files|*.*";
		if (saveFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			ListOfDiscipline A;
			for (int i = 2; i < comboBox1->Items->Count; i++){
				A.add(Discipline(msclr::interop::marshal_as<string>(comboBox1->Items[i]->ToString())));
			}
			String^ strFileName = saveFileDialog->InitialDirectory + saveFileDialog->FileName;
			A.saveDiscipline(msclr::interop::marshal_as<string>(strFileName));
		}
	}
	
	//sort table by name alphabetly
	private: System::Void â³äñîğòóâàòèToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		someTable = someTable.updateTable(dataGridView1);
		someTable.sort();
		DataTable ^ newTable = gcnew DataTable();
		newTable->Columns->Add("Ïğ³çâèùå");
		newTable->Columns->Add("²ì\'ÿ");
		newTable->Columns->Add("Ïî-áàòüêîâ³");
		newTable->Columns->Add("Äèñöèïë³íà");
		newTable->Columns->Add("Îö³íêà");
		for (int i = 0; i < someTable.getSize(); i++)
			newTable->Rows->Add(msclr::interop::marshal_as<String^>(someTable[i].getStud().getSecondName()),
			msclr::interop::marshal_as<String^>(someTable[i].getStud().getName()),
			msclr::interop::marshal_as<String^>(someTable[i].getStud().getSurName()),
			msclr::interop::marshal_as<String^>(someTable[i].getDiscipline()),
			msclr::interop::marshal_as<String^>(someTable[i].getValue()));
		dataGridView1->DataSource = newTable;
	}
	
	private: System::Void ïîøóêToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		tableWithStudents A;
		A = A.updateTable(dataGridView1);
		A = A.find(msclr::interop::marshal_as<string>(toolStripTextBox1->Text->ToString()->ToLower()),
			msclr::interop::marshal_as<string>(toolStripTextBox2->Text->ToString()->ToLower()),
			msclr::interop::marshal_as<string>(toolStripTextBox3->Text->ToString()->ToLower()));
		toolStripTextBox1->Text = "Ïğ³çâèùå";
		toolStripTextBox2->Text = "²ì'ÿ";
		toolStripTextBox3->Text = "Ïî-áàòüêîâ³";
		DataTable ^newTable = gcnew DataTable();
		newTable->Columns->Add("Ïğ³çâèùå");
		newTable->Columns->Add("²ì\'ÿ");
		newTable->Columns->Add("Ïî-áàòüêîâ³");
		newTable->Columns->Add("Äèñöèïë³íà");
		newTable->Columns->Add("Îö³íêà");
		for (int i = 0; i < A.getSize(); i++)
			newTable->Rows->Add(msclr::interop::marshal_as<String^>(A[i].getStud().getSecondName()),
				msclr::interop::marshal_as<String^>(A[i].getStud().getName()),
				msclr::interop::marshal_as<String^>(A[i].getStud().getSurName()),
				msclr::interop::marshal_as<String^>(A[i].getDiscipline()),
				msclr::interop::marshal_as<String^>(A[i].getValue()));
		dataGridView1->DataSource = newTable;
	}
	//return table to first state
	private: System::Void â³äíîâèòèÒàáëèöşToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
	{	

		DataTable ^newTable = gcnew DataTable();
		newTable->Columns->Add("Ïğ³çâèùå");
		newTable->Columns->Add("²ì\'ÿ");
		newTable->Columns->Add("Ïî-áàòüêîâ³");
		newTable->Columns->Add("Äèñöèïë³íà");
		newTable->Columns->Add("Îö³íêà");
		for (int i = 0; i < someTable.getSize(); i++)
			newTable->Rows->Add(msclr::interop::marshal_as<String^>(someTable[i].getStud().getSecondName()),
			msclr::interop::marshal_as<String^>(someTable[i].getStud().getName()),
			msclr::interop::marshal_as<String^>(someTable[i].getStud().getSurName()),
			msclr::interop::marshal_as<String^>(someTable[i].getDiscipline()),
			msclr::interop::marshal_as<String^>(someTable[i].getValue()));
		dataGridView1->DataSource = newTable;
	}
	private: System::Void îíîâèòèÄàí³ÂÒàáëèö³ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		someTable = someTable.updateTable(dataGridView1);
		DataTable ^newTable = gcnew DataTable();
		newTable->Columns->Add("Ïğ³çâèùå");
		newTable->Columns->Add("²ì\'ÿ");
		newTable->Columns->Add("Ïî-áàòüêîâ³");
		newTable->Columns->Add("Äèñöèïë³íà");
		newTable->Columns->Add("Îö³íêà");
		for (int i = 0; i < someTable.getSize(); i++)
			newTable->Rows->Add(msclr::interop::marshal_as<String^>(someTable[i].getStud().getSecondName()),
			msclr::interop::marshal_as<String^>(someTable[i].getStud().getName()),
			msclr::interop::marshal_as<String^>(someTable[i].getStud().getSurName()),
			msclr::interop::marshal_as<String^>(someTable[i].getDiscipline()),
			msclr::interop::marshal_as<String^>(someTable[i].getValue()));
		Table = newTable;
		comboBox1->SelectedIndex = 0;
		comboBox2->SelectedIndex = 0;
		textBox1->Clear();
	}
	private: System::Void ïî÷àòêîâàÒàáëèöÿToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		DataTable ^newTable = gcnew DataTable();
		newTable->Columns->Add("Ïğ³çâèùå");
		newTable->Columns->Add("²ì\'ÿ");
		newTable->Columns->Add("Ïî-áàòüêîâ³");
		newTable->Columns->Add("Äèñöèïë³íà");
		newTable->Columns->Add("Îö³íêà");
		for (int i = 0; i < someTable.getSize(); i++)
			newTable->Rows->Add(msclr::interop::marshal_as<String^>(someTable[i].getStud().getSecondName()),
			msclr::interop::marshal_as<String^>(someTable[i].getStud().getName()),
			msclr::interop::marshal_as<String^>(someTable[i].getStud().getSurName()),
			msclr::interop::marshal_as<String^>(someTable[i].getDiscipline()),
			msclr::interop::marshal_as<String^>(someTable[i].getValue()));
		dataGridView1->DataSource = newTable;
		Table = newTable;
		comboBox1->SelectedIndex = 0;
		comboBox2->SelectedIndex = 0;
		textBox1->Clear();
	}
};
}