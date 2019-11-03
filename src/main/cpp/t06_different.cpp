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
    int N =0;
    cin >>N;
    double a[N];
    for (int i=0; i < N; i++) {
        cin >> a[i];
    }
    int x = 0;
    for (int i=0; i < N; i++) {
        if (i == 0) {
            x++;
        } else {
            if (a[i] != a[i - 1]) {
                x++;
            }
        }
    }
    cout <<x;
    return 0;
}
