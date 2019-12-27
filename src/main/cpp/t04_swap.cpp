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
    int N ;
    int a ;
    int b ;
    int c ;
    cin >> N >> b ;
    int v[199][199] ;
    for ( int i = 0 ; i < N ; ++i ) {
        for ( int j = 0 ; j < b ; ++j ) {
            cin >> v[i][j] ;
        }
    }
    cin >> a >> c ;
    for (int i = 0 ; i < N ; ++i) {
        int t = 0 ;
        t = v[i][a] ;
        v[i][a] = v[i][c] ;
        v[i][c] = t ;
    }
    for ( int i = 0 ; i < N ; ++i ) {
        for ( int j = 0 ; j < b ; ++j ) {
            cout << v[i][j] << " " ;
        }
        cout << endl ;
    }
    return 0 ;
}
