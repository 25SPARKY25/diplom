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

 void Create_Image::void_Cr_image(String^ path, int x)
 {
	 enum figures { rectangle, triangle, circle, elipse, NUM_FIGURES};//������ ������������ �������������� ����� ��� ���������� ������
	 figures fig =static_cast<figures>(rand() % NUM_FIGURES);//���������� ����� ��� ������ ������ �� ������������ figures
	 Bitmap ^image = gcnew Bitmap(500, 500);
	 Graphics ^ g = Graphics::FromImage(image);//������ ������ Graphics
	 SolidBrush^ Blackbrush = gcnew SolidBrush(Color::Black);//������ ����� brush
	 SolidBrush^ Whitebrush = gcnew SolidBrush(Color::White);//������ ����� brush
															 //Pen^ BlackPen = gcnew Pen(Color::Black);//������ �����
															 //g -> DrawRectangle(BlackPen, 40, 40, 25, 25);//������ �������
	 //int w = rand() % 250;//������ ������� ��������
	 //int z = rand() % 250;//������ ������� ��������������� ��������

	/* Point point1 = Point(rand() % 500, rand() % 500);
	 Point point2 = Point(rand() % 500, rand() % 500);
	 Point point3 = Point(rand() % 500, rand() % 500);
	 cli::array<Point, 1>^ TrianglePoints = { point1, point2, point3 };*/
	 g->FillRectangle(Whitebrush, 0, 0, 500, 500);//�������� ������ ���

	 switch (fig) 
	 {
		case 0: 
				{ //�������
					int w = rand() % 250;//������ ������� ��������
					g->FillRectangle(Blackbrush, rand() % 250, rand() % 250, w, w);//�������� ������ �������
					image->Save(path + "\\Rectangle" + x + ".bmp");
					break;
				}
		case 1: 
				{ //�����������
					// ������ ������ ��������� ��� ������������
					//TrianglePoints = gcnew array<Point, 1>(3);
					//Point TrianglePoints[3] = { Point(rand() % 500, rand() % 500),Point(rand() % 500, rand() % 500), Point(rand() % 500, rand() % 500) };
					Point point1 = Point(rand() % 500, rand() % 500);
					Point point2 = Point(rand() % 500, rand() % 500);
					Point point3 = Point(rand() % 500, rand() % 500);
					cli::array<Point, 1>^ TrianglePoints = { point1, point2, point3 };
					g->FillPolygon(Blackbrush, TrianglePoints);//�������� ������ �����������
					image->Save(path + "\\Triamgle" + x + ".bmp");
					break;
				}
		 case 2: 
				{ //����������
					//int z = rand() % 250;//������ ������� ��������������� ��������
					int z = rand() % 250;//������ ������� ��������������� ��������
					g->FillEllipse(Blackbrush, rand() % 250, rand() % 250, z, z);//�������� ������ ����������
					image->Save(path + "\\Circle" + x + ".bmp");
					break;
				}
		 case 3:
				{	//������
					g->FillEllipse(Blackbrush, rand() % 250, rand() % 250, rand() % 250, rand() % 250);//�������� ������ �����������
					image->Save(path + "\\Ellipse" + x + ".bmp");
					break;
				}
	 }
}