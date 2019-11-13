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
    int n, m, k = 1, l = 0;
    int j = 0, i = 0, b = -1, b1 = 0;
    cin >> n >> m;
    int a[100][100];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            a[i][j] = 0;
        }
    }
    while (l <= n * m) {
        b++;
        b1++;
        for (j = b, i = b; j < m - b; j++)  
        {
            if (a[i][j] == 0) {
                l++;
                a[i][j] = l;
            }
            else {
                break;
            }
        }
        for (j = m - b1, i = b1; i < n - b; i++) 
        {
            if (a[i][j] == 0) {
                l++;
                a[i][j] = l;
            }
            else {
                break;
            }
        }
        for (j = j - 1, i = n - b1; j >= b; j--)
        {
            if (a[i][j] == 0) {
                l++;
                a[i][j] = l;
            }
            else {
                break;
            }
        }
        for (j = j + b1, i = i - b1; i >= b1; i--)
        {
            if (a[i][j] == 0) {
                l++;
                a[i][j] = l;
            }
            else {
                break;
            }
        }
 
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << setw(4) << a[i][j];
        }
        cout << endl;
    }
    
    return 0;
}
