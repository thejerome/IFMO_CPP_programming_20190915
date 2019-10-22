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
    int size=1;
    int k=1;
    cin >> size;
    int a[size]{};
    for (int i=0; i<size; i++) {
        cin >> a[i];
    }
    for (int i=1; i<size; i++) {
        if (a[i-1]<a[i]) {
            k++;
        }
    }
    cout << k;
}
