#pragma once
#include <iostream>
#include "Figure.h"

ref class Circle : public Figure_new {
public:
	Circle() {

	}
	Circle(PictureBox^ picturebox, TextBox^ SizeWidth, TextBox^ SizeHeight) : Figure_new::Figure_new(picturebox, SizeWidth, SizeHeight) {

	}
	
	void create_figure(Pen^ pen, SolidBrush^ brush, bool fill_ch) override {
		if (fill_ch) {
			Figure_new::g->FillEllipse(brush, Figure_new::x_nach, Figure_new::y_nach, Figure_new::x, Figure_new::y);
		}
		Figure_new::g->DrawEllipse(pen, Figure_new::x_nach, Figure_new::y_nach, Figure_new::x, Figure_new::y);
	}

	~Circle() {

	}
private:

};