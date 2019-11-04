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
#include <iomanip>


using namespace std;

int t09_spiral() {
    int b,c,d=1;
    int a[100][100];
    cin>>b>>c;
for (int k=0;k<b-1;k++) {
    for (int j=k;j<c-k;j++) {
        a[k][j]=d;
        d++;
    }
    for (int i=k+1;i<b-k;i++) {
        a[i][c-k-1]=d;
        d++;
    }
    for (int j=c-2-k;j!=-1;j--) {
        a[b-1][j]=d;
        d++;
    }
    for (int i=b-2-k;i!=0;i--) {
        if (i==1) {
            break;
        }
        a[i][k]=d;
        d++;
    }
    
}    
    for (int i=0;i<b;i++) {
        for (int j=0;j<c;j++) {
            cout<<fixed<<setw(4)<<a[i][j]<<' ';
        }
        cout<<endl;
    }
    return 0;
}
