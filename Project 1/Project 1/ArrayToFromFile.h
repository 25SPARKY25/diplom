#pragma once
#include <iostream>;
#include <fstream>;
#include <istream>;
#include "ImageToArray.h";
#include <vector>;
#include <string>;
class ArrayToFromFile
{
public:
	//������ ������� � ����
	static void VecToFile(std::vector<std::vector<int>> blackwhitevec, int x, int y);
	//������ ������� �������� �������� �� ������� � ����
	static void Avg_VecToFile(std::vector<std::vector<double>> Sum_Avg_Vec);
	//������ �� �����
	static std::vector<std::vector<int>> FileToVec(std::ifstream &f);



	ArrayToFromFile();
	~ArrayToFromFile();
};

