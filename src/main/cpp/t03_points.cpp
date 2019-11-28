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
#include <map>

using namespace std;

int t03_points() {
int N,x,y;
map<int, int> point;
cin >> N;
for(int i=0; i<N; i++){
    cin >> x>>y;
    point.insert(pair<int, int>(x,y));
}
for (auto it = point.begin(); it != point.end(); ++it){
     cout << (*it).first << " " << (*it).second << endl;
}
    return 0;
}
