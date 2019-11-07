//Выведите значение наименьшего нечетного элемента списка, а если в списке нет нечетных элементов - выведите число 0.
//
//Формат входных данных////
//
//        В первой строке вводится количество элементов в массиве. Во второй строке вводятся элементы массива.
//Формат выходных данных
//        Выведите ответ на задачу.
//Sample Input 1:
//
//5
//0 1 2 3 4
//Sample Output 1:
//
//1
//Sample Input 2:
//
//5
//2 4 6 8 10
//Sample Output 2:
//
//0

#include "t05_minodd.h"
#include <iostream>
#include <cmath>


using namespace std;

int t05_minodd() {
	int N, i, min;
	cin >> N;
	int mas[10000];
	min = 100000;

	for (i = 0; i < N ; i++) {
		cin >> mas[i];
		if ((mas[i] % 2 == 1 || mas[i] % 2 == -1) && mas[i] < min) {
			min = mas[i];
		}
		
	}

	if (min == 100000) {
		cout << '0';
	}
	else {
		cout << min;
	}
	return (0);

}
