//Дан массив. Выведите те его элементы, которые встречаются в массиве только один раз. Элементы нужно выводить в том порядке, в котором они встречаются в списке.
//Формат входных данных
//
//        В первой строке вводится количество элементов в массиве. Во второй строке вводятся элементы массива.
//Формат выходных данных
//        Выведите ответ на задачу.
//Sample Input 1:
//
//6
//1 2 2 3 3 3
//Sample Output 1:
//
//1
//Sample Input 2:
//
//8
//4 3 5 2 5 1 3 5
//Sample Output 2:
//
//4 2 1

#include "t10_unique.h"
#include <iostream>

using namespace std;

int t10_unique() {
	int n, x, sum = 0;
	cin >> n;
	vector <int> a;
	vector <int> counts;
	vector <int> val;
	for (int i = 0; i < n; i++) {
		cin >> x;
		a.push_back(x);
	}
	val.push_back(a[0]);
	counts.push_back(1);

	for (int i = 1; i < n; i++) {
		bool added = false;
		for (int j = 0; j < val.size(); j++) {
			if (val[j] == a[i]) {
				counts[j]++;
				added = true;
			}
		}
		if (not added) {
			val.push_back(a[i]);
			counts.push_back(1);
		}
	}
	for (int j = 0; j < counts.size(); j++) {
		if (counts[j] == 1) {
			cout << val[j] << " ";
		}
	}
	return 0;
}
