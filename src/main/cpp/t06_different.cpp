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
    int n,counter,k;
    bool f;
    cin >> n;
    k = 1;
    int a[n];
    int b[k];
    counter = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    };
    for (int i = 0; i < n; i++) {
        f = true;
        for (int j = 0; j < k; j++) {
            if (a[i] == b[j]) {
                f = false;
            };
        };
        if (f == true) {
            k++;
            b[k] = a[i];
        };
    };
    cout << (k-1);
    return 0;
}
