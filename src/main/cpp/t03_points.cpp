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


using namespace std;
struct junk{
    int TTR[2];
    double rast;
};
double distance (double x, double y){
    double rast = sqrt (x * x + y * y);
    return rast;
}

int t03_points() {
    int N;
    cin >> N;
    junk a[N + 1];
    for(int i = 0; i < N; i++){
        cin >> a[i].TTR[0];
        cin >> a[i].TTR[1];
        a[i].rast = distance(a[i].TTR[0], a[i].TTR[1]);
    }
    for(int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            if (a[i].rast > a[j].rast){
                a[N] = a[i];
                a[i] = a[j];
                a[j] = a[N];
            }
        }
    }
    for (int i = 0; i < N; i++){
        cout << a[i].TTR[0] << " ";
        cout << a[i].TTR[1] << " ";
    }
}
