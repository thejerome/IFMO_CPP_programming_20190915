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
    int n, m;
    cin >> n >> m;
    int a[100][100];

    
    for (int k = 0; k < n; k++) {
        for (int b = 0; b < m; b++) {
            cin >> a[k][b];
        }
    }
    int i,j, c=0;
    cin >> i >> j;
    for (int k = 0; k < n; k++) {
        c = a[k][i];
        a[k][i] = a[k][j];
        a[k][j] = c;
    }   
    for (int k = 0; k < n; k++) {
        for (int b = 0; b < m; b++) {
            cout << a[k][b] << ' ';
        }
        cout << endl;
    }    
    return 0;
}
