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
#include <cmath>

using namespace std;
struct PT{
 float x;
 float y;};
bool SW(PT S1,PT S2)
{

    float C1 = sqrt(pow(S1.x,2) + pow(S1.y,2));
    float C2 = sqrt(pow(S2.x,2) + pow(S2.y,2));
    return (C1 < C2);

}
int t03_points() {
    int D;
cin >> D;
vector <PT> SIZE(D);
for(int L =0;L < D;L++)
{cin >> SIZE[L].x >> SIZE[L].y;
}
sort(SIZE.begin(),SIZE.end(), SW);
for(int L = 0; L < D; L++)
{
cout << SIZE[L].x  << " " << SIZE[L].y << "\n";
}
}
