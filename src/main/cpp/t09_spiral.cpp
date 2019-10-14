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

    int n, m, cnt = 1;
    cin >> n >> m;
    int a[n + 2][m + 2];

    for (int i = 0; i < n + 2; i ++) {
        a[i][0] = -1;
        a[i][m + 1] = -1;
    }
    for (int i = 0; i < m + 2; i ++) {
        a[0][i] = -1;
        a[n + 1][i] = -1;
    }
    for (int i = 1; i < n + 1; i ++)
        for (int j = 1; j < m + 1; j ++)
            a[i][j] = 0;

    int i = 1, j = 0;
    while (a[i][j + 1] == 0 or a[i + 1][j] == 0 or a[i][j - 1] == 0 or a[i - 1][j] == 0) {
        while (a[i][j + 1] == 0) {
            a[i][j + 1] = cnt;
            j ++;
            cnt ++;
        }
        while (a[i + 1][j] == 0) {
            a[i + 1][j] = cnt;
            i ++;
            cnt ++;
        }
        while (a[i][j - 1] == 0) {
            a[i][j - 1] = cnt;
            j --;
            cnt ++;
        }
        while (a[i - 1][j] == 0) {
            a[i - 1][j] = cnt;
            i --;
            cnt ++;
        }
    }

    for (int i = 1; i < n + 1; i ++) {
        for (int j = 1; j < m + 1; j ++)
            cout << setw(4) << a[i][j];
        cout << endl;
    }
    
    return 0;
}
