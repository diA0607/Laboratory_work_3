#include "Triangle.h"
//S = (a * b) / 2.0
Triangle::Triangle() {
	ifstream in("Triangle.txt");
	int c;
	cout << "1. Ввести значения  клавиатуры." << endl;
	cout << "2. Взять значения из файла." << endl;
	cout << "Введите:  ";
	cin >> c;
	cout << "\n";
	
	if (c == 1) {
		cout << "Введите стороны:\na = ";
		cin >> a;
		cout << "b = ";
		cin >> b;
		cout << "Хотите изменить значения в файле на текущие?\n1.Да 2.Нет\nВыбор: ";
		int Choise2 = 0;
		cin >> Choise2;
		if (Choise2 == 1)
		{
			ofstream out("Triangle.txt");
			out << a << " " << b;
			out.close();
		}
	}
	if (c == 2) {
		if (!in || FileCheck(in)) {
			cout << "Файл пуст или не существует." << endl;
			system("pause");
			c = 1;
		}
		else {
			in >> a >> b;
			cout << "Загруженные данные:" << endl;
			cout << "Сторонa a = " << a <<endl;
			cout << "Сторонa b = " << b <<endl;
		}
		in.close();
	}
	
}

Triangle::~Triangle() {}

double Triangle::Calc() {
	
		S = (a * b) / 2.0;
		cout << "\nРезультат:\nS = ";
		return S;
	
	
}