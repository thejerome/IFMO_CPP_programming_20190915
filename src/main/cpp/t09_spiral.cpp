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
    int a[100][100], n, m, q = 1, w, e;
    cin >> n >> m;
    if (n >= m){
        w = m;
    }
    else {
        w = n;
    }
    if(w % 2 == 1){
        e = w / 2 + 1;
    }
    else e = w / 2;
    for (int i = 0; i < e; i++)
    {
        for (int j = i; j < m - i; j++)
        {
            a[i][j] = q;
            q++;
        }
        for (int j = i + 1; j < n - i; j++)
        {
            a[j][m - i - 1] = q;
            q++;
        }
        for (int j = m - i - 2;  !((w % 2 == 1) && (i == w / 2)) && j > i; j--)
        {
            a[n - i - 1][j] = q;
            q++;
        }
        for (int j = n - i - 1; !((w % 2 == 1) && (i == w / 2)) && j > i; j--)
        {
            a[j][i] = q;
            q++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cout << setw(4) << a[i][j];
        cout << endl;
    }
    return 0;
}
