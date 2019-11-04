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
	int n;
	cin >> n;
	int min = 1;
	cin >> n;
	int A[n];
	for (int i = 0; i < n; i++) {
		cin >> A[i];	
	};
	for (int i = 1; i < n; i++) {
		if (A[i] != A[i - 1]) {
			min++;
		};
	}
	cout << min;
	return 0;

};
