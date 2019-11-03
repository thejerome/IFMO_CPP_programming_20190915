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
int n,m,s,i,j;
cin >>n>>m;
int a[n][m];
for (int i=0;i <=(n-1);i++) {
    for (int j=0;j <= (m-1);j++) {
        a[i][j]=0;
        ;};};
s=1;
for (int j = 0; j <= (m-1); j++) {
            a[0][j] = s;
            s++;
    }
for (int i = 1; i <= (n-1); i++) {
            a[i][m-1] = s;
            s++;
    }
for (int j = (m-2); j >= 0; j=j-1) {
            a[n-1][j] = s;
            s++;

}
for (int  i= (n-2); i >= 1; i=i-1) {
            a[i][0] = s;
            s++;
}
i=1;
j=1;
while (s<n*m){
    while (a[i][j+1]==0){
        a[i][j]=s;
        s++;
        j++;
    }
    while (a[i+1][j]==0){
        a[i][j]=s;
        s++;
        i++;
    }
    while (a[i][j-1]==0){
        a[i][j]=s;
        s++;
        j=j-1;
    }
    while (a[i-1][j]==0){
        a[i][j]=s;
        s++;
        i=i-1;
    }
}
a[i][j]=n*m;
for (int i=0;i <=(n-1);i++) {
    for (int j=0;j <= (m-1);j++) {
        if (a[i][j] <10) cout <<"   "<<a[i][j];
            else if (a[i][j] <100) cout <<"  "<<a[i][j];
                else cout <<" "<<a[i][j];
    }
    cout << endl;}
    return 0;
}