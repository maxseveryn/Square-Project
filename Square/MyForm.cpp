﻿#include "MyForm.h"
#include <cstdlib>
#include <ctime>
#include <vector>
#include <list>

using namespace System;
using namespace System::Windows::Forms;
using namespace System::Collections::Generic;

const int SQR_SIZE = 5;
int sqr[SQR_SIZE][SQR_SIZE];
const int MAX_SELECTED_COLORS = 5;
int numButtons = 5;
int selectedButtonCount = 0;
static std::vector <bool> isColorButtonPressed;
std::vector <int> clrs;

[STAThreadAttribute]
void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Square::MyForm form;
	Application::Run(% form);
}
System::Void Square::MyForm::exitToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
	return System::Void();
}
System::Void Square::MyForm::aboutToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("Group project for Soft Skills discipline!", "NUZP");
	return System::Void();
}


System::Void Square::MyForm::createButton_Click(System::Object^ sender, System::EventArgs^ e) {
	std::srand(static_cast<unsigned int>(std::time(nullptr)));

	for (int i = 0; i < SQR_SIZE; i++) {
		for (int j = 0; j < SQR_SIZE; j++) {
			sqr[i][j] = std::rand() % 7;
		}
	}
	viewSquares->RowCount = SQR_SIZE;
	viewSquares->ColumnCount = SQR_SIZE;


	ShowSquares();
	nextButton->Enabled = true;

	return System::Void();
}
System::Void Square::MyForm::nextButton_Click(System::Object^ sender, System::EventArgs^ e) {
	if (nextButton) {
		ChangeSquareColor();
		ShowSquares();
	}
	return System::Void();
}

System::Void Square::MyForm::clearButton_Click(System::Object^ sender, System::EventArgs^ e) {
	ClearTable();
	return System::Void();
}
System::Void Square::MyForm::buttonRed_Click(System::Object^ sender, System::EventArgs^ e) {
	DisableColorButtons();
	clrs.push_back(Int32::Parse(buttonRed->Text));
	buttonRed->Enabled = false;
	return System::Void();
}
System::Void Square::MyForm::buttonGreen_Click(System::Object^ sender, System::EventArgs^ e) {
	DisableColorButtons();
	clrs.push_back(Int32::Parse(buttonGreen->Text));
	buttonGreen->Enabled = false;
	return System::Void();
}
System::Void Square::MyForm::buttonBlue_Click(System::Object^ sender, System::EventArgs^ e) {
	DisableColorButtons();
	clrs.push_back(Int32::Parse(buttonBlue->Text));
	buttonBlue->Enabled = false;
	return System::Void();
}
System::Void Square::MyForm::buttonOrange_Click(System::Object^ sender, System::EventArgs^ e) {
	DisableColorButtons();
	clrs.push_back(Int32::Parse(buttonOrange->Text));
	buttonOrange->Enabled = false;
	return System::Void();
}
System::Void Square::MyForm::buttonYellow_Click(System::Object^ sender, System::EventArgs^ e) {
	DisableColorButtons();
	clrs.push_back(Int32::Parse(buttonYellow->Text));
	buttonYellow->Enabled = false;
	return System::Void();
}
System::Void Square::MyForm::buttonPink_Click(System::Object^ sender, System::EventArgs^ e) {
	DisableColorButtons();
	clrs.push_back(Int32::Parse(buttonPink->Text));
	buttonPink->Enabled = false;
	return System::Void();
}
System::Void Square::MyForm::buttonGrey_Click(System::Object^ sender, System::EventArgs^ e) {
	DisableColorButtons();
	clrs.push_back(Int32::Parse(buttonGrey->Text));
	buttonGrey->Enabled = false;
	return System::Void();
}
System::Void Square::MyForm::submitButton_Click(System::Object^ sender, System::EventArgs^ e) {
	ButtonArray();
	return System::Void();
}

void Square::MyForm::ShowSquares() {
	ClearTable();
	int squareSize = smallSize->Checked ? 20 : (mediumSize->Checked ? 50 : (largeSize->Checked ? 80 : 0));

	for (int i = 0; i < SQR_SIZE; i++) {
		viewSquares->Columns->Add(gcnew DataGridViewTextBoxColumn());
		viewSquares->Columns[i]->Width = squareSize;
		viewSquares->Rows->Add();
		viewSquares->Rows[i]->Height = squareSize;
	}

	viewSquares->RowHeadersWidthSizeMode = DataGridViewRowHeadersWidthSizeMode::AutoSizeToAllHeaders;

	for (int i = 0; i < SQR_SIZE; i++) {
		for (int j = 0; j < SQR_SIZE; j++) {
			for (int i = 0; i < SQR_SIZE; i++) {
				for (int j = 0; j < SQR_SIZE; j++) {
					viewSquares->TopLeftHeaderCell->Value = "Squares:";
					viewSquares->Columns[j]->HeaderCell->Value = Convert::ToString(j + 1);
					viewSquares->Rows[i]->HeaderCell->Value = Convert::ToString(i + 1);

					switch (sqr[i][j]) {
					case 0:
						viewSquares->Rows[i]->Cells[j]->Style->BackColor = System::Drawing::Color::Red;
						break;
					case 1:
						viewSquares->Rows[i]->Cells[j]->Style->BackColor = System::Drawing::Color::Green;
						break;
					case 2:
						viewSquares->Rows[i]->Cells[j]->Style->BackColor = System::Drawing::Color::Blue;
						break;
					case 3:
						viewSquares->Rows[i]->Cells[j]->Style->BackColor = System::Drawing::Color::Orange;
						break;
					case 4:
						viewSquares->Rows[i]->Cells[j]->Style->BackColor = System::Drawing::Color::Yellow;
						break;
					case 5:
						viewSquares->Rows[i]->Cells[j]->Style->BackColor = System::Drawing::Color::Pink;
						break;
					case 6:
						viewSquares->Rows[i]->Cells[j]->Style->BackColor = System::Drawing::Color::Gray;
						break;
					default:
						viewSquares->Rows[i]->Cells[j]->Style->BackColor = System::Drawing::Color::White;
						break;
					}

					viewSquares->Rows[i]->Cells[j]->Value = sqr[i][j];
				}
			}

			viewSquares->Rows[i]->Cells[j]->Value = sqr[i][j];
			nextButton->Enabled = true;
		}
	}
}
List<Button^>^ Square::MyForm::ButtonArray() {
	int buttonSize = 25;
	int spacing = 10;

	int groupBoxWidth = selectedColors->Width;
	int groupBoxHeight = selectedColors->Height;

	int totalWidth = numButtons * buttonSize + (numButtons - 1) * spacing;

	int startX = (groupBoxWidth - totalWidth) / 2;

	int y = (groupBoxHeight - buttonSize) / 2;

	List<Button^>^ buttonList = gcnew List<Button^>();

	for (int i = 0; i < numButtons; i++) {
		Button^ btn = gcnew Button();
		btn->Size = System::Drawing::Size(buttonSize, buttonSize);
		btn->Text = clrs[i].ToString();

		int x = startX + (buttonSize + spacing) * i;
		btn->Location = System::Drawing::Point(x, y);

		selectedColors->Controls->Add(btn);
		buttonList->Add(btn);
	}
	for (int i = 0; i < numButtons; i++) {
		switch (clrs[i]) {
		case 0:
			buttonList[i]->BackColor = Color::Red;
			break;
		case 1:
			buttonList[i]->BackColor = Color::Green;
			break;
		case 2:
			buttonList[i]->BackColor = Color::Blue;
			break;
		case 3:
			buttonList[i]->BackColor = Color::Orange;
			break;
		case 4:
			buttonList[i]->BackColor = Color::Yellow;
			break;
		case 5:
			buttonList[i]->BackColor = Color::Pink;
			break;
		case 6:
			buttonList[i]->BackColor = Color::Gray;
			break;
		}
	}
	return buttonList;
}

void Square::MyForm::ChangeSquareColor() {
	bool hasSteps = false;
	const int N = (int)N_Value->Value;
	for (int row = 0; row < SQR_SIZE; row++) {
		for (int col = 0; col < SQR_SIZE; col++) {
			int count = 0;
			for (int i = row - 1; i <= row + 1; i++) {
				for (int j = col - 1; j <= col + 1; j++) {
					if (i >= 0 && i < SQR_SIZE && j >= 0 && j < SQR_SIZE && (i != row || j != col)) {
						if (sqr[row][col] == sqr[i][j] - 1) {
							count++;
						}
					}
				}
			}
			if (count == N) {
				hasSteps = true;
				sqr[row][col]++;
			}
		}
	}
	if (!hasSteps) {
		MessageBox::Show("No more steps available.\nChange N-value or create another table", "Info", MessageBoxButtons::OK);
	}
}
void Square::MyForm::ClearTable() {
	viewSquares->Rows->Clear();
	viewSquares->Columns->Clear();
	nextButton->Enabled = false;
}
void Square::MyForm::DisableColorButtons() {
	if (clrs.size() == 4) {
		submitButton->Enabled = true;
		buttonRed->Enabled = false;
		buttonGreen->Enabled = false;
		buttonBlue->Enabled = false;
		buttonOrange->Enabled = false;
		buttonYellow->Enabled = false;
		buttonPink->Enabled = false;
		buttonGrey->Enabled = false;
	}
}