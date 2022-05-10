#include "Trapezium.h"
//S = h * ((a + b) / 2)
Trapezium::Trapezium() {
	ifstream in("Trapezium.txt");
	int c;
	cout << "1. Ввести значения  клавиатуры." << endl;
	cout << "2. Взять значения из файла." << endl;
	cout << "Введите:  ";
	cin >> c;
	cout << "\n";
	if (c == 1) {
		cout << "Введите длины оснований:" << endl;
		cout << "a = ";
		cin >> a;
		cout << "b = ";
		cin >> b;
		cout << "Введите высоту:\nh = ";
		cin >> h;
		cout << "Хотите изменить значения в файле на текущие?\n1.Да 2.Нет\nВыбор: ";
		int Choise2 = 0;
		cin >> Choise2;
		if (Choise2 == 1)
		{
			ofstream out("Trapezium.txt");
			out << a << " " << b << " " << h;
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
			in >> a >> b >> h;
			cout << "Загруженные данные:" << endl;
			cout << "Длины оснований: a = " << a << " b = " << b<< endl;
			cout << "Высота: h = " << h <<  endl;
		}
		in.close();
	}
}

Trapezium::~Trapezium() {}

double Trapezium::Calc() {

		S = h * ((a + b) / 2.0);
		cout << "\nРезультат:\nS = ";
		return S;

}