#pragma once
#include "Professor.h"
#include "Visitor.h"



namespace VisitorLog {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for CheckIn
	/// </summary>
	public ref class CheckIn : public System::Windows::Forms::Form
	{
	public:
		CheckIn(void)
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
		~CheckIn()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  pnlCheckIn;
	protected:
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Button^  btnSubmit;
	private: System::Windows::Forms::TextBox^  txtReason;
	private: System::Windows::Forms::Button^  btnSelectProf;
	private: System::Windows::Forms::TextBox^  txtLastName;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  txtFirstName;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>

		Visitor myVisitor;


		array<Professor^>^ myProfessor;

		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(CheckIn::typeid));
			this->pnlCheckIn = (gcnew System::Windows::Forms::Panel());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->btnSubmit = (gcnew System::Windows::Forms::Button());
			this->txtReason = (gcnew System::Windows::Forms::TextBox());
			this->btnSelectProf = (gcnew System::Windows::Forms::Button());
			this->txtLastName = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->txtFirstName = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pnlCheckIn->SuspendLayout();
			this->SuspendLayout();
			// 
			// pnlCheckIn
			// 
			this->pnlCheckIn->BackColor = System::Drawing::SystemColors::HotTrack;
			this->pnlCheckIn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pnlCheckIn.BackgroundImage")));
			this->pnlCheckIn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pnlCheckIn->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pnlCheckIn->Controls->Add(this->label5);
			this->pnlCheckIn->Controls->Add(this->btnSubmit);
			this->pnlCheckIn->Controls->Add(this->txtReason);
			this->pnlCheckIn->Controls->Add(this->btnSelectProf);
			this->pnlCheckIn->Controls->Add(this->txtLastName);
			this->pnlCheckIn->Controls->Add(this->label4);
			this->pnlCheckIn->Controls->Add(this->txtFirstName);
			this->pnlCheckIn->Controls->Add(this->label3);
			this->pnlCheckIn->Controls->Add(this->label2);
			this->pnlCheckIn->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pnlCheckIn->Location = System::Drawing::Point(0, 0);
			this->pnlCheckIn->Name = L"pnlCheckIn";
			this->pnlCheckIn->Size = System::Drawing::Size(840, 646);
			this->pnlCheckIn->TabIndex = 3;
			this->pnlCheckIn->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &CheckIn::pnlCheckIn_Paint);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(62, 339);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(290, 32);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Reason for Your Visit:";
			// 
			// btnSubmit
			// 
			this->btnSubmit->BackColor = System::Drawing::Color::Transparent;
			this->btnSubmit->FlatAppearance->BorderSize = 3;
			this->btnSubmit->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnSubmit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSubmit->ForeColor = System::Drawing::Color::White;
			this->btnSubmit->Location = System::Drawing::Point(247, 543);
			this->btnSubmit->Name = L"btnSubmit";
			this->btnSubmit->Size = System::Drawing::Size(320, 48);
			this->btnSubmit->TabIndex = 7;
			this->btnSubmit->Text = L"Submit";
			this->btnSubmit->UseVisualStyleBackColor = false;
			this->btnSubmit->Click += gcnew System::EventHandler(this, &CheckIn::btnSubmit_Click);
			// 
			// txtReason
			// 
			this->txtReason->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtReason->Location = System::Drawing::Point(68, 386);
			this->txtReason->Multiline = true;
			this->txtReason->Name = L"txtReason";
			this->txtReason->Size = System::Drawing::Size(687, 127);
			this->txtReason->TabIndex = 6;
			// 
			// btnSelectProf
			// 
			this->btnSelectProf->BackColor = System::Drawing::Color::Transparent;
			this->btnSelectProf->FlatAppearance->BorderSize = 3;
			this->btnSelectProf->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnSelectProf->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSelectProf->ForeColor = System::Drawing::Color::White;
			this->btnSelectProf->Location = System::Drawing::Point(247, 266);
			this->btnSelectProf->Name = L"btnSelectProf";
			this->btnSelectProf->Size = System::Drawing::Size(320, 48);
			this->btnSelectProf->TabIndex = 5;
			this->btnSelectProf->Text = L"Select a Professor";
			this->btnSelectProf->UseVisualStyleBackColor = false;
			this->btnSelectProf->Click += gcnew System::EventHandler(this, &CheckIn::btnSelectProf_Click);
			// 
			// txtLastName
			// 
			this->txtLastName->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtLastName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtLastName->Location = System::Drawing::Point(435, 192);
			this->txtLastName->Name = L"txtLastName";
			this->txtLastName->Size = System::Drawing::Size(320, 39);
			this->txtLastName->TabIndex = 4;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(429, 141);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(213, 32);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Full Last Name:";
			// 
			// txtFirstName
			// 
			this->txtFirstName->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtFirstName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtFirstName->Location = System::Drawing::Point(68, 192);
			this->txtFirstName->Name = L"txtFirstName";
			this->txtFirstName->Size = System::Drawing::Size(320, 39);
			this->txtFirstName->TabIndex = 2;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(62, 141);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(214, 32);
			this->label3->TabIndex = 1;
			this->label3->Text = L"Full First Name:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 40, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(52, 19);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(703, 91);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Students Check In";
			// 
			// CheckIn
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(840, 646);
			this->Controls->Add(this->pnlCheckIn);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"CheckIn";
			this->ShowIcon = false;
			this->ShowInTaskbar = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"CheckIn";
			this->pnlCheckIn->ResumeLayout(false);
			this->pnlCheckIn->PerformLayout();
			this->ResumeLayout(false);


			//Variables

			//this->myProfessor = readFromFileToProffesor();

		}
#pragma endregion
	private: System::Void btnSelectProf_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void pnlCheckIn_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
}
private: System::Void btnSubmit_Click(System::Object^  sender, System::EventArgs^  e) {

	if (this->tbStudentID->Text == "")
	{

		myVisitor.setIDStudent("Not a Student");
	}
	else if (this->tbName->Text == "")
	{

		MessageBox::Show("Enter your name to submit.");
	}
	else if (this->comboBox1->Text == "")
	{
		MessageBox::Show("Enter the Professor's name to submit.");
	}
	else if (this->comboBox2->Text == "")
	{
		MessageBox::Show("Enter the Reasons of your visit to submit.");
	}
	else
	{
		myVisitor.setIDStudent(this->tbStudentID->Text);

		myVisitor.setName(this->tbName->Text);

		professorAvailability();

		myVisitor.setDateOfVisit((System::DateTime::Now.ToString()));

		myVisitor.setPurpose(this->comboBox2->Text);

	}

	if (this->myVisitor.getDateOfVisit() != "" && this->myVisitor.getProfessorName() != ""
		&& this->myVisitor.getProfessorName() != "" && this->myVisitor.getPurpose() != "" && this->myVisitor.getIDStudent() != "")
	{
		this->tbName->ResetText();
		this->tbStudentID->ResetText();
		this->comboBox1->ResetText();
		this->comboBox2->ResetText();

		writeDataToFile();

	}

}
private: void professorAvailability()
{
	int count = 0;

	for (int i = 0; i < myProfessor->Length; i++)
	{
		if (myProfessor[i]->getName() == this->comboBox1->Text)
		{

			myVisitor.setProfessorName(myProfessor[i]->getName());

			professorDateAndHours(i);

		}
		else
		{
			count++;
		}


	}
	if (count == myProfessor->Length)
	{
		MessageBox::Show("The professor you entered does not exist.");
	}


}
private: void professorDateAndHours(const int index)
{

	int count = 0;


	for (int i = 0; i < myProfessor[index]->getOfficeHoursDate()->Length; i++)
	{
		if (myProfessor[index]->getOfficeHoursDate(i) == (System::DateTime::Today.DayOfWeek.ToString()))
		{

			if (1 >= System::DateTime::Compare(Convert::ToDateTime(myProfessor[index]->getOfficeHoursFrom(i)), (System::DateTime::Now))
				&& 1 <= System::DateTime::Compare(Convert::ToDateTime(myProfessor[index]->getOfficeHoursTo(i)), (System::DateTime::Now)))
			{
				MessageBox::Show("The professor is available.");
			}
			else
			{
				MessageBox::Show("The professor is not available.");
			}


		}
		else
		{
			count++;
		}


	}

	if (count == myProfessor[index]->getOfficeHoursDate()->Length)
	{
		MessageBox::Show("The professor does NOT have office Hours Today.");
	}

}

private: array<Professor^>^ readFromFileToProffesor()
{
	array<Professor^>^ pf = gcnew array<Professor^>(20);

	String^ fileName = "ProfessorData.csv";
	String^ data;


	int count = 0;
	try
	{
		StreamReader^ file = File::OpenText(fileName);

		int index = 0;
		bool nextProfessor = false;
		while ((data = file->ReadLine()) != nullptr)
		{
			int i = 0;

			array<String^>^ strData = data->Split(',');


			if (!nextProfessor)
			{
				pf[index] = gcnew Professor;
				pf[index]->setName(strData[i]);
			}
			if (strData[i + 1] != "")
			{
				pf[index]->setOfficeHoursDate(strData[i + 1]);
			}

			if (strData[i + 2] != "")
			{
				pf[index]->setOfficeHoursFrom(strData[i + 2]);
			}

			if (strData[i + 3] != "")
			{
				pf[index]->setOfficeHoursTo(strData[i + 3]);
			}

			if (!(nextProfessor = file->Peek().Equals(',')))
			{
				index++;
				count++;
			}


		}

		file->Close();

	}
	catch (Exception^ e)
	{
		MessageBox::Show(e->Message);
	}

	if (count != 0)
	{
		array<Professor^>^ pFinal = gcnew array<Professor^>(count);

		for (int j = 0; j < count; j++)
		{
			pFinal[j] = pf[j];
		}
		return pFinal;
	}
	else
	{
		return nullptr;
	}

}
private: array<String^>^ readFromFileToReasons()
{


	String^ fileName = "Common Reasons.csv";
	String^ data;
	array<String^>^ dataArray = gcnew array<String^>(100);


	int count = 0;
	try
	{
		StreamReader^ file = File::OpenText(fileName);

		int index = 0;
		bool nextReason = false;
		while ((data = file->ReadLine()) != nullptr)
		{

			dataArray[index] = data;


			if (!(nextReason = file->Peek().Equals(',')))
			{
				index++;
				count++;
			}


		}

		file->Close();

	}
	catch (Exception^ e)
	{
		MessageBox::Show(e->Message);
	}

	if (count != 0)
	{
		array<String^>^ pFinal = gcnew array<String^>(count);

		for (int j = 0; j < count; j++)
		{
			pFinal[j] = dataArray[j];
		}
		return pFinal;
	}
	else
	{
		return nullptr;
	}

}
};
}
