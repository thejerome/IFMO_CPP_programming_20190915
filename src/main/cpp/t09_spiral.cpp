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
    int n = 0, m =0;
    cin >>n>>m;
    int a[n][m];
    for (int i=0;i < n;i++) {
        for (int j = 0; j < m; j++) {
            a[i][j] = 0;
        }
    }
    int k=1;
    for (int j = 0; j <= (m-1); j++) {
        a[0][j] = k;
        k++;
    }
    for (int i = 1; i <= (n-1); i++) {
        a[i][m - 1] = k;
        k++;
    }
    for (int j = (m-2); j >= 0; j=j-1) {
        a[n - 1][j] = k;
        k++;
    }
    for (int  i= (n-2); i >= 1; i=i-1) {
        a[i][0] = k;
        k++;
    }
    int i=1, j=1;
    while (k<n*m) {
        while (a[i][j+1]==0){
            a[i][j]=k++;
            j++;
        }
    while (a[i+1][j]==0) {
            a[i][j] = k++;
            i++;
        }
    while (a[i][j-1]==0) {
            a[i][j] = k++;
            j = j - 1;
        }
    while (a[i-1][j]==0) {
            a[i][j]=k++;
            i=i-1;
        }
    }
    if (k<=n*m) a[i][j]=n*m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) { 
            cout << setw(4) << a[i][j]; 
        }
            cout << endl;    
    }
}
