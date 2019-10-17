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
	int N, a = 0, b = 1, d = 2, c;
	cin >> N;
	c = b + a;
	while (d < N) {
		a = b;
		b = c;
		c = b + a;
		d++;
	}
	if (N == 0)
		cout << 0;
	else if (N == 1)
		cout << 1;
	else if (N == 2)
		cout << 1;
	else if (N == 3)
		cout << 2;
	else
		cout << c;
	return 0;
};