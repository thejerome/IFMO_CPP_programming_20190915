//Дано нечетное число n, не превосходящее 15.
//Создайте двумерный массив из n×n элементов, заполнив его символами "."
// (каждый элемент массива является строкой из одного символа).
// Затем заполните символами "*" среднюю строку массива,
// средний столбец массива, главную диагональ и побочную диагональ.
// В результате "*" в массиве должны образовывать изображение звездочки.
// Выведите полученный массив на экран, разделяя элементы массива пробелами.
//
//Sample Input:
//
//5
//Sample Output:
//
//* . * . *
//. * * * .
//* * * * *
//. * * * .
//* . * . *

#include "t02_star.h"
#include <iostream>


using namespace std;

int t02_star() {
	int n = 0;
	cin >> n;
	string a[n][n] = {"."};
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			a[i][j] = ".";
		}
		
	}
	for (int i = 0; i < n; i++)
	{
		a[i][i] = "*"; a[i][n - i - 1] = "*"; a[i][n / 2] = "*";
	}
	for (int i = 0; i < n; i++)
	{
		a[n / 2][i] = "*";
	}
	for (int i = 0; i < n; i++)
	{
		for(int j=0; j<n;j++)
		{
			cout << a[i][j];
			cout << " ";
		}

	}
}
