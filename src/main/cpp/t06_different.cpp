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
    int n,counter;
    cin >> n;
    int a[n];
    for (i = 0; i < (n -1); i++) {
        cin >> a[i];
        if (a[i] != a[i + 1]) {
            counter++;
        };
    };
    cout << counter;
    return 0;
}
