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
    int M, N, x = 1, j;
    int** matrix;
    cin >> M >> N;

    matrix = new int*[M];
    for (int i = 0; i < M; i++) {
        matrix[i] = new int[N];
    }
    for (int i = 0; i < M; i++) {
        if (i%2 == 0){
            for (j = 0; j < N; j=j+2) {
                matrix[i][j] = x;
                matrix[i][j+1] = 0;
                x++;
            }
        }
        else {
            for (j = 0; j < N; j=j+2) {
                matrix[i][j] = 0;
                matrix[i][j+1] = x;
                x++;
            }
            if (matrix[i][N-1] == 0){
                x--;
            }
        }
    }
    for (int i = 0; i < M; i++) {
        for (j = 0; j < N; j++) {
            cout << setw(4) << matrix[i][j];
        }
        cout << endl;
    }
    return 0;
}
