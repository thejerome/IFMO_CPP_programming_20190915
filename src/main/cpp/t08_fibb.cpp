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
	int a0 = 0, a1 = 1, f=0, n, k;
	cin >> n;
	k = 1;
	if(n == 1)
		cout << 1;
	else 
	{
		while (k < n)
		{
			f = a0 + a1;
			a0 = a1;
			a1 = f;
			k = k + 1;		
		}
		cout << f;
	}	
return 0;
};