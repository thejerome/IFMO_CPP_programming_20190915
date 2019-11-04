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
    int n = 0;
    cin >> n;
    int arr[n];
    for (int i=0; i<n; i++) {
        cin >> arr[i]; }

    int last = arr[i-1];
    for (int i=n-1; i>0; i-=1) {
        if (i == 0) arr[i] = last;
        else arr[i] = arr[i - 1];
    }
    for (int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
