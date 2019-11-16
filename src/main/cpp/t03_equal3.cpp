//Даны три целых числа. Определите, сколько среди них совпадающих. Программа должна вывести одно из чисел: 3 (если все совпадают), 2 (если два совпадает) или 0 (если все числа различны).
//
//Формат входных данных
//        Вводятся три числа.
//Формат выходных данных
//        Выведите ответ на задачу.
//Sample Input:
//
//1
//2
//3
//Sample Output:
//
//0

#include "t03_equal3.h"
#include <iostream>

using namespace std;

int t03_equal3() {
	int a = 0, b = 0, c = 0, N = 0;
	cin >> a >> b >> c;
	if (a == b) N++;
	if (a == c) N++;
	if (b == c) N++;
	switch (N)
	{
	case 0:
		cout << "0";
		break;
	case 1:
		cout << "2";
		break;
	case 3:
		cout << "3";
		break;
	}
	return 0;
}