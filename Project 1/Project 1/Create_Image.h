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
	//������� ��������
	static Bitmap^ Cr_image();//����� ���������� �� ��������� ��������
	static void void_Cr_image(String^ path, int x);//void-����� ���������� �� ��������� ��������	
};

