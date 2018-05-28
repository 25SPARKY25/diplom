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
	static Bitmap^ Cr_image();//метод отвечающий за генерацию картинки
	static void void_Cr_image(String^ path, int x);//void-метод отвечающий за генерацию картинки	
};

