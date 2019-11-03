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
    int n;
    int m;
    cin >> n >> m;
    int arr[n][m];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            arr[i][j] = 0;
    int x = 0;
    int y = 0;
    int e[2];
    e[0] = 0;
    e[1] = 1;
    for (int i = 0; i < n * m; i++)
    {
        arr[x][y] = i + 1;
        if ((x + e[0] >= n) || (x + e[0] < 0) || (y + e[1] >= m) || (y + e[1] < 0) || (arr[ x + e[0] ][ y + e[1] ] != 0))
        {
            int c = e[0];
            e[0] = e[1];
            e[1] = -c;
        }
        x += e[0];
        y += e[1];
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++)
            cout << setw(4) << arr[i][j] << fixed;
        //cout << endl;
    }
    return 0;
}
