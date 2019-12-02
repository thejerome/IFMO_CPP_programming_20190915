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
#include <cmath>

using namespace std;

double rad (double x, double y) {
    double r = sqrt (x * x + y * y);
    return (r);
}

struct point{
    int x,y;
};

int t03_points() {
    vector <point> p;
    int N;
    cin >> N;

    for (int i = 0; i < N; i++){
        int x,y;
        point a;
        cin >> a.x;
        cin >> a.y;
        p.push_back(a);
    }

    for (int i = 0; i < p.size(); i++) {
        for (int j = 0; j < p.size(); j++) {
            if (rad (p[i].x, p[i].y) < rad (p[j].x, p[j].y))
                swap(p[i], p[j]);
        }
    }

    for (int i = 0; i < N; i++){
        cout << p[i].x << " "<< p[i].y << " ";
    }
    return(0);
}
