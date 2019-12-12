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
struct dot{
        int x,y;
        double l;
    };
bool c(dot a, dot b){
    return(a.l>b.l);
}
int t03_points() {
    int n;
    cin >> n;
    vector <dot> a(n);
    for (int i = 0;i<n;i++){
        int x,y;
        cin >> x >> y;
        dot d;
        d.x = x;
        d.y = y;
        d.l = sqrt(x^2+y^2);
        a[i] = d;
    }
    sort(a.begin(),a.end(),c);
    for (int i=0;i<n;i++){
        cout << a[i].x << ' ' << a[i].y << endl;
    }    
}
