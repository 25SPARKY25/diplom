#include "Create_Image.h"



//Create_Image::Create_Image()
//{
//}

 Bitmap ^ Create_Image::Cr_image()
{
	// TODO: �������� ����� �������� return
	Bitmap ^image = gcnew Bitmap(100,100);
	Graphics ^ g = Graphics::FromImage(image);//������ ������ Graphics
	SolidBrush^ Blackbrush = gcnew SolidBrush(Color::Black);//������ ����� brush
	SolidBrush^ Whitebrush = gcnew SolidBrush(Color::White);//������ ����� brush
	//Pen^ BlackPen = gcnew Pen(Color::Black);//������ �����
	//g -> DrawRectangle(BlackPen, 40, 40, 25, 25);//������ �������
	int w = rand() % 50;//������ ������� ��������
	g->FillRectangle(Whitebrush, 0, 0, 100, 100);//�������� ������ �������
	g->FillRectangle(Blackbrush, rand()%75 , rand() % 75, w, w);//�������� ������ �������
	return image;
}
