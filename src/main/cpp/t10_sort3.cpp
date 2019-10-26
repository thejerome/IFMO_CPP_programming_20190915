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
	int a, b, c;
	cin >> a >> b >> c;
	if ((a > b) && (a > c)) {
		if (b > c)
			cout << c << " " << b << " " << a;
		else
			cout << b << " " << c << " " << a;
	}
	else if ((b > c) && (b > a)) {
		if (a > c)
			cout << c << " " << a << " " << b;
		else
			cout << a << " " << c << " " << b;
	}
	else {
		if (a > b)
			cout << b << " " << a <<" " << c;
		else
			cout << a << " "<< b << " " << c;

	}
	return 0;
};