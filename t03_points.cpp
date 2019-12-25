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
using namespace std;

class point
{
    public:
    int x, y;
    int distence;
    void culc()
    {
        distence = x*x + y*y;
    }
};
bool operator< (point & lhd, point & rhd){return lhd.distence < rhd.distence;}
int t03_points() {
    int n;
    cin >> n;
    vector<point> points(n);
    for(auto & i : points){cin >> i.x >> i.y; i.culc();}
    sort(points.begin(), points.end());
    for(auto & i : points)cout << i.x << " " << i.y << endl;
    return 0;
}
