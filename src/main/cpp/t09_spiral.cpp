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
    int n, m, i, j, a;
    i = 0;
    j = 0;
    a = 1;
    cin >> n >> m;
    int mas[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            mas[i][j]=0;
        }
    }
    while (a < n * m + 1) {
        mas[i][j] = a;
        if (mas[i][j + 1] == 0 && j + 1 < m && (i - 1 < 0 || mas[i-1][j])) {
            j++;
            a++;
        }
        else
            if (mas[i + 1][j] == 0 && i + 1 < n && (j + 1 == m || mas[i][j+1] != 0)) {
                i++;
                a++;
        }
        else
            if (mas[i][j - 1] == 0 && j - 1 >= 0 && (i + 1 == n || mas[i + 1][j] != 0)) {
                j--;
                a++;
        }
        else {
            i--;
            a++;
        };
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout.width(4);
            cout << mas[i][j];
        }
        cout << endl;
    }
    return 0;
}
