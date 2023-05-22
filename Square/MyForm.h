#pragma once

namespace Square {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ exitToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ aboutToolStripMenuItem;
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::RadioButton^ largeSize;

	private: System::Windows::Forms::RadioButton^ smallSize;
	private: System::Windows::Forms::RadioButton^ mediumSize;
	private: System::Windows::Forms::Button^ createButton;
	private: System::Windows::Forms::DataGridView^ viewSquares;
	private: System::Windows::Forms::Button^ buttonRed;


	private: System::Windows::Forms::GroupBox^ groupBox2;



	private: System::Windows::Forms::Button^ buttonGrey;

	private: System::Windows::Forms::Button^ buttonPink;

	private: System::Windows::Forms::Button^ buttonYellow;

	private: System::Windows::Forms::Button^ buttonOrange;

	private: System::Windows::Forms::Button^ buttonBlue;

	private: System::Windows::Forms::Button^ buttonGreen;
	private: System::Windows::Forms::DataGridView^ dataGridView1;





	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->aboutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->createButton = (gcnew System::Windows::Forms::Button());
			this->largeSize = (gcnew System::Windows::Forms::RadioButton());
			this->smallSize = (gcnew System::Windows::Forms::RadioButton());
			this->mediumSize = (gcnew System::Windows::Forms::RadioButton());
			this->viewSquares = (gcnew System::Windows::Forms::DataGridView());
			this->buttonRed = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->buttonGrey = (gcnew System::Windows::Forms::Button());
			this->buttonPink = (gcnew System::Windows::Forms::Button());
			this->buttonYellow = (gcnew System::Windows::Forms::Button());
			this->buttonOrange = (gcnew System::Windows::Forms::Button());
			this->buttonBlue = (gcnew System::Windows::Forms::Button());
			this->buttonGreen = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->menuStrip1->SuspendLayout();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->viewSquares))->BeginInit();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->aboutToolStripMenuItem,
					this->exitToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1053, 33);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// aboutToolStripMenuItem
			// 
			this->aboutToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->aboutToolStripMenuItem->Name = L"aboutToolStripMenuItem";
			this->aboutToolStripMenuItem->Size = System::Drawing::Size(53, 29);
			this->aboutToolStripMenuItem->Text = L"About";
			this->aboutToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::aboutToolStripMenuItem_Click);
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Alignment = System::Windows::Forms::ToolStripItemAlignment::Right;
			this->exitToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Tahoma", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(65, 29);
			this->exitToolStripMenuItem->Text = L"Exit";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::exitToolStripMenuItem_Click);
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(61, 4);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->createButton);
			this->groupBox1->Controls->Add(this->largeSize);
			this->groupBox1->Controls->Add(this->smallSize);
			this->groupBox1->Controls->Add(this->mediumSize);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox1->Location = System::Drawing::Point(736, 58);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(195, 191);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Squares size:";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &MyForm::groupBox1_Enter);
			// 
			// createButton
			// 
			this->createButton->Location = System::Drawing::Point(114, 153);
			this->createButton->Name = L"createButton";
			this->createButton->Size = System::Drawing::Size(75, 23);
			this->createButton->TabIndex = 5;
			this->createButton->Text = L"Create";
			this->createButton->UseVisualStyleBackColor = true;
			this->createButton->Click += gcnew System::EventHandler(this, &MyForm::createButton_Click);
			// 
			// largeSize
			// 
			this->largeSize->AutoSize = true;
			this->largeSize->Location = System::Drawing::Point(39, 116);
			this->largeSize->Name = L"largeSize";
			this->largeSize->Size = System::Drawing::Size(65, 20);
			this->largeSize->TabIndex = 4;
			this->largeSize->TabStop = true;
			this->largeSize->Text = L"Large";
			this->largeSize->UseVisualStyleBackColor = true;
			// 
			// smallSize
			// 
			this->smallSize->AutoSize = true;
			this->smallSize->Location = System::Drawing::Point(39, 43);
			this->smallSize->Name = L"smallSize";
			this->smallSize->Size = System::Drawing::Size(64, 20);
			this->smallSize->TabIndex = 2;
			this->smallSize->TabStop = true;
			this->smallSize->Text = L"Small";
			this->smallSize->UseVisualStyleBackColor = true;
			// 
			// mediumSize
			// 
			this->mediumSize->AutoSize = true;
			this->mediumSize->Location = System::Drawing::Point(39, 79);
			this->mediumSize->Name = L"mediumSize";
			this->mediumSize->Size = System::Drawing::Size(79, 20);
			this->mediumSize->TabIndex = 3;
			this->mediumSize->TabStop = true;
			this->mediumSize->Text = L"Medium";
			this->mediumSize->UseVisualStyleBackColor = true;
			// 
			// viewSquares
			// 
			this->viewSquares->BackgroundColor = System::Drawing::SystemColors::Control;
			this->viewSquares->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->viewSquares->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->viewSquares->Location = System::Drawing::Point(55, 58);
			this->viewSquares->Name = L"viewSquares";
			this->viewSquares->Size = System::Drawing::Size(588, 486);
			this->viewSquares->TabIndex = 6;
			// 
			// buttonRed
			// 
			this->buttonRed->BackColor = System::Drawing::Color::Red;
			this->buttonRed->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->buttonRed->Location = System::Drawing::Point(6, 34);
			this->buttonRed->Name = L"buttonRed";
			this->buttonRed->Size = System::Drawing::Size(30, 29);
			this->buttonRed->TabIndex = 7;
			this->buttonRed->Text = L"0";
			this->buttonRed->UseVisualStyleBackColor = false;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->buttonGrey);
			this->groupBox2->Controls->Add(this->buttonPink);
			this->groupBox2->Controls->Add(this->buttonYellow);
			this->groupBox2->Controls->Add(this->buttonOrange);
			this->groupBox2->Controls->Add(this->buttonBlue);
			this->groupBox2->Controls->Add(this->buttonGreen);
			this->groupBox2->Controls->Add(this->buttonRed);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox2->Location = System::Drawing::Point(736, 422);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(195, 122);
			this->groupBox2->TabIndex = 8;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Available colors:";
			// 
			// buttonGrey
			// 
			this->buttonGrey->BackColor = System::Drawing::Color::Silver;
			this->buttonGrey->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->buttonGrey->Location = System::Drawing::Point(114, 69);
			this->buttonGrey->Name = L"buttonGrey";
			this->buttonGrey->Size = System::Drawing::Size(30, 29);
			this->buttonGrey->TabIndex = 13;
			this->buttonGrey->Text = L"6";
			this->buttonGrey->UseVisualStyleBackColor = false;
			// 
			// buttonPink
			// 
			this->buttonPink->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->buttonPink->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->buttonPink->Location = System::Drawing::Point(42, 69);
			this->buttonPink->Name = L"buttonPink";
			this->buttonPink->Size = System::Drawing::Size(30, 29);
			this->buttonPink->TabIndex = 12;
			this->buttonPink->Text = L"5";
			this->buttonPink->UseVisualStyleBackColor = false;
			// 
			// buttonYellow
			// 
			this->buttonYellow->BackColor = System::Drawing::Color::Yellow;
			this->buttonYellow->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->buttonYellow->Location = System::Drawing::Point(150, 34);
			this->buttonYellow->Name = L"buttonYellow";
			this->buttonYellow->Size = System::Drawing::Size(30, 29);
			this->buttonYellow->TabIndex = 11;
			this->buttonYellow->Text = L"4";
			this->buttonYellow->UseVisualStyleBackColor = false;
			// 
			// buttonOrange
			// 
			this->buttonOrange->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->buttonOrange->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->buttonOrange->Location = System::Drawing::Point(114, 34);
			this->buttonOrange->Name = L"buttonOrange";
			this->buttonOrange->Size = System::Drawing::Size(30, 29);
			this->buttonOrange->TabIndex = 10;
			this->buttonOrange->Text = L"3";
			this->buttonOrange->UseVisualStyleBackColor = false;
			// 
			// buttonBlue
			// 
			this->buttonBlue->BackColor = System::Drawing::Color::Blue;
			this->buttonBlue->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->buttonBlue->Location = System::Drawing::Point(78, 34);
			this->buttonBlue->Name = L"buttonBlue";
			this->buttonBlue->Size = System::Drawing::Size(30, 29);
			this->buttonBlue->TabIndex = 9;
			this->buttonBlue->Text = L"2";
			this->buttonBlue->UseVisualStyleBackColor = false;
			// 
			// buttonGreen
			// 
			this->buttonGreen->BackColor = System::Drawing::Color::Green;
			this->buttonGreen->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->buttonGreen->Location = System::Drawing::Point(42, 34);
			this->buttonGreen->Name = L"buttonGreen";
			this->buttonGreen->Size = System::Drawing::Size(30, 29);
			this->buttonGreen->TabIndex = 8;
			this->buttonGreen->Text = L"1";
			this->buttonGreen->UseVisualStyleBackColor = false;
			// 
			// dataGridView1
			// 
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::Control;
			this->dataGridView1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(739, 272);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(192, 130);
			this->dataGridView1->TabIndex = 9;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1053, 600);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->viewSquares);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->Text = L"Square";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->viewSquares))->EndInit();
			this->groupBox2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void exitToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void aboutToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e);

private: System::Void createButton_Click(System::Object^ sender, System::EventArgs^ e);
	   void Square::MyForm::ShowSquares();
};
}
