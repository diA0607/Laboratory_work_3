#pragma once
#include "Area.h"
#include <iostream>

using namespace std;

class Circle : public Area {
	double S;
	double r;
public:
	Circle();
	~Circle();
	double Calc();
};