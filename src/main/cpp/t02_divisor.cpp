////Дано целое число, не меньшее 2. Выведите его наименьший натуральный делитель, отличный от 1.
//
//Формат входных данных
//        Вводится целое положительное число.
//
//Формат выходных данных
//        Выведите ответ на задачу.
//
//Sample Input:
//
//15
//Sample Output:
//
//3

#include "t02_divisor.h"
#include <iostream>

using namespace std;

int t02_divisor() {
	int N;
	N = 0;
	cin >> N;
	for (int i = 2; i <= N; i++)
		if (N % i == 0)
		{
			cout << i << endl;
			return 0;
		}
	return 0;

};