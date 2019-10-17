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
/*2
1 2
2 3
Sample Output:
*/
//1 2
//2 3

#include "t03_points.h"
#include <iostream>
#include <map>
#include <vector>
#include <algorithm>


using namespace std;

int t03_points() {
    int n,x,y;
    string xs,ys,s;
    map<int,string> a;
    cin>>n;
    vector<int> rs;
    for(int i =0;i<n;i++){
        cin>>xs;
        cin>>ys;
        x=stoi(xs);
        y=stoi(ys);
        x=x*x+y*y;
        s=xs+" "+ys;
        rs.push_back(x);
        a[x]+=s+"\n";
    }
    sort(rs.begin(),rs.end());
    cout<<a[rs[0]];
    for(int i=1;i<n;i++){
        if(rs[i]!=rs[i-1])
            cout<<a[rs[i]];
    }
    return 0;
}
