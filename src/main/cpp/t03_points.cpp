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

struct point {
 int x, y, distance;
};

bool cmp ( point a, point b) {
  return a.distance < b.distance;  
}
int t03_points() {
 int n, i, temp1, temp2, dis;
    cin >> n;
    vector <point> a(n);
    for (i = 0; i < n; i++) {
        cin >> temp1 >> temp2;
        dis = temp1*temp1 + temp2*temp2;        
        point struct_temp;        
        struct_temp.x = temp1;
        struct_temp.y = temp2;
        struct_temp.distance = dis;
        a[i] = struct_temp;
    }
    stable_sort(a.begin(), a.end(), cmp);
    for (auto i: a) {
     cout << i.x << " " << i.y << endl; 
    }    
}
