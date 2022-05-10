#include <iostream>
#include "Area.h"
#include "Rectangle.h"
#include "Circle.h"
#include "Triangle.h"
#include "Trapezium.h"

int main() {
	setlocale(LC_ALL, "Rus");
	Area* obj[4] = { nullptr };
	char Choise;
	do
	{
		system("cls");
		cout << "Произвести расчет площади: " << endl;
		cout << "1. Прямоугольника" << endl;
		cout << "2. Круга" << endl;
		cout << "3. Прямоугольный треугольника" << endl;
		cout << "4. Трапеции" << endl;
		cout << "5. Выход" << endl;
		cout << "Выбор: ";
		cin >> Choise;
		switch (Choise) {
		case '1': {
			obj[Choise - 1] = new Square; //чтобы так можно было сделать делаем абстрактный класс
			cout << obj[Choise - 1]->Calc() << endl;
			delete obj[Choise- 1];
			break;
		}
		case '2': {
			obj[Choise - 1] = new Circle;
			cout << obj[Choise - 1]->Calc() << endl;
			delete obj[Choise - 1];
			break;
		}
		case '3': {
			obj[Choise - 1] = new Triangle;
			cout << obj[Choise - 1]->Calc() << endl;
			delete obj[Choise - 1];
			break;
		}
		case '4': {
			obj[Choise - 1] = new Trapezium;
			cout << obj[Choise - 1]->Calc() << endl;
			delete obj[Choise - 1];
			break;
		}
		case '5':
			Choise = 5;
			break;
		default:
			break;
		}
		system("pause");
	} while (Choise != 5);
	return 0;
}