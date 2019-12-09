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
    int n, m, ch = 1, p = 0, h = 0;
    cin >> m >> n;
    int a[m][n];
    int mv = m, nv = n;
    while (p < m && h < n) {
        for (int i = h; i < n; i++) {
            a[p][i] = ch;
            ch++;
        }
        p++;
        for (int i = p; i < m; i++) {
            a[i][n - 1] = ch;
            ch++;
        }
        n--;
        if (p < m) {
            for (int i = n - 1; i >= h; i--) {
                a[m - 1][i] = ch;
                ch++;
            }
            m--;
        }
        if (h < n) {
            for (int i = m - 1; i >= p; i--) {
                a[i][h] = ch;
                ch++;
            }
            h++;
        }
    }

    for (int i = 0; i < mv; i++) {
        for (int j = 0; j < nv; j++) {
            if (j == 0)
                cout << a[i][j];
            else
                cout << " " << a[i][j];
        }
        cout << endl;
    }
    return 0;
}
