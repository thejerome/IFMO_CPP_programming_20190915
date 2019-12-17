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
    int b = 0, po = 0, n, m, p = 0, q = 0;
    int vec[100][100];
    cin >> n >> m;

    while (n * m > b){
        b++;
        vec[p][q] = b;

        if (p - po == 0 && q < m - po - 1)
            q++;
        else if (q + po + 1 == m && p < n - po - 1)
            p++;
        else if (p + po + 1 == n && q >= po + 1)
            q--;
        else {
            if (p == po + 2)
                po++;
            p--;
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++)
            cout << setw(4) << vec[i][j];

        cout << endl;
    }

    return 0;
}
