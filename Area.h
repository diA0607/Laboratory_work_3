#pragma once
#include <iostream>
#include <fstream>
#define PI 3.14159265358979323846
//abstract
using namespace std;
class Area {
public:
	Area() {};
	virtual ~Area() {};
	virtual double Calc() = 0;
	bool FileCheck(ifstream& pFile);
};
//абстрактный класс определяет какие именно методы могут поддерживать наследники
//абстрактный класс имеет чисто виртуальную функцию