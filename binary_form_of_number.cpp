// ConsoleApplicatio.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include<iostream>
#include<string>
using namespace std;


int main()
{
	setlocale(LC_ALL, "rus");
	int a = 0; // для подсчета количества единиц
	int b = 0; // для подсчета количства нулей
	string s; // объявляем строку для хранения числа
	cout << "Введите число в двоичной записи " << endl;
	getline(cin,s); 
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] == '1')
		{
			a = a + 1;

		}

		else if (s[i] == '0')
		{
			b = b + 1;
		}
		
	}
	cout << a << endl;
	cout << b << endl;
	system("pause");
    return 0;
}

