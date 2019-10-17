//В кинотеатре n рядов по m мест в каждом (n и m не превосходят 20). 
// В двумерном массиве хранится информация о проданных билетах, число 1 означает, 
// что билет на данное место уже продан, число 0 означает, что место свободно. 
// Поступил запрос на продажу k билетов на соседние места в одном ряду. 
// Определите, можно ли выполнить такой запрос.
//
//Формат входных данных
//        Программа получает на вход числа n и m. Далее идет n строк, содержащих m чисел (0 или 1), разделенных пробелами. Затем дано число k.
//Формат выходных данных
//        Программа должна вывести номер ряда, в котором есть k подряд идущих свободных мест. 
// Если таких рядов несколько, то выведите номер наименьшего подходящего ряда. 
// Если подходящего ряда нет, выведите число 0.
//
//Sample Input:
//
//3 4
//0 1 0 1
//1 0 0 1
//1 1 1 1
//2
//Sample Output:
//
//2

#include "t06_cinema.h"
#include <iostream>


using namespace std;

int t06_cinema() {
    int M, N, k, count = 1, num = 21;
    int** matrix;
    cin >> M >> N;
    matrix = new int*[M];
    for (int i = 0; i < M; i++) {
        matrix[i] = new int[N];
    }
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            cin >> matrix[i][j];
        }
    }
    cin >> k;
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N-1; j++) {
            if ((matrix[i][j] == 0) && (matrix[i][j+1] == 0)){
                count++;
            }
            if ((count == k) && (i+1 < num)){
                num = i+1;
            }
        }
        count = 1;
    }
    if (num == 21){
        num = 0;
    }
    cout << num;
    return 0;
}
