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

bool cmp (pair<int,int> a1, pair<int, int> a2) {
    return sqrt(a1.first * a1.first + a1.second * a1.second) < sqrt(a2.first * a2.first + a2.second * a2.second);
}

int t03_points() {
    int n;
    cin >> n;
    vector<pair<int,int> >a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i].first >> a[i].second;
    }

    sort(a.begin(), a.end(), cmp);

    for(int i = 0; i < a.size(); i++) cout << a[i].first << ' ' << a[i].second << endl;

}
