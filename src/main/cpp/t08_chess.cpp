//Даны числа n и m. Заполните массив размером n × m в шахматном порядке: 
// клетки одного цвета заполнены нулями, 
// а другого цвета - заполнены числами натурального ряда сверху вниз, слева направо. 
// В левом верхнем углу записано число 1.
//Формат входных данных
//        Вводятся два числа n и m, не превышающие 100.
//
//Формат выходных данных
//        Выведите полученный массив, отводя на вывод каждого элемента ровно 4 символа.
//
//Sample Input:
//
//3 5
//Sample Output:
//
//   1   0   2   0   3
//   0   4   0   5   0
//   6   0   7   0   8

#include "t08_chess.h"
#include <iostream>


using namespace std;

int t08_chess() {
int n, m, b;
cin >> n >> m;
int a[n][m];
int qwer=1;
for (int i=0;i<n;i++){
for (int k=0;k<m;k++){
a[i][k] = 0;}}
for (int i=0;i<n;i++){
if (i%2==1) b=1;
else b=0;
for (int k=b;k<m;k++){
a[i][k]=qwer;
qwer++;
k++;}}
for (int i=0;i<n;i++){
for (int k=0;k<m;k++){
if (a[i][k] % 10 == a[i][k]) cout <<"   ";
else if (a[i][k]%100==a[i][k]) cout<<"  ";
else if (a[i][k]%1000==a[i][k]) cout<<" ";
cout<<a[i][k];}
cout<<endl;}
return 0;
}
