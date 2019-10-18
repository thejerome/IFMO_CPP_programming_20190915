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
	int a = 0;
	int c = 0;
	int d = 0;
	int g = 0;
	int b = 1;
	cin >> c;
	while (d < c) {
		g = b;
		b = a + g;
		a = g;
		d++;
	}
	cout << g;
	return 0;	
};
