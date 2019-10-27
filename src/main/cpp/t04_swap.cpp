//Дан двумерный массив и два числа: i и j. Поменяйте в массиве столбцы с номерами i и j
//        Формат входных данных
//Программа получает на вход размеры массива n и m, не превосходящие 100, 
// затем элементы массива, затем числа i и j.
//Формат выходных данных
//        Выведите результат.
//
//Sample Input:
//
//3 4
//11 12 13 14
//21 22 23 24
//31 32 33 34
//0 1
//Sample Output:
//
//12 11 13 14
//22 21 23 24
//32 31 33 34

#include "t04_swap.h"
#include <iostream>


using namespace std;

int t04_swap() {

    int n=0;
    int m=0;
    cin >> m >> n;
    int a[m][n];

    for (int i1 = 0;  i1 < m; i1++) {
        for (int j1 = 0; j1 < n; j1++) {

            cin >> a[i1][j1];

        }
    }

    int i=0;
    int j=0;
    cin >> i >> j;

    for (int k = 0; k < m; k++) {
        int coloumn [m];

        coloumn [k] = a [k][i];
        a[k][i] = a[k][j];
        a[k][j] = coloumn [k];
    }

    for (int i1 = 0; i1 < m; i1++) {
        for (int j1 = 0; j1 < n; j1++) {

            cout << a[i1][j1] << ' ';

        }
        cout << endl;
    }
    return 0;
}
