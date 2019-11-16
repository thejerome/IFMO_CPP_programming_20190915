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
   int n, m, c = 1, i = 0;
    cin >> n >> m;
    int a[100][100];
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            a[i][j] = 0;
        }
    }
    for (int k = 0; k < (n + m); k++) { 
        for (int j = (1 + k); j <= (m - k); j++) {
            i = 1 + k;
            if (a[i][j] == 0) {
                a[i][j] = c;
                c++;
            }
        }
        for (int i = (2 + k); i <= (n - k); i++) {
           int j;
            j = m - k;
            if (a[i][j] == 0) {
                a[i][j] = c;
                c++;
            }
        }
        for (int j = (m - 1 - k); j >= (1 + k); j--) {
            i = n - k;
            if (a[i][j] == 0) {
                a[i][j] = c;
                c++;
            }
        }
        for (int i = (n - 1 - k); i >= (2 + k); i--) {
           int j;
            j = 1 + k;
            if (a[i][j] == 0) {
                a[i][j] = c;
                c++;
            }
        }
    }        
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (a[i][j] < 10) {
                cout << "   " << a[i][j];
            }
            else if (a[i][j] < 100) {
                 cout << "  " << a[i][j];
            }
            else {
               cout << " " << a[i][j];
            }
        }
        cout << endl;
    }
    return 0;
}
