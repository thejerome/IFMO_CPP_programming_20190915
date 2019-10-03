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
	int n,i=0,last=1,prelast=1;
	cin >> n;
	if (n == 0)
		cout << "0";
	else if (n < 3)
		cout << "1";
	else
	{
		while (i < n-2)
		{
			int j = prelast;
			prelast += last;
			last = j;
			i++;
		}
		cout << prelast;
	}
};