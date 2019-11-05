//Дан список, упорядоченный по неубыванию элементов в нем. Определите, сколько в нем различных элементов.
//Формат входных данных
//
//        В первой строке вводится количество элементов в массиве. Во второй строке вводятся элементы массива.
//Формат выходных данных
//        Выведите ответ на задачу.
//Sample Input:
//
//6
//1 2 2 3 3 3
//Sample Output:
//
//3

#include "t06_different.h"
#include <iostream>


using namespace std;

int t06_different() {
    int N, K;
    K = 1;
    cin >> N;
    int *mas = new int[N];
    for (int i = 0; i < N; i++) {
        cin >> mas[i];
    }
    for (int i = 1; i < N; i++) {
        if (mas[i] > mas [i - 1])
            K++;
    }
    cout << K;
    delete [] mas;
    return 0;
}
