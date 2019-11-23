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
struct dot {
    int x, y;
    double distance;
};

bool comparison (dot a, dot b) {
    return (a.distance < b.distance);
}

int t03_points() {
    int n;
    cin >> n;
    vector <dot> a(n);
    for (int i = 0; i < n; i++) {
        int x, y;
        dot new_d;
        cin >> x >> y;
        new_d.x = x;
        new_d.y = y;
        new_d.distance = sqrt(pow(x,2) + pow(y, 2));
        a[i] = new_d;
    }
    sort (a.begin(), a.end(), comparison);
    for (auto elem: a) cout << elem.x << " " << elem.y << endl;
    return 0;
}
