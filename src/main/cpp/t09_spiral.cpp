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
    int M, N, x = 1, ch = 0;
    int** matrix;
    cin >> M >> N;

    matrix = new int*[M];
    for (int i = 0; i < M; i++) {
        matrix[i] = new int[N];
    }
    for (int i = 0; i <M; i++) {
        for (int j = 0; j < N; j++) {
            matrix[i][j] = 0;
        }
    }
    while (x <= N*M) {
        for (int i = 0+ch; i < 1+ch; i++) {
            for (int j = 0+ch; j < N-ch; j++) {
                matrix[i][j] = x;
                x++;
            }
        }
        if (x >= N*M){
            break;
        }
        for (int i = 1+ch; i < M-ch; i++) {
            for (int j = N-1-ch; j < N-ch; j++){
                matrix[i][j] = x;
                x++;
            }
        }
        if (x >= N*M){
            break;
        }
        for (int i = M-1-ch; i < M-ch; i++) {
            for (int j = N-2-ch; j >= 0+ch; j--){
                matrix[i][j] = x;
                x++;
            }
        }
        if (x >= N*M){
            break;
        }
        for (int i = M-2-ch; i >= 1+ch; i--) {
            for (int j = 0+ch; j < 1+ch; j++){
                matrix[i][j] = x;
                x++;
            }
        }
        ch++;
    }

    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            cout << setw(4 ) << matrix[i][j];
        }
        cout << endl;
    }
    return 0;
}
