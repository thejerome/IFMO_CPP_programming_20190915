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
    int n,i,previous;
    cin >> n;
    int a[1000];
    cin >> a[0];
    previous = a[0];

    for (i = 1; i < n-1; i++) {
        cin >> a[i];
        int middle = a[i];
        a[i] = previous;
        previous = middle;
    }

    cin >> a[n-1];
    cout << a[n-1] << ' ';
    for (i = 1; i < n-1; i++)
        cout << a[i] << ' ';
    cout << previous;

    return (0);

}
