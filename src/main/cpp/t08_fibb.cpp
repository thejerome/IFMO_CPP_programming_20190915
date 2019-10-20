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
	int N, i = 0, a = 1, b = 1, sum;
	cin >> N;
	if (N== 0)
	{
		cout << 0;
	}
	else {
		while (i < N - 2)
		{
			sum = a + b;
			a = b;
			b = sum;
			i++;
		}
		cout << b;
	}
	return 0;
};