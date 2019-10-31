//Дан массив чисел. Посчитайте, сколько в нем пар элементов, равных друг другу. Считается, что любые два элемента, равные друг другу образуют одну пару, которую необходимо посчитать.
//Формат входных данных
//
//        В первой строке вводится количество элементов в массиве. Во второй строке вводятся элементы массива.
//Формат выходных данных
//        Выведите ответ на задачу.
//Sample Input 1:
//
//5
//1 2 3 2 3
//Sample Output 1:
//
//2
//Sample Input 2:
//
//5
//1 1 1 1 1
//Sample Output 2:
//
//10

#include "t09_equals.h"
#include <iostream>


using namespace std;

int t09_equals() {
	int z = 0, sum = 0;

	cin >> z;

	int a [40];
	for (int i = 0; i < z; i++)
		cin >> a[i];

	for (int i = 0; i < z - 1; i++)
	{
		for (int j = 0; j < z - i - 1; j++)
			if (a[j] > a[j + 1])
			{
				int h = a[j];
				a[j] = a[j + 1];
				a[j + 1] = h;
			}
	}
	bool cut = false;
	int g = 1;
	for (int i = 1; i < z; i++)
	{
		if (a[i] == a[i - 1])
			g++;
		if(a[i] != a[i - 1] || i==z-1)
			cut = true;
		if (cut)
		{
			sum += (g * (g - 1)) / 2;
			g = 1;
			cut = false;
		}
	}
	cout << sum;
}
