//Последовательность Фибоначчи определяется так:
//
//F(0) = 0, F(1) = 1, …, F(n) = F(n−1) + F(n−2).
//
//По данному числу N определите N-е число Фибоначчи F(N).
//
//Формат входных данных
//        Вводится натуральное число N.
//Формат выходных да//нных
//        Выведите ответ на задачу.
//Sample Input://
//
//6
//Sample Output:
//
//8

#include "t08_fibb.h"
#include <iostream>

using namespace std;

int t08_fibb() {

	int N, a, b;
	N = 0;
	a = 1;
	b = a;
	cin >> N;
	if (N == 0) cout << 0;
	else {
		if (N == 1) cout << 1;
		else {
			for (int i = 2; i < N; i++) {
				a = b + a;
				b = a - b;
			}
			cout << a << endl;
		}
	}
	return 0;
};