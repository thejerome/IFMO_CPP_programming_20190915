//Циклически сдвиньте элементы списка вправо (A[0] переходит на место A[1], A[1] на место A[2], ..., последний элемент переходит на место A[0]).
//Формат входных данных
//
//        В первой строке вводится количество элементов в массиве. Во второй строке вводятся элементы массива.
//Формат выходных данных
//        Выведите ответ на задачу.
//Sample Input:
//
//5
//1 2 3 4 5
//Sample Output:
//
//5 1 2 3 4

#include "t08_cycleswap.h"
#include <iostream>


using namespace std;

int t08_cycleswap() {
	int n;
	cin >> n;
	int mas[1000];
	for (int i = 0; i < n; i++) {
		cin >> mas[i];
	}
	int c = 0;
	c = mas[0];
	mas[0] = mas[n - 1];
	int b = 0;
	for (int i = 1; i < n; i++)
	{
		int boof1 =mas[i];
		int boof2 = c;
		int b = boof1;
		mas[i] = boof2;
		c = b;
	}
	for (int i = 0; i < n; i++) {
		cout << mas[i] << " ";
	}


}
