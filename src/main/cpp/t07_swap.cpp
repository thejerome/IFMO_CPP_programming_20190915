//Переставьте соседние элементы массива (A[0] c A[1], A[2] c A[3] и т.д.). Если элементов нечетное число, то последний элемент остается на своем месте.
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
//2 1 4 3 5

#include "t07_swap.h"
#include <iostream>


using namespace std;

int t07_swap() {
    int size=1;
    short t;
    cin >> size;
    int a[size]{};
    for (int i=0; i<size; i++) {
        cin >> a[i];
    }
    for (int i=1; i<size; i++) {
        if (size%2!=0 and a[i]==size) {
            break;
        }
        t=a[i-1];
        a[i-1]=a[i];
        a[i]=t;
        i++;
    }
    for (int i=0; i<size; i++) {
        cout << a[i] << " ";
    }
}
