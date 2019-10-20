//Дано три числа. Упорядочите их в порядке неубывания.
//
//Формат входных данных
//        Вводятся три числа.
//Формат выходных данных
//        Выведите ответ на задачу.
//Sample Input:
//
//1
//2
//1
//Sample Output:
//
//1 1 2

#include "t10_sort3.h"
#include <iostream>

using namespace std;

int t10_sort3() {
	int x, y, z;
	cin >> x >> y >> z;
	if (x < y && x < z)
	{
		if (z >y)
		{
			cout << x << " " << y << " " << z;
		}
		else
		{
			cout << x << " " << z << " " << y;
		}
	}
	else if (y < x && y<z)
	{
		if(z >x)
		{
			cout << y << " " << x << " " << z;
		}else
		{
			cout << y << " " << z << " " << x;
		}
	} else
	{
		if (y > x)
		{
			cout << z << " " << x << " " << y;
		}
		else
		{
			cout << z << " " << y << " " << x;
		}
		return 0;
	}
};