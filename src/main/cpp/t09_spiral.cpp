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
    int n = 0, m = 0, stk = 0, step = 1;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++){
            if (n - i - 1 < i)
                stk = n - 1 - i;
            else
                stk = i;
            if (m - j - 1 < stk)
                stk = m - j - 1;
            if (j < stk)
                stk = j;
            for (int k = 0; k < stk; k++)
                step += 2 * (m + n - 4 * k - 2);
        if (i == stk || j == m - stk - 1)
            cout << i + j - 2 * stk + step << ' ';
        else
            cout << 2 * (m + n - 4 * stk - 2) - (i + j - 2 * stk) + step << ' ';
        step = 1;
        }
        cout << endl;
    }
    return 0;
}
