//По данным числам n и m заполните двумерный массив размером n×m числами от 1 до n×m “змейкой”,
// как показано в примере.
//
//Формат входных данных
//        Вводятся два числа n и m, каждое из которых не превышает 30.
//Формат выходных данных
//        Выведите полученный массив, отводя на вывод каждого элемента ровно 4 символа.
//
//Sample Input:
//
//3 5
//Sample Output:
//
//   1   2   3   4   5
//  10   9   8   7   6
//  11  12  13  14  15

#include "t07_snake.h"
#include <iostream>


using namespace std;

int t07_snake() {
    int N;
    int a;
    cin >> N >> a;
    int v[199][199] ;
    int l = 1;
    for(int i = 0; i < N; i++)
    {
        if( i % 2 == 0 )
            for( int j = 0; j < a; j++ )
            {
                v[i][j] = l ;
                l = l + 1 ;
            }
        else
            for( int j = a - 1 ; j >= 0; j-- )
            {
                v[i][j] = l;
                l = l + 1;
            }
    }

    for( int i = 0 ; i < N ; i++ )
    {
        for( int j = 0 ; j < a ; j++ ) {
            cout << setw(4) << v[i][j];
        }
        cout << endl;
    }
    return 0;
}
