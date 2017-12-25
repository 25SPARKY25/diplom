#pragma once
#include <iostream>;
#include <fstream>;
#include <istream>;
#include "ImageToArray.h";
#include <vector>;

class ArrayToFromFile
{
public:
	//запись массива в файл
	static void VecToFile(std::vector<std::vector<int>> blackwhitevec, int x, int y);
	//чтение из файла
	static std::vector<std::vector<int>> FileToVec(std::ifstream &f);



	ArrayToFromFile();
	~ArrayToFromFile();
};

