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
#include <math.h>
#include <vector>
#include <algorithm>
#include <utility>

double d(std::pair<int, int> point) {
    return sqrt(point.first*point.first + point.second*point.second);
}

bool cmp(std::pair<int, int> a, std::pair<int, int> b) {
    return (d(a) < d(b));
}

int t03_points() {
    int n;
    std::cin >> n;
    std::vector<std::pair<int, int>> vec(n);
    for (int i = 0; i < n; i++) {
        std::cin >> vec[i].first >> vec[i].second;
    }
    std::sort(vec.begin(), vec.end(), cmp);
    for (auto i : vec) {
        std::cout << i.first << " " << i.second << std::endl;
    }
    return 0;
}
