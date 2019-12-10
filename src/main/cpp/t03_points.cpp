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


using namespace std;

int t03_points() {
	struct points
	{
		int x;
		int y;
		double r;
	};
	vector<points> s;
	int n = 0, p1 = 0, p2 = 0;
	cin >> n;
	points p;
	for(int i=0;i<n;i++)
	{
		s.push_back(p);
		cin >> p1 >> p2;
		s[i].x = p1;
		s[i].y = p2;
		s[i].r = sqrt(p1 * p1 + p2 * p2);
	}
	for(int i=0; i<n-1;i++)
	{
		for (int j = 0 ; j < n-1; j++) 
		{
			if (s[j].r > s[j + 1].r) { swap(s[j], s[j + 1]); }
		}
	}
	for (int i = 0; i < n;i++) { cout << s[i].x << " " << s[i].y << " "; }
}

