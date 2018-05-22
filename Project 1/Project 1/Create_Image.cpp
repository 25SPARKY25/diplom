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

 void Create_Image::void_Cr_image(String^ path, int x)
 {
	 enum figures { rectangle, triangle, circle, elipse, NUM_FIGURES};//создаём перечисление геометрических фигур для случайного выбора
	 figures fig =static_cast<figures>(rand() % NUM_FIGURES);//генерируем номер для выбора фигуры из перечисления figures
	 Bitmap ^image = gcnew Bitmap(500, 500);
	 Graphics ^ g = Graphics::FromImage(image);//создаём объект Graphics
	 SolidBrush^ Blackbrush = gcnew SolidBrush(Color::Black);//создаём кисть brush
	 SolidBrush^ Whitebrush = gcnew SolidBrush(Color::White);//создаём кисть brush
															 //Pen^ BlackPen = gcnew Pen(Color::Black);//создаём ручку
															 //g -> DrawRectangle(BlackPen, 40, 40, 25, 25);//рисуем квадрат
	 //int w = rand() % 250;//размер стороны квадрата
	 //int z = rand() % 250;//размер стороны ограничивающего квадрата

	/* Point point1 = Point(rand() % 500, rand() % 500);
	 Point point2 = Point(rand() % 500, rand() % 500);
	 Point point3 = Point(rand() % 500, rand() % 500);
	 cli::array<Point, 1>^ TrianglePoints = { point1, point2, point3 };*/
	 g->FillRectangle(Whitebrush, 0, 0, 500, 500);//заливаем цветом фон

	 switch (fig) 
	 {
		case 0: 
				{ //квадрат
					int w = rand() % 250;//размер стороны квадрата
					g->FillRectangle(Blackbrush, rand() % 250, rand() % 250, w, w);//заливаем цветом квадрат
					image->Save(path + "\\Rectangle" + x + ".bmp");
					break;
				}
		case 1: 
				{ //треугольник
					// Создаём массив координат для треугольника
					//TrianglePoints = gcnew array<Point, 1>(3);
					//Point TrianglePoints[3] = { Point(rand() % 500, rand() % 500),Point(rand() % 500, rand() % 500), Point(rand() % 500, rand() % 500) };
					Point point1 = Point(rand() % 500, rand() % 500);
					Point point2 = Point(rand() % 500, rand() % 500);
					Point point3 = Point(rand() % 500, rand() % 500);
					cli::array<Point, 1>^ TrianglePoints = { point1, point2, point3 };
					g->FillPolygon(Blackbrush, TrianglePoints);//заливаем цветом треугольник
					image->Save(path + "\\Triamgle" + x + ".bmp");
					break;
				}
		 case 2: 
				{ //окружность
					//int z = rand() % 250;//размер стороны ограничивающего квадрата
					int z = rand() % 250;//размер стороны ограничивающего квадрата
					g->FillEllipse(Blackbrush, rand() % 250, rand() % 250, z, z);//заливаем цветом окружность
					image->Save(path + "\\Circle" + x + ".bmp");
					break;
				}
		 case 3:
				{	//эллипс
					g->FillEllipse(Blackbrush, rand() % 250, rand() % 250, rand() % 250, rand() % 250);//заливаем цветом треугольник
					image->Save(path + "\\Ellipse" + x + ".bmp");
					break;
				}
	 }
}