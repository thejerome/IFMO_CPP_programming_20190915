//Дан массив. Выведите те его элементы, которые встречаются в массиве только один раз. Элементы нужно выводить в том порядке, в котором они встречаются в списке.
//Формат входных данных
//
//        В первой строке вводится количество элементов в массиве. Во второй строке вводятся элементы массива.
//Формат выходных данных
//        Выведите ответ на задачу.
//Sample Input 1:
//
//6
//1 2 2 3 3 3
//Sample Output 1:
//
//1
//Sample Input 2:
//
//8
//4 3 5 2 5 1 3 5
//Sample Output 2:
//
//4 2 1

#include "t10_unique.h"
#include <iostream>

using namespace std;

int t10_unique() {
	int z = 0;
	
	cin >> z;

	int a [40];
	int b[40];
	int const g = -1000;
	for (int i = 0; i < z; i++)
	{
		b[i] = g;
		cin >> a[i];
	}
	int x = 0;
	bool cont = false;
	for (int i = 0; i < z; i++)
	{
		int k = 0;
		while (k<z)
		{
			if (b[k] == a[i])
			{
				cont = true;
				break;
			}
			k++;
		}
		if (cont)
		{
			cont = false;
			continue;
		}
		b[x] = a[i];
		x++;
		for ( int j = i+1; j <z; j++)
		{
			if (a[i] == a[j])
				break;
			if (j == z - 1)
				cout << a[i] << " ";
		}
		if (i == z - 1)
			cout << a[i] ;
	}
}
