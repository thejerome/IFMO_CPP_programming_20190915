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
  int n,m, k = 0;
    cin >> n >> m;
    int a[n][m];
    int  rem=n;
    if (rem>m) rem=m;
    int i, j;
    for (i = 0; i < rem / 2; ++i) {
        for (j = i; j < m - i - 1; ++j)
            a[i][j] = ++k;
        for (j = i; j < n - i - 1; ++j)
            a[j][m - i - 1] = ++k;
        for (j = i; j < m - i - 1; ++j)
            a[n - i - 1][m - j - 1] = ++k;
        for (j = i; j < n - i - 1; ++j)
            a[n - j - 1][i] = ++k;
    }
    if (rem%2==1) {
        ++j;
        if (n<m) {
            for (j = i; j < m - i ; ++j) a[i][j] = ++k;
        }
        else     {
            for (j = i; j < n - i ; ++j) a[j][m - i - 1] = ++k;
        }
    }
    for (i = 0; i < n; ++i) {
        for (j = 0; j < m; ++j) cout << setw(4) << a[i][j];
        cout << endl;
    }
    return 0;
}
