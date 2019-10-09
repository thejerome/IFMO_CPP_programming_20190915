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
	int N = 0, i = 1, n1 = 0, n2 = 1, f1 = 0;
	cin >> N;
	if (N == 0) { cout << 0; }
	else 
	{
		if (N == 1) { cout << 1; }
		else
		{
			while (i <= N)
			{
				n1 = f1;
				f1 = n2 + n1;
				n2 = n1;
				i++;
			}
			cout << f1;
		}
	}
	
};