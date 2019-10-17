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
#include <iomanip>


using namespace std;

int t07_snake() {
    int M, N, x = 1;
    int** matrix;
    cin >> M >> N;

    matrix = new int*[M];
    for (int i = 0; i < M; i++) {
        matrix[i] = new int[N];
    }
    for (int i = 0; i < M; i++) {
        if (i%2 == 0){
            for (int j = 0; j < N; j++) {
                matrix[i][j] = x;
                x++;
            }
        } else {
            for (int j = N-1; j >= 0; j--) {
                matrix[i][j] = x;
                x++;
            }
        }
    }
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            cout << setw(4) << matrix[i][j];
        }
        cout << endl;
    }
    return 0;
}
