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

bool cmp(pair<int, int> &lhs, pair<int, int> &rhs){
    int a = (lhs.first*lhs.first + lhs.second*lhs.second);
    int b = (rhs.first*rhs.first + rhs.second*rhs.second);
    return a<b;
}

int t03_points() {
    int n=0;
    cin >>n;
    int a=0, b=0;
    pair<int,int> c;
    vector<pair<int, int>> m1;
    for (int i=0; i<n; i++){
        cin >>a >>b;
        c.first=a;
        c.second=b;
        m1.push_back(c);
    }
    sort(m1.begin(), m1.end(), cmp);
    //sort(m1.begin(), m1.end(), cmp);
    for (auto i:m1){
        cout <<i.first <<" " <<i.second <<endl;
        }
    return 0;
}
