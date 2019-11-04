//По данным числам n и m заполните двумерный массив размером n×m числами от 1 до n×m по спирали, выходящей из левого верхнего угла и закрученной по часовой стрелке, как показано в примере.
//Формат входных данных
//        Вводятся два числа n и m, не превышающие 100.
//
//Формат выходных данных
//        Выведите полученный массив, отводя на вывод каждого элемента ровно 4 символа.
//
//Sample Input:
//
//4 5
//Sample Output:
//
//   1   2   3   4   5
//  14  15  16  17   6
//  13  20  19  18   7
//  12  11  10   9   8

#include "t09_spiral.h"
#include <iostream>


using namespace std;

int t09_spiral() {
int n,m;
cin>>n>>m;
int a[n+2][m+2];
for (int i=0;i<=n+1;i++){
for (int k=0;k<=m+1;k++){
a[i][k]=-1;}}
for (int i=1;i<=n;i++){
for (int k=1;k<=m;k++){
a[i][k]=0;}}
int B=0;
int W=1;
int S=0;
while (B<n*m){
while (a[W][S+1]==0){
S++;
B++;
a[W][S]=B;}
while (a[W+1][S]==0){
W++;
B++;
a[W][S]=B;}
while (a[W][S-1]==0){
S--;
B++;
a[W][S]=B;}
while (a[W-1][S]==0){
W--;
B++;
a[W][S]=B;}}
for (int i=1;i<=n;i++){
for (int k=1;k<=m;k++){
if (a[i][k]%10==a[i][k]) cout<<"   ";
else if (a[i][k]%100==a[i][k]) cout<<"  ";
else if (a[i][k]%1000==a[i][k]) cout<<" ";
cout<<a[i][k];}
cout << endl;}
return 0;
}
