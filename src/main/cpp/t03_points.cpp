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
#include <cmath>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;
int distance(int x, int y)
{
    return (pow(0 - x, 2) + pow(0 - y, 2));
}
int t03_points() {
    int n;
    cin >> n;
    vector <pair <int, int>> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i].first >> a[i].second;
    sort(a.begin(), a.end());
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
        {
            if (distance(a[i].first, a[i].second) > distance(a[j].first, a[j].second))
            {
                int x, y;
                x = a[i].first;
                y = a[i].second;
                a[i].first = a[j].first;
                a[i].second = a[j].second;
                a[j].first = x;
                a[j].second = y;
            }
        }
    for (auto now : a)
        cout << now.first << " " << now.second << "\n"; 
}
