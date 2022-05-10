#pragma once
#include "Area.h"
#include <iostream>

using namespace std;

class Square : public Area {
	double a;
	double b;
	double S;
public:
	Square();
	~Square();
	double Calc();
};