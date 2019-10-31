//Циклически сдвиньте элементы списка вправо (A[0] переходит на место A[1], A[1] на место A[2], ..., последний элемент переходит на место A[0]).
//Формат входных данных
//
//        В первой строке вводится количество элементов в массиве. Во второй строке вводятся элементы массива.
//Формат выходных данных
//        Выведите ответ на задачу.
//Sample Input:
//
//5
//1 2 3 4 5
//Sample Output:
//
//5 1 2 3 4

#include "t08_cycleswap.h"
#include <iostream>


using namespace std;

int t08_cycleswap() {
    int n, t = 0, m = 0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    t = a[n-1];
    for (m = n; m != 0; m--) a[m] = a[m-1];
    a[0] = t;
    for (int i = 0; i < n; i++) cout << a[i] << " ";
    return (0);
}
