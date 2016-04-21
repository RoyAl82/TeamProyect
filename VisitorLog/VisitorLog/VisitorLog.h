#pragma once
#include "CheckIn.h"

namespace VisitorLog {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for VisitorLog
	/// </summary>
	public ref class VisitorLog : public System::Windows::Forms::Form
	{
	public:
		VisitorLog(void)
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
		~VisitorLog()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListView^  listView1;
	protected:















	private: System::Windows::Forms::Button^  btnCheckIn;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::ColumnHeader^  DATE;
	private: System::Windows::Forms::ColumnHeader^  TIME;
	private: System::Windows::Forms::ColumnHeader^  NAME;
	private: System::Windows::Forms::ColumnHeader^  PROFESSOR;
	private: System::Windows::Forms::ColumnHeader^  REASON;


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
			System::Windows::Forms::ListViewItem^  listViewItem1 = (gcnew System::Windows::Forms::ListViewItem(L"Asdruval"));
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(VisitorLog::typeid));
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->DATE = (gcnew System::Windows::Forms::ColumnHeader());
			this->TIME = (gcnew System::Windows::Forms::ColumnHeader());
			this->NAME = (gcnew System::Windows::Forms::ColumnHeader());
			this->PROFESSOR = (gcnew System::Windows::Forms::ColumnHeader());
			this->REASON = (gcnew System::Windows::Forms::ColumnHeader());
			this->btnCheckIn = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// listView1
			// 
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(5) {
				this->DATE, this->TIME,
					this->NAME, this->PROFESSOR, this->REASON
			});
			this->listView1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ListViewItem^  >(1) { listViewItem1 });
			this->listView1->Location = System::Drawing::Point(81, 140);
			this->listView1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(1109, 464);
			this->listView1->TabIndex = 0;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Tile;
			// 
			// btnCheckIn
			// 
			this->btnCheckIn->BackColor = System::Drawing::Color::Transparent;
			this->btnCheckIn->FlatAppearance->BorderSize = 3;
			this->btnCheckIn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnCheckIn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCheckIn->ForeColor = System::Drawing::Color::White;
			this->btnCheckIn->Location = System::Drawing::Point(403, 89);
			this->btnCheckIn->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btnCheckIn->Name = L"btnCheckIn";
			this->btnCheckIn->Size = System::Drawing::Size(213, 31);
			this->btnCheckIn->TabIndex = 8;
			this->btnCheckIn->Text = L"Check In";
			this->btnCheckIn->UseVisualStyleBackColor = false;
			this->btnCheckIn->Click += gcnew System::EventHandler(this, &VisitorLog::btnCheckIn_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(53, 18);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(555, 63);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 9;
			this->pictureBox1->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(80, 88);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(248, 37);
			this->label1->TabIndex = 10;
			this->label1->Text = L"VISITOR\'S LOG";
			// 
			// VisitorLog
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(845, 497);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->btnCheckIn);
			this->Controls->Add(this->listView1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"VisitorLog";
			this->ShowIcon = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"VisitorLog";
			this->Load += gcnew System::EventHandler(this, &VisitorLog::VisitorLog_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		CheckIn ckIN;
#pragma endregion

	private: System::Void btnCheckIn_Click(System::Object^  sender, System::EventArgs^  e) {
		ckIN.Visible = true;
	}

private: System::Void VisitorLog_Load(System::Object^  sender, System::EventArgs^  e) {
	this->myProfessor = readFromFileToProffesor();
}
};
}
