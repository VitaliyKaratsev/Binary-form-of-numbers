//Необходимо подсчитать количество единиц и нулей в двоичной записи числа

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
	getline(cin,s); // ввод числа
	for (int i = 0; i < s.length(); i++) // пробегаем по циклу for пока не превысим длину строки(числа)
	{
		if (s[i] == '1') // если 1, то повышаем счетчик кол-ва единиц
		{
			a = a + 1;

		}

		else if (s[i] == '0') // если 2, то повышаем счетчик кол-ва нулей
		{
			b = b + 1;
		}
		
	}
	cout << a << endl;
	cout << b << endl;
	system("pause");
    return 0;
}

