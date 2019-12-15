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

using namespace std;

struct Point
{
    int x,y;
    double S;
};

double gipotez(int x, int y)
{
    double D = sqrt(pow(x,2) + pow(y,2));
    return D;
}

void sort(Point *a, int z) {
    int i = 0;
    while (i < (z - 1)) {
        i++;
        for (int j = 0; j < z - 1; j++)
            if (a[j].S > a[j + 1].S) {
                Point buf = a[j];
                a[j] = a[j + 1];
                a[j + 1] = buf;
            }
    }
}

int t03_points()
{
    int z;
    cin >> z;
    Point *point = new Point [z];
    for (int i = 0; i < z; i++)
        cin >> point[i].x >> point[i].y;

    for (int j = 0; j < z; j++)
        point[j].S = gipotez(point[j].x, point[j].y);
    sort(point, z);
    for (int k = 0; k < z; k++)
        cout << point[k].x << " " << point[k].y << endl;

    return 0;
}