#pragma once
#include <iostream>;
#include <fstream>;
#include <istream>;
#include <vector>;
#include <string>;
//#include <stdafx.h>;
using namespace System::Drawing;
using namespace System;
using namespace std;


class Create_Image
{
public:
	//создать картинку
	//static void VecToFile(std::vector<std::vector<int>> blackwhitevec, int x, int y);
	//чтение из файла
	static Bitmap^ Cr_image();//метод отвечающий за генерацию картинки

	static void void_Cr_image(String^ path, int x);//void-метод отвечающий за генерацию картинки

};

