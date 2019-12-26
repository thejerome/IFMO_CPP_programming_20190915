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
    int N=0, M=0,x=0, y=0;
    cin >> N >> M;
    int arr[N][M];
    for (int i = 0;i<N; i++) {
        for (int j = 0; j < M; j++)
            arr[i][j]=0;
    }

    int i = 0, j = 0;
    while (M*N>x) {
        arr[i][j] = ++x;

        if (((i-y)==0) and ((j+1)<(M-y)))
            j++;
        else if ((j+y)==(M-1) and ((1+i)<N-y))
            i++;
        else if (y <= j-1  and i+y==N-1)
            j--;
        else if(--i==y+1) y++;

    }

    for (int i = 0;i<N; i++) {
        for (int j = 0; j < M; j++) {
            cout << arr[i][j] << endl;
            cout.width(4);
        }
    }
    return 0;
}
