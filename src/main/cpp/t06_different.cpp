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
    int n, i, k=0;
    cin >> n;
    int a[n];
    for (i=0;i<n;i++)
        cin >> a[i];
    for (i=0;i<n;i++)
        if (a[i]!=a[i-1])
            k=k+1;
        cout << k;
    return 0;
}
