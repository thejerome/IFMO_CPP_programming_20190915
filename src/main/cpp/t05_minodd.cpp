//Выведите значение наименьшего нечетного элемента списка, а если в списке нет нечетных элементов - выведите число 0.
//
//Формат входных данных
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
		int n, min_2 = 0;
		cin >> n;
		vector <int> a;
		for (int i = 0; i < n; i++) {
			int temp;
			cin >> temp;
		}
		for (int i = 0; i < n; i++) {
			if ((min_2 > a[i] || min_2 == 0) && a[i] % 2 != 0) {
				min_2 = a[i];
			}
		}
		cout << min_2;
		return 0;
