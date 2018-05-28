#pragma once
#include <iostream>;
#include <fstream>;
#include <istream>;
#include "ImageToArray.h";
#include <vector>;
#include <string>;
using namespace System::Drawing;
class ArrayToFromFile
{
public:
	//������ ������� � ����
	static void VecToFile(std::vector<std::vector<int>> blackwhitevec, int x, int y);
	//������ ������� �������� �������� �� ������� � ����
	static void Avg_VecToFile(std::vector<std::vector<int>> Sum_Avg_Vec);
	//������ �� �����
	static std::vector<std::vector<int>> FileToVec(std::ifstream &f);
	static std::vector<std::vector<int>> Avg_FileToVec(std::ifstream &ff);



	ArrayToFromFile();
	~ArrayToFromFile();
};

