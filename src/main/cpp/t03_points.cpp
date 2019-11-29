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
struct students{
    int name [2];
    double dist;
};

double distance (double x, double y) {

    double dist = sqrt (x * x + y * y);

    return dist;
}

int t03_points() {

    int N = 0;
    cin >> N;

    students a[N + 1];

    for (int i = 0; i < N; i++){
        cin >> a[i].name[0];
        cin >> a[i].name[1];
        a[i].dist = distance(a[i].name[0], a[i].name[1]);
    }

    for (int i = 0; i < N; i++) {
        for (int j = i; j < N; j++){
            if (a[i].dist > a[j].dist){

                a[N] = a[i];
                a[i] = a[j];
                a[j] = a[N];
            }
        }
    }

    for (int i = 0; i < N; i++){
        cout << a[i].name[0] << ' ';
        cout << a[i].name[1] << ' ';
    }
}
