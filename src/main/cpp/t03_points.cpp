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
#include <cmath>

using namespace std;

struct point{
    int x;
    int y;
};

int t03_points() {
    int n=0;
    cin>>n;
    vector <point> my_vec;
    for (int i=0; i<n; i++){
        point t;
        cin>>t.x;
        cin>>t.y;
        my_vec.push_back(t);
    }

    sort(my_vec.begin(),my_vec.end(), [](point a, point b)
    {
        return sqrt(a.x*a.x + a.y*a.y)<sqrt(b.x*b.x + b.y*b.y);
    });

    for (int i=0; i<n; i++){
        cout<<my_vec[i].x<<" "<<my_vec[i].y<<" ";
    }

}
