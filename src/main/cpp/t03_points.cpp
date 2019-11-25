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
#include <iostream>#include <iostream>
#include<set>
#include<map>
#include <string>

using namespace std;

int t03_points() {
    multiset <double> dist;
map <double,string> points;
int n, x, y;
double d;
string a;
cin >> n;
getline(cin, a);
for(int i = 0; i < n; n++) {
getline(cin, a);
x = stoi(a.substr(0, a.find(' ')));
y = stoi(a.substr(a.find(' ') + 1, a.size()));
d = (x*x + y*y)^ 0.5;
dist.insert(d);
points[d] = a;
}
for(auto i : dist) {cout << points[i] << endl;}
}
