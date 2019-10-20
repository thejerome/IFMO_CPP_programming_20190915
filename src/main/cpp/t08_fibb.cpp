//Последовательность Фибоначчи определяется так:
//
//F(0) = 0, F(1) = 1, …, F(n) = F(n−1) + F(n−2).
//
//По данному числу N определите N-е число Фибоначчи F(N).
//
//Формат входных данных
//        Вводится натуральное число N.
//Формат выходных данных
//        Выведите ответ на задачу.
//Sample Input:
//
//6
//Sample Output:
//
//8

#include "t08_fibb.h"
#include <iostream>

using namespace std;

int t08_fibb() {
	int a, b, n, i, f;
	cin >> n;
	a = 1;
	b = 1;
	i = 2;
	f = 0;
	if (n > 2) {
		while (i < n) {
			f = a + b;
			a = b;
			b = f;
			i += 1;
		}
		cout << f;
	}
	else if (n == 0)
		cout << "0";
	else
		cout << "1";
	
};