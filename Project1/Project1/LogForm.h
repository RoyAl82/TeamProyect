#pragma once
#include "Visitor.h"
#include "Professor.h"





using namespace System::IO;


namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for LogForm
	/// </summary>
	public ref class LogForm : public System::Windows::Forms::Form
	{
	public:
		LogForm(void)
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
		~LogForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ComboBox^  comboBox1;
	protected:
	private: System::Windows::Forms::ComboBox^  comboBox2;

	private: System::Windows::Forms::Button^  btnSubmit;

	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  fileToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  openToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  editToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  exitToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  helpToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  aboutToolStripMenuItem;


	private: System::Windows::Forms::FolderBrowserDialog^  folderBrowserDialog;
	private: System::Windows::Forms::TextBox^  tbName;
	private: System::Windows::Forms::Label^  lbName;
	private: System::Windows::Forms::Label^  lbProfName;
	private: System::Windows::Forms::Label^  lbPurpose;
	private: System::Windows::Forms::Label^  lbStudentID;
	private: System::Windows::Forms::TextBox^  tbStudentID;

	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>

		Visitor myVisitor;
		Professor myProfessor;

		Stream^ file;

		
		



#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->btnSubmit = (gcnew System::Windows::Forms::Button());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->editToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->helpToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aboutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->folderBrowserDialog = (gcnew System::Windows::Forms::FolderBrowserDialog());
			this->tbName = (gcnew System::Windows::Forms::TextBox());
			this->lbName = (gcnew System::Windows::Forms::Label());
			this->lbProfName = (gcnew System::Windows::Forms::Label());
			this->lbPurpose = (gcnew System::Windows::Forms::Label());
			this->lbStudentID = (gcnew System::Windows::Forms::Label());
			this->tbStudentID = (gcnew System::Windows::Forms::TextBox());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(505, 77);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(205, 21);
			this->comboBox1->TabIndex = 0;
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(759, 77);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(201, 21);
			this->comboBox2->TabIndex = 1;
			// 
			// btnSubmit
			// 
			this->btnSubmit->Location = System::Drawing::Point(441, 165);
			this->btnSubmit->Name = L"btnSubmit";
			this->btnSubmit->Size = System::Drawing::Size(75, 23);
			this->btnSubmit->TabIndex = 3;
			this->btnSubmit->Text = L"Submit";
			this->btnSubmit->UseVisualStyleBackColor = true;
			this->btnSubmit->Click += gcnew System::EventHandler(this, &LogForm::btnSubmit_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->fileToolStripMenuItem1,
					this->helpToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1008, 24);
			this->menuStrip1->TabIndex = 5;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// fileToolStripMenuItem1
			// 
			this->fileToolStripMenuItem1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->openToolStripMenuItem,
					this->editToolStripMenuItem1, this->exitToolStripMenuItem1
			});
			this->fileToolStripMenuItem1->Name = L"fileToolStripMenuItem1";
			this->fileToolStripMenuItem1->Size = System::Drawing::Size(37, 20);
			this->fileToolStripMenuItem1->Text = L"File";
			// 
			// openToolStripMenuItem
			// 
			this->openToolStripMenuItem->Name = L"openToolStripMenuItem";
			this->openToolStripMenuItem->Size = System::Drawing::Size(103, 22);
			this->openToolStripMenuItem->Text = L"Open";
			this->openToolStripMenuItem->Click += gcnew System::EventHandler(this, &LogForm::openToolStripMenuItem_Click);
			// 
			// editToolStripMenuItem1
			// 
			this->editToolStripMenuItem1->Name = L"editToolStripMenuItem1";
			this->editToolStripMenuItem1->Size = System::Drawing::Size(103, 22);
			this->editToolStripMenuItem1->Text = L"Edit";
			// 
			// exitToolStripMenuItem1
			// 
			this->exitToolStripMenuItem1->Name = L"exitToolStripMenuItem1";
			this->exitToolStripMenuItem1->Size = System::Drawing::Size(103, 22);
			this->exitToolStripMenuItem1->Text = L"Exit";
			// 
			// helpToolStripMenuItem
			// 
			this->helpToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->aboutToolStripMenuItem });
			this->helpToolStripMenuItem->Name = L"helpToolStripMenuItem";
			this->helpToolStripMenuItem->Size = System::Drawing::Size(44, 20);
			this->helpToolStripMenuItem->Text = L"Help";
			// 
			// aboutToolStripMenuItem
			// 
			this->aboutToolStripMenuItem->Name = L"aboutToolStripMenuItem";
			this->aboutToolStripMenuItem->Size = System::Drawing::Size(107, 22);
			this->aboutToolStripMenuItem->Text = L"About";
			// 
			// tbName
			// 
			this->tbName->Location = System::Drawing::Point(235, 77);
			this->tbName->Name = L"tbName";
			this->tbName->Size = System::Drawing::Size(215, 20);
			this->tbName->TabIndex = 6;
			// 
			// lbName
			// 
			this->lbName->AutoSize = true;
			this->lbName->Location = System::Drawing::Point(286, 49);
			this->lbName->Name = L"lbName";
			this->lbName->Size = System::Drawing::Size(105, 13);
			this->lbName->TabIndex = 7;
			this->lbName->Text = L"Name and Lastname";
			// 
			// lbProfName
			// 
			this->lbProfName->AutoSize = true;
			this->lbProfName->Location = System::Drawing::Point(560, 49);
			this->lbProfName->Name = L"lbProfName";
			this->lbProfName->Size = System::Drawing::Size(91, 13);
			this->lbProfName->TabIndex = 8;
			this->lbProfName->Text = L"Professor/Advisor";
			// 
			// lbPurpose
			// 
			this->lbPurpose->AutoSize = true;
			this->lbPurpose->Location = System::Drawing::Point(793, 49);
			this->lbPurpose->Name = L"lbPurpose";
			this->lbPurpose->Size = System::Drawing::Size(127, 13);
			this->lbPurpose->TabIndex = 9;
			this->lbPurpose->Text = L"Reason FOR YOUR Viisit";
			// 
			// lbStudentID
			// 
			this->lbStudentID->AutoSize = true;
			this->lbStudentID->Location = System::Drawing::Point(71, 49);
			this->lbStudentID->Name = L"lbStudentID";
			this->lbStudentID->Size = System::Drawing::Size(58, 13);
			this->lbStudentID->TabIndex = 10;
			this->lbStudentID->Text = L"Student ID";
			// 
			// tbStudentID
			// 
			this->tbStudentID->Location = System::Drawing::Point(46, 77);
			this->tbStudentID->Margin = System::Windows::Forms::Padding(100);
			this->tbStudentID->Name = L"tbStudentID";
			this->tbStudentID->Size = System::Drawing::Size(129, 20);
			this->tbStudentID->TabIndex = 11;
			// 
			// LogForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1008, 267);
			this->Controls->Add(this->tbStudentID);
			this->Controls->Add(this->lbStudentID);
			this->Controls->Add(this->lbPurpose);
			this->Controls->Add(this->lbProfName);
			this->Controls->Add(this->lbName);
			this->Controls->Add(this->tbName);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->btnSubmit);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->comboBox2);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"LogForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"VISITOR\'S LOG";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void openToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

		

		

		
	}

private: System::Void btnSubmit_Click(System::Object^  sender, System::EventArgs^  e) {
	
	
	this->tbStudentID->Text = System::DateTime::Today.DayOfWeek.ToString();

	this->comboBox2->Text = System::DateTime::Now.ToString();

	myVisitor.setIDStudent(this->tbStudentID->Text);

	myVisitor.setName(this->tbName->Text);
	myVisitor.setPurpose(this->comboBox2->Text);
	myVisitor.setDateOfVisit(System::DateTime::Now.ToString());
	myVisitor.setHourOfVisit(System::DateTime::Now.ToShortTimeString());
	myProfessor.setOfficeHoursDate("Sunday");

	professorAvailability();

	
	myProfessor.setName(this->comboBox1->Text);

}
private: void professorAvailability()
{
	if (myProfessor.getOfficeHoursDate() == System::DateTime::Today.DayOfWeek.ToString())
	{
		myProfessor.setOfficeHoursFrom("7:10 PM");
		myProfessor.setOfficeHoursTo("8:00 PM");
		
		
		if (1 >= System::DateTime::Compare(Convert::ToDateTime(myProfessor.getOfficeHoursFrom()), System::DateTime::Now)
			&& 1 <= System::DateTime::Compare(Convert::ToDateTime(myProfessor.getOfficeHoursTo()),System::DateTime::Now))
		{
			this->tbName->Text = "The professor is available.";
		}
		else
		{
			this->tbName->Text = "The professor is not available.";
		}


	}
	

}
private: String^ professorName()
{


	if(myProfessor.getName() == this->comboBox1->Text)
	{

	}
}

};
}
