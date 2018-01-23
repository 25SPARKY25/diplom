#pragma once
#include <vector>;
#include "ArrayToFromFile.h"
using namespace System::Drawing;
using namespace System;
using namespace std;


class ImageToArray
{
public:
	//����� ������
	static vector<std::vector<int>> ImgToVec(Bitmap ^img, vector<std::vector<int>> inputvec);//��������� �������� � ������
	//static Bitmap^ BWImage(Bitmap ^img); //��������� �������� � ��
	static vector<std::vector<int>> BWImageToVector(Bitmap ^img, vector<std::vector<int>> OutputBlackWhiteVec);//�� �� �������� � ������� � ������
	//��������� �� ������� �� ������� ������������ �� �����
	static std::vector<int> BWImage(Bitmap ^img, std::vector<int> single_inputvec); //�������� vector ��������
	static vector<std::vector<double>> AVG_Color(Bitmap ^img);//�������� ��������� ������ ������� ������ ��� �������

	//����� �������
	static int** ImgToArr(Bitmap ^img, int** InputColorArr);//��������� �������� � ������
	static Bitmap^ BWImage(Bitmap ^img); //��������� �������� � ��
	static int** BWImageToArray(Bitmap ^img, int** OutputBlackWhiteArr);//�� �� �������� � ������� � ������
	ImageToArray();
	~ImageToArray();
private:
	int** InputColorArr;		//������ 0 � 1 ��������� �����������
	int** OutputBlackWhiteArr;	//������ 0 � 1 �� �����������
};

