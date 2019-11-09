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
    int n=0, m=0;
    cin >>n >>m;
    int a[n][m];
    int num = 1;
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            a[i][j] = 0;
        }
    }
    int i=0, j=0;
    int i0=0, j0=0;
    while (true){
        if (a[i][j] != 0){
            break;
        } else {
            while (j<m){
                a[i][j] = num;
                num++;
                j++;
            }
            j--;
            i++;
            while (i<n){
                a[i][j] = num;
                num++;
                i++;
            }
            i--;
            j--;
            while (j>j0-1){
                a[i][j] = num;
                num++;
                j--;
            }
            j++;
            i--;
            j0++;
            while (i>i0){
                a[i][j] = num;
                num++;
                i--;
            }
            i++;
            j++;
            i0++;
        }
    }

    for (int k=0; k<n; k++){
        for (int p=0; p<m; p++){
            cout <<setw(4) <<a[k][p] <<" ";
        }
        cout <<endl;
    }
    return 0;
}
