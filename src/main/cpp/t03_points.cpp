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
#include <map>
#include <vector>

using namespace std;

int t03_points() {
int N,x,y;
multimap<float,int> point;
vector<int> xy;
cin >> N;
for(int i=0; i<N; i++){
    cin >> x>>y;
    xy.push_back(x);
    xy.push_back(y);
    float distance=sqrt(x*x+y*y);
    point.insert(pair<float,int>(distance,i));
}
for (auto it = point.begin(); it != point.end(); ++it){
    cout << xy[2*(*it).second] << " " <<  xy[2*(*it).second+1]<< " ";
}
    return 0;
}
