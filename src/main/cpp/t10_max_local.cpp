//Элемент последовательности называется локальным максимумом, если он строго больше предыдущего и последующего элемента последовательности. Первый и последний элемент последовательности не являются локальными максимумами.
//
//Дана последовательность натуральных чисел, завершающаяся числом 0. Определите количество строгих локальных максимумов в этой последовательности.
//
//Формат входных данных
//        Вводится последовательность натуральных чисел, оканчивающаяся числом 0 (само число 0 в последовательность не входит, а служит как признак ее окончания).
//Формат выходных данных
//        Выведите ответ на задачу.
//Sample Input:
//
//1
//2
//1
//2
//1
//0
//Sample Output:
//
//2

#include "t10_max_local.h"
#include <iostream>

using namespace std;

int t10_max_local() {
	int i, i1, kol, c;
	i = 0; 
	i1 = 0; 
	kol = 0;
	c = 0;
	while (true)
	{
		cin >> i;
		if (i == 0)
		{
			cout << kol;

		}
		if (i < i1 && i1 == c && c != 0)
		{
			kol++;
		}
		else if (i > i1&& i1 != 0)
		{
			c = i;
		}
		i1 = i;
	}
	cout << kol;
	return 0;
};