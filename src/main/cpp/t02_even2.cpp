//Выведите все четные элементы массива.
//Формат входных данных
//
//        В первой строке вводится количество элементов в массиве. Во второй строке вводятся элементы массива.
//Формат выходных данных
//        Выведите ответ на задачу. Элементы выводятся в том же порядке, в котором они стояли в массиве.
//Sample Input:
//
//7
//1 2 2 3 3 3 4
//Sample Output:
//
//2 2 4

#include "t02_even2.h"
#include <iostream>


using namespace std;

int t02_even2() {
int A[N];
	int i;
	int k;
	cin >> N;
	cin >> k;
	for (int i = 0; i < N; i++) {
		A[i] = k;
		if (k % 2 == 0)
			cout << k << " ";
	}
	retutn 0;
};
