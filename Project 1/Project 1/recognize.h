#pragma once
#include <iostream>;
#include <fstream>;
#include <istream>;
#include <vector>;
#include <string>;
#include "ImageToArray.h";
#include <time.h>;
#include "opencv2/imgproc/imgproc.hpp";
#include "opencv2/highgui/highgui.hpp";


//#include <stdafx.h>;
using namespace System::Drawing;
using namespace System;
using namespace std;
//using namespace cv;



ref class recognize
{
public:
	static vector<std::vector<double>> Randomize_weights();//делаем веса рандомными
	static std::vector<std::vector<double>> FileToVecWieights();//загружаем веса из файла
	static Bitmap^ Recognized_Image(Bitmap ^inimg, Bitmap ^refimg); //ищем порок
	static Bitmap^ Max_Poling(Bitmap ^inimg); //делаем пулинг изображения
	static void Gaussian(std::string FileName); //размываем картинку
	static void Difference(std::vector<std::vector<int>> Sum_Avg_Vec, Bitmap ^img);//поиск различий на изображениях через матрицу средних
	recognize();
};

