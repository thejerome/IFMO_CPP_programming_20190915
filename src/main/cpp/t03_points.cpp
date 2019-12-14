//Выведите все исходные точки в порядке возрастания их расстояний от начала координат.
//
//Входные данные
//
//Программа получает на вход набор точек на плоскости. 
// Сначала задано количество точек n, затем идет последовательность из n строк,
// каждая из которых содержит два числа: координаты точки. 
// Величина n не превосходит 100, все исходные координаты – целые числа, не превосходящие 10^3.
//
//Выходные данные
//
//Необходимо вывести все исходные точки в порядке возрастания их расстояний от начала координат.
//
//Sample Input:
//
//2
//1 2
//2 3
//Sample Output:
//
//1 2
//2 3

#include "t03_points.h"
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>
using namespace std;
struct point {
	int x, y;
};
int t03_points() {
	vector <point> a;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int x, y;
		point k;
		cin >> k.x >> k.y;
		a.push_back(k);
	}
	for (int i = 0; i < a.size(); i++) {
		for (int j = 0; j < a.size(); j++) {
			if (sqrt(pow(a[i].x,2)+pow( a[i].y, 2)) < (sqrt(pow(a[j].x, 2) + pow(a[j].y, 2))))
				swap(a[i], a[j]);
		}
	}
	for (int i = 0; i < n; i++) {
		cout << a[i].x << " " << a[i].y << " ";
	}
	return 0;
}
