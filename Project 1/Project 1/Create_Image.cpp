#include "Create_Image.h"



//Create_Image::Create_Image()
//{
//}

 Bitmap ^ Create_Image::Cr_image()
{
	// TODO: вставьте здесь оператор return
	Bitmap ^image = gcnew Bitmap(100,100);
	Graphics ^ g = Graphics::FromImage(image);//создаём объект Graphics
	SolidBrush^ Blackbrush = gcnew SolidBrush(Color::Black);//создаём кисть brush
	SolidBrush^ Whitebrush = gcnew SolidBrush(Color::White);//создаём кисть brush
	//Pen^ BlackPen = gcnew Pen(Color::Black);//создаём ручку
	//g -> DrawRectangle(BlackPen, 40, 40, 25, 25);//рисуем квадрат
	int w = rand() % 50;//размер стороны квадрата
	g->FillRectangle(Whitebrush, 0, 0, 100, 100);//заливаем цветом квадрат
	g->FillRectangle(Blackbrush, rand()%75 , rand() % 75, w, w);//заливаем цветом квадрат
	return image;
}
