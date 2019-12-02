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

using namespace std;


struct Point{
    bool operator<(const Point& B) const{
        return radiusVector < B.radiusVector;
    }

    double x;
    double y;
    double radiusVector;
};




int t03_points() {
    vector <Point> v;
    int n = 0;
    double x,y;

    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> x >> y;
        Point a = {x, y, sqrt(pow(x, 2) + pow(y, 2))};
        //cout << i << ": " << a.x << " " << a.y << " " << a.radiusVector << endl;
        v.push_back(a);
    }

    sort(v.begin(),v.end());

    for (int i = 0; i < n; i++){
        cout << v[i].x << " " << v[i].y << endl;
    }

    
}
