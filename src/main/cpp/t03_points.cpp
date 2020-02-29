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

using namespace std;

struct point{
    int x;
    int y;
    static bool compare(point p1, point p2){
        int s1 = p1.x * p1.x + p1.y * p1.y;
        int s2 = p2.x * p2.x + p2.y * p2.y;
        return s1 < s2;
    }
};

int t03_points() {
    vector <point> points;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        point t;
        cin >> t.x >> t.y;
        points.push_back(t);
    }

    sort(points.begin(), points.end(), point::compare);

    for(int i = 0; i < n; i++){
        cout << points[i].x << " " << points[i].y << " ";
    }
    return 0;
}
