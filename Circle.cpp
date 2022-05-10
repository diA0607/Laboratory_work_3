#include "Circle.h"
//S=Pi*r^2
Circle::Circle() {
	ifstream in("Circle.txt");
		int c;
	cout << "1. Ввести значения  клавиатуры." << endl;
	cout << "2. Взять значения из файла." << endl;
	cout << "Введите:  ";
	cin >> c;
	cout << "\n";
	
	if (c == 1) {
		cout << "Введите радиус:\nr = ";
		cin >> r;
		cout << "Хотите изменить значения в файле на текущие?\n1.Да 2.Нет\nВыбор: ";
		int Choise2 = 0;
		cin >> Choise2;
		if (Choise2 == 1)
		{
			ofstream out("Circle.txt");
			out << r;
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
			in >> r;
			cout << "Загруженные данные:" << endl;
			cout << "Радиус: r = " << r<< endl;
		}
	}

}

Circle::~Circle() {}

double Circle::Calc() {
	
		S = PI * (r * r);
		cout << "\nРезультат:\nS = ";
		return S;
	
	
}