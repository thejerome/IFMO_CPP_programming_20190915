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

struct coordinats
{
	int a;
	int b;

};

bool compare(coordinats x, coordinats y) {
	return(x.a * x.a + x.b * x.b) < (y.a * y.a + y.b * y.b);
}

int t03_points() {
	int n;
	cin >> n;
	coordinats ex;
	vector <coordinats> N;
	for (int i = 0; i < n; i++) {
		int x1, y1;
		cin >> x1 >> y1;
		ex.a = x1;
		ex.b = y1;
		N.push_back(ex);
	}

	sort(N.begin(), N.end(), compare);
	for (auto i : N) {
		cout << i.a << " " << i.a << endl;
	}
	return 0;
}
		



	

	
	

