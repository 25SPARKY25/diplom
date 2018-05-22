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
	//запись массива в файл
	static void VecToFile(std::vector<std::vector<int>> blackwhitevec, int x, int y);
	//запись массива среднего значения на пиксель в файл
	static void Avg_VecToFile(std::vector<std::vector<int>> Sum_Avg_Vec);
	//чтение из файла
	static std::vector<std::vector<int>> FileToVec(std::ifstream &f);
	static std::vector<std::vector<int>> Avg_FileToVec(std::ifstream &ff);



	ArrayToFromFile();
	~ArrayToFromFile();
};

