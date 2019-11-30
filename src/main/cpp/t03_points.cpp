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
#include <cmath>
#include <algorithm>

using namespace std;
struct xy{
double x;
double y;};
bool h(xy a1,xy a2){
double h1=sqrt(pow(a1.x,2)+pow(a1.y,2));
double h2=sqrt(pow(a2.x,2)+pow(a2.y,2));
return (h2>h1);}
int t03_points() {
    int l;
cin>>l;
vector<xy>n(l);
for(int v=0;v<l;v++){
    cin>>n[v].x>>n[v].y;
}
sort(n.begin(),n.end(),h);
for(int v=0;v<l;v++){
    cout<<n[v].x<<" "<<n[v].y<<"\n";}
return 0;
}
