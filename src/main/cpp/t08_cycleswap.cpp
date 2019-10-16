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
    int num = 0, t1, t2;
    cin >> num;
    int *arr = new int[num];
    for (int i = 0; i < num; i++) {
        cin >> arr[i];
    }
    t1 = arr[0];
    arr[0] = arr[num-1];
    for (int i = 1; i < num; i = i+2) {
        t2 = arr[i];
        arr[i] = t1;
        t1 = arr[i+1];
        arr[i+1] = t2;
    }
    for (int i = 0; i < num; i++) {
        cout << arr[i] << " ";
    }
    delete [] arr;
    return 0;
}
