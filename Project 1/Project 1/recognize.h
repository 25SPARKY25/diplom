#pragma once
#include <iostream>;
#include <fstream>;
#include <istream>;
#include <vector>;
#include <string>;
#include "ImageToArray.h";
#include <time.h>;

//#include <stdafx.h>;
using namespace System::Drawing;
using namespace System;
using namespace std;


ref class recognize
{
public:
	static vector<std::vector<double>> Randomize_weights();//делаем веса рандомными
	static std::vector<std::vector<double>> FileToVecWieights();
	recognize();
};

