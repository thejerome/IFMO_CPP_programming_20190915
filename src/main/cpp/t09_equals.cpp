//Дан массив чисел. Посчитайте, сколько в нем пар элементов, равных друг другу. Считается, что любые два элемента, равные друг другу образуют одну пару, которую необходимо посчитать.
//Формат входных данных
//
//        В первой строке вводится количество элементов в массиве. Во второй строке вводятся элементы массива.
//Формат выходных данных
//        Выведите ответ на задачу.
//Sample Input 1:
//
//5
//1 2 3 2 3
//Sample Output 1:
//
//2
//Sample Input 2:
//
//5
//1 1 1 1 1
//Sample Output 2:
//
//10

#include "t09_equals.h"
#include <iostream>


using namespace std;

int t09_equals() {
	int n, x, sum = 0;
	cin >> n;
	vector <int> a;
	vector <int> counts;
	vector <int> val;
	for (int i = 0; i < n; i++) {
		cin >> x;
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
	for (auto now : counts) {
		if (now > 1) {
			sum = sum + (now * now - 3 * now) / 2 + now;
		}
	}
	cout << sum;
	return 0;
}
