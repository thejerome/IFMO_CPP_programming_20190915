//Дан список, упорядоченный по неубыванию элементов в нем. Определите, сколько в нем различных элементов.
//Формат входных данных
//
//        В первой строке вводится количество элементов в массиве. Во второй строке вводятся элементы массива.
//Формат выходных данных
//        Выведите ответ на задачу.
//Sample Input:
//
//6
//1 2 2 3 3 3
//Sample Output:
//
//3

#include "t06_different.h"
#include <iostream>


using namespace std;

int t06_different() {
	int N, i, j, f,b;
	b = 0;
	cin >> N;
	int mas[10000];
	for (i = 0; i < N; i++) {
		cin >> mas[i];
	}

	for (i = 0; i < N - 1; i++) {
		for (int j = 0; j < N - i - 1; j++) {
			if (mas[j] > mas[j + 1]) {
				f = mas[j];
				mas[j] = mas[j + 1];
				mas[j + 1] = f;
			}
		}
	}

	for (i = 0; i < N - 1; i++) {
		if (mas[i] == mas[i + 1]) {
			for (j = i; j < N - 1; j++) {
				mas[j] = mas[j + 1];
				b++;
			}
		}
	}

	
	for (i = 0; i < N; i++) {
		cout << mas[i] << ' ';
	}
	cout << b;
	
	return (0);
}
