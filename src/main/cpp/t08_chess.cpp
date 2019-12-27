//Даны числа n и m. Заполните массив размером n × m в шахматном порядке: 
// клетки одного цвета заполнены нулями, 
// а другого цвета - заполнены числами натурального ряда сверху вниз, слева направо. 
// В левом верхнем углу записано число 1.
//Формат входных данных
//        Вводятся два числа n и m, не превышающие 100.
//
//Формат выходных данных
//        Выведите полученный массив, отводя на вывод каждого элемента ровно 4 символа.
//
//Sample Input:
//
//3 5
//Sample Output:
//
//   1   0   2   0   3
//   0   4   0   5   0
//   6   0   7   0   8

#include "t08_chess.h"
#include <iostream>
#include <iomanip>

using namespace std;

int t08_chess() {
    int N ;
    int x ;
    cin >> N ;
    cin >> x ;
    int v[N][x] ;
    int num = 1;
    for( int i = 0; i < N; i++ )
    {
        if( i % 2 == 0 )
            for( int j = 0 ; j < x ; j++ )
            {
                if ( j % 2 == 0 )
                {
                    v[i][j] = num ;
                    num++ ;
                }
                else
                    v[i][j] = 0;
            }
        else
            for ( int j = 0 ; j < x ; j++ )
            {
                if ( j % 2 == 1 )
                {
                    v[i][j] = num;
                    num++;
                }
                else {
                    v[i][j] = 0;
                }
            }
    }

    for ( int i = 0; i < N; i++ )
    {
        for ( int j = 0; j < x; j++ )
            cout << setw(4) << v[i][j];
        cout << endl;
    }
    return 0;
}
