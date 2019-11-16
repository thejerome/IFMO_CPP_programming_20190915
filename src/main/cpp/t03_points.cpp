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
#include <algorithm>
#include <vector>


int t03_points() {
	int n, c = 0;
	std::pair<int, int> xy;
	std::vector<std::pair<int, int>> v;

	std::cin >> n;
	for (int i = 0; i < n; ++i) {
		std::cin >> xy.first >> xy.second;
		v.push_back(xy);
	}

	sort(v.begin(), v.end(), [](const std::pair<int, int>& a, const std::pair<int, int>& b) {
		return a.first * a.first + a.second * a.second < b.first * b.first + b.second * b.second;
		});

	for_each(v.begin(), v.end(), [](const std::pair<int, int>& a) {
		std::cout << a.first << ' ' << a.second << std::endl;
		});

	return 0;
}
