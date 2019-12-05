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

    cin >> n;
    cin >> m;

    int arr[n][m];

    bool isRow = true, isFwd = true;

    int maksI = n, maksJ = m, row = 0, col = 0, rowl = 1, coll = 0;
    arr[col][row] = 1;

    for (int i = 2; i <= n * m; ++i) {
        if(isRow){
            rowl++;
            if(isFwd){
                row++;
            }else{
                row--;
            }
        }else{
            coll++;
            if(isFwd){
                col++;
            }else{
                col--;
            }
        }
        arr[col][row] = i;

        if(rowl == maksJ){
            isRow = false;
            maksI--;
            rowl = 0;
        }
        if(coll == maksI){
            isRow = true;
            isFwd = !isFwd;
            maksJ--;
            coll = 0;
        }
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            printf("%4d", arr[i][j]);
        }
        cout << "\n";
    }
}
