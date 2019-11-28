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
#include<set>
#include<map>
#include<vector>
#include<cmath>
using namespace std;

int t03_points() {
vector <int> a;
set <double> dist;
map <double,vector<int> > points;
int n, x, y;
double d=0;
cin >> n;

for(int i = 0; i < n; i++) {
cin >> x;
cin >> y;
d = sqrt(x*x + y*y);
dist.insert(d);
if(dist.count(d)!= 0){points[d].push_back(x);points[d].push_back(y);}
else{
a.push_back(x);
a.push_back(y);
points[d] = a;
a.pop_back();
a.pop_back();}
}
for(auto i : dist) {if(points[i].size() == 2){cout <<points[i][0] << " " <<points[i][1] << " ";} else {cout << points[i][0] << " " << points[i][1] << " " << points[i][2] << " " << points[i][3] << " ";}}
}
