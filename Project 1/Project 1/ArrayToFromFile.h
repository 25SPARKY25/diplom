#pragma once
#include <iostream>;
#include <fstream>;
#include <istream>;
#include "ImageToArray.h";
#include <vector>;

class ArrayToFromFile
{
public:
	//������ ������� � ����
	static void VecToFile(std::vector<std::vector<int>> blackwhitevec, int x, int y);
	//������ �� �����
	static std::vector<std::vector<int>> FileToVec(std::ifstream &f);



	ArrayToFromFile();
	~ArrayToFromFile();
};

