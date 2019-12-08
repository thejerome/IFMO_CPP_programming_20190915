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
#include <string>
using namespace std;

struct counterS {
	int x;
	int y;
};
bool compare(counterS a, counterS b) {
     return(a.x*a.x + a.y*a.y) < (b.x*b.x + b.y * b.y);
}

int t03_points() {
	int n, x1, y1;
	cin >> n;
	vector <counterS> a(n);
	for (int i = 0; i < n; i++) {
		cin >> x1 >> y1;
		counterS counter;
		counter.x = x1;
		counter.y = y1;
		a[i] = counter;
	}
	
	sort(a.begin(), a.end(), compare);
	for (auto now : a) {
		cout << now.x << " " << now.y << endl;
	}
	
	return 0;
}
