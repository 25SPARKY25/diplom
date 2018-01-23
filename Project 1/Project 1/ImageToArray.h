#pragma once
#include <vector>;
#include "ArrayToFromFile.h"
using namespace System::Drawing;
using namespace System;
using namespace std;


class ImageToArray
{
public:
	//через вектор
	static vector<std::vector<int>> ImgToVec(Bitmap ^img, vector<std::vector<int>> inputvec);//переводим картинку в массив
	//static Bitmap^ BWImage(Bitmap ^img); //переводим картинку в ЧБ
	static vector<std::vector<int>> BWImageToVector(Bitmap ^img, vector<std::vector<int>> OutputBlackWhiteVec);//из ЧБ картинки и получаём её массив
	//получение чб картнки из вектора загруженного из файла
	static std::vector<int> BWImage(Bitmap ^img, std::vector<int> single_inputvec); //получаем vector пиксилей
	static vector<std::vector<double>> AVG_Color(Bitmap ^img);//получаем двумерный вектор средних цветов для пулинга

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

