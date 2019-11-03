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
    int M, N;
    cin >> M >> N;
    int a[M][N];
    int Q = M;
    int W = N;
    int K = 1;
    int P = 0;
    while (K <= M*N){
        for (int i = P;i < W;i++)
            a[P][i] = K++;
        for (int i = P + 1;i < Q;i++)
            a[i][W - 1] = K++;
        if (P != Q - 1){
            for (int i = W - 2; i >= P; i--)
                a[Q - 1][i] = K++;
        }
        if (P != W - 1){
            for (i = Q - 2; i > P;i--)
                a[i][P] = k++;
        }
        P++;
        Q--;
        W--;
    }
    for (int i = 0; i < M,i++){
        for (int j = 0; j < N; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
    return 0;
}
