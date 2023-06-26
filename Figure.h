#pragma once
#include <iostream>

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

ref class Figure_new {
public:
	Figure_new() {
		
	}

	Figure_new(PictureBox^ picturebox, TextBox^ SizeWidth, TextBox^ SizeHeight) {
		g = picturebox->CreateGraphics();

		// Контур
		picturebox->Refresh();

		this->x = Convert::ToInt32(SizeWidth->Text);
		this->y = Convert::ToInt32(SizeHeight->Text);

		this->x_nach = picturebox->Width / 2 - this->x / 2;
		this->y_nach = picturebox->Height / 2 - this->y / 2;
	}

	virtual void create_figure(Pen^ pen, SolidBrush^ brush, bool fill_ch) {}

	~Figure_new() {

	}
private:
	
protected:
	Graphics^ g;
	int x_nach, y_nach, x, y;
};