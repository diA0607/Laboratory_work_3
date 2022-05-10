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
		cout << "���������� ������ �������: " << endl;
		cout << "1. ��������������" << endl;
		cout << "2. �����" << endl;
		cout << "3. ������������� ������������" << endl;
		cout << "4. ��������" << endl;
		cout << "5. �����" << endl;
		cout << "�����: ";
		cin >> Choise;
		switch (Choise) {
		case '1': {
			obj[Choise - 1] = new Square; //����� ��� ����� ���� ������� ������ ����������� �����
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