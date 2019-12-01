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
#include<cmath>

using namespace std;
struct point{
  int x;
  int y;

};
double rast(point p)
{
  return sqrt(pow(0-p.x,2)+pow(0-p.y,2));
}
void sort(point arr[], int n)
{
  point swap;
  for(int i=0;n >i;i++)
    for(int j=n-1;j>i;j--)
       if(rast(arr[j-1]) >rast(arr[j]))
        {
           swap=arr[j-1];
           arr[j-1]=arr[j];
           arr[j]=swap;
        }
}
int t03_points() {
int n;
cin>>n;
point arr[n];
for(int i=0;i<n;i++)
{
    cin>>arr[i].x;
    cin>>arr[i].y;
}
sort(arr,n);
for(int i=0;i<n;i++)
{
  cout<<arr[i].x<<" "<<arr[i].y<<endl;
}
}
