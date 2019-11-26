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
    int n, m, counter;
    counter = 1;
    cin >> n >> m;
    int a[n][m];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            a[i][j] = 0;
        };
    };
    for (int i = 0; i < (n + m); i++) {
        for (int j = (i + 1); j <= (m - i); j++) {
            if (a[i + 1][j] == 0) {
                a[i + 1][j] = counter;
                counter++;
            };
        };
        for (int x = (i + 2); x <= (n - i); x++) {
            if (a[x][m - i] == 0) {
                a[x][m - i] = counter;
                counter++;
            };
        };
        for (int j = (m - 1 - i); j >= (i + 1); j--) {
            if (a[n - i][j] == 0) {
                a[n - i][j] = counter;
                counter++;
            };
        };
        for (int x = (n - i - 1); x >= (i + 2); x--) {
            if (a[x][i+1] == 0) {
                a[x][i+1] = counter;
                counter++;
            };
        };
    };
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (a[i][j] < 10) {
                cout << "   " << a[i][j];
            }
            else {
                if (a[i][j] < 100) {
                    cout << "  " << a[i][j];
                };
            };
        };
    };
    return 0;
}
