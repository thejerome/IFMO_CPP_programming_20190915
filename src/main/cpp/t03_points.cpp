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
struct point {int a; int b;};//точка

bool dist (point x, point y) {
    return (x.a*x.a + x.b*x.b) < (y.a*y.a + y.b*y.b);//сравним две точки
}

int t03_points()
{
    int N;
    cin >> N;
    vector <point> points(N);
    for (int i = 0; i < N; i++) {
        int xi, yi;
        cin >> xi >> yi;
        points[i] = {xi, yi};
    }
    sort(points.begin(), points.end(), dist);
    for (point s : points) {
        cout << s.a << " " << s.b << " ";
    }

}
