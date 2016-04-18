#pragma once

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Display
	/// </summary>
	public ref class Display : public System::Windows::Forms::Form
	{
	public:
		Display(void)
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
		~Display()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  lbDisplay;
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
			this->lbDisplay = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// lbDisplay
			// 
			this->lbDisplay->AutoSize = true;
			this->lbDisplay->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbDisplay->Location = System::Drawing::Point(40, 94);
			this->lbDisplay->Name = L"lbDisplay";
			this->lbDisplay->Size = System::Drawing::Size(18, 25);
			this->lbDisplay->TabIndex = 0;
			this->lbDisplay->Text = L";";
			// 
			// Display
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(414, 261);
			this->Controls->Add(this->lbDisplay);
			this->Name = L"Display";
			this->Text = L"Display";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
