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
    int M, N, t, i, j;
    int** matrix;
    cin >> M >> N;

    matrix = new int*[M];
    for (int b = 0; b < M; b++) {
        matrix[b] = new int[N];
    }
    for (int b = 0; b < M; b++) {
        for (int a = 0; a < N; a++) {
            cin >> matrix[b][a];
        }
    }
    cin >> i >> j;
    cout << endl;
    for (int b = 0; b < M; b++) {
        for (int a = i; a < i+1; a++){
            t = matrix[b][a];
            matrix[b][a] = matrix[b][j];
            matrix[b][j] = t;
        }
    }
    for (int b = 0; b < M; b++) {
        for (int a = 0; a < N; a++) {
            cout << matrix[b][a] << " ";
        }
        cout << endl;
    }
    return 0;
}

