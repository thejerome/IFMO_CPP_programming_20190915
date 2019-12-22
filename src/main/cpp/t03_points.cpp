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
#include <set>
#include <vector>
#include <algorithm>
#include <cmath>


using namespace std;

struct coordinate {
	double dist;
	int x;
	int y;
};
bool cmp(coordinate a, coordinate b) {
	return (a.dist < b.dist);
}


int t03_points() {
	int n;
	cin >> n;
	vector <coordinate> mas(n);
	for (int i = 0; i < n; i++) {
		coordinate a;
		cin >> a.x >> a.y;
		a.dist = sqrt((a.x * a.x + a.y * a.y));
		mas[i] = a;
	}
	sort(mas.begin(), mas.end(), cmp);
	for (coordinate v : mas) {
		cout << v.x << " " << v.y << endl;
	}
	return 0;
}
	
		



	

	
	

