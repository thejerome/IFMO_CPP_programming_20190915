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

    int m, n, m0, n0, c, k;
    int a[100][100];

    cin >> n >> m;
    n0 = n;
    m0 = m;
    c = 0;
    k = 0;

    while(k < m0*n0){

        for(int i = c; i < m; i++) {
            a[c][i] = k + 1;
            k++;
        }

        for(int i = c; i < n-1; i++) {
            a[i+1][m - 1] = k + 1;
            k++;
        }

        if ( c != n-1) {
            for (int i = m - 1; i > c; i--){
                a[n - 1][i-1] = k + 1;
                k++;
            }
        }

        if(c != m-1){
            for(int i = n-2; i > c; i--) {
                a[i][c] = k + 1;
                k++;
            }
        }

        c++;
        n--;
        m--;
    }

    for(int i = 0; i < n0; i++){
        for(int j = 0; j < m0; j++) {
            if (a[i][j] < 10)
                cout << "   ";
            if (9 < a[i][j] && a[i][j] < 100)
                cout << "  ";
            if (99 < a[i][j] && a[i][j] < 1000)
                cout << " ";
            cout << a[i][j];
        }
        cout << endl;
    }
    return 0;
}
