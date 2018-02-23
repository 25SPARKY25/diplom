#pragma once
#include <vector>;
#include "ArrayToFromFile.h"
using namespace System::Drawing;
using namespace System;
using namespace std;
//vector<std::vector<double>> AVG_Color;



class ImageToArray
{
public:
	//через вектор
	static vector<std::vector<int>> ImgToVec(Bitmap ^img);//переводим картинку в двумерный вектор


	//среднеарифметических значений 3 каналов на пиксель
	static vector<std::vector<int>> InpVecBin(Bitmap ^img);//получаем вектор 0 и 1 входного изображения
	static vector<std::vector<int>> BWImageToVector(Bitmap ^img);//из ЧБ картинки и получаём её массив
	//получение чб картнки из вектора загруженного из файла
	//static std::vector<int> BWImage(Bitmap ^img, std::vector<int> single_inputvec); //получаем одномерный vector пиксилей
	//нужно хорошенько обдумать как загружать и хранить массив средних значений на пиксель
	//static vector<std::vector<int>> Sum_AVG_Color(Bitmap ^img);//получаем двумерный вектор суммы средних цветов на пиксель
	static vector<std::vector<int>> AVG_Color(vector<std::vector<int>> Sum_AVG_Color, int counter);//получаем финальный двумерный вектор суммы средних цветов на пиксель

	//через массивы
	static int** ImgToArr(Bitmap ^img, int** InputColorArr);//переводим картинку в массив
	static Bitmap^ BWImage(Bitmap ^img); //переводим картинку в ЧБ
	static int** BWImageToArray(Bitmap ^img, int** OutputBlackWhiteArr);//из ЧБ картинки и получаём её массив
	ImageToArray();
	~ImageToArray();
private:
	int** InputColorArr;		//массив 0 и 1 исходного изображения
	int** OutputBlackWhiteArr;	//массив 0 и 1 ЧБ изображения
};

