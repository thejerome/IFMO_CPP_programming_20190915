//Напишите функцию min(a, b), вычисляющую минимум двух чисел. 
// Затем напишите функцию min4(a, b, c, d), вычисляющую минимум 4 чисел с помощью функции min. 
// Считайте четыре целых числа и выведите их минимум.
//Формат входных данных
//        Вводятся четыре целых числа.
//Формат выходных данных
//        Выведите ответ на задачу.
//Sample Input:
//
//4
//5
//6
//7
//Sample Output:
//
//4

#include "t01_min.h"
#include <iostream>


using namespace std;

//function min 
int min(int x, int y)
{
	int min;
	if (x >= y)

		min = y;

	else
		min = x;
	return min;
}
//function min4 

int min4(int x, int y, int z, int w)
{
	int min1;
	if (min(x, y) >= min(z, w))
		min1 = min(z, w);
	else
		min1 = min(x, y);
	return min1;
}
//function min4 

int t01_min() {
	int a, b, c, d;
	cin >> a;
	cin >> b;
	cin >> c;
	cin >> d;
	cout << min4(a, b, c, d);
    return 0;
}
