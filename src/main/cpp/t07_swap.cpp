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
    int n,i,k,middle;
    cin >> n;
    int a[1000];
    k = n-n%2;
    for (i = 0; i < k; i = i+2) {
        cin >> a[i] >> a[i+1];
        middle = a[i];
        a[i] = a[i+1];
        a[i+1] = middle;
    }
    if (n%2 != 0) {
        cin >> a[i];
        middle = a[i];
    }
    i = 0;
    while (i < k){
        cout << a[i] << ' ';
        i++;
    }
    if (n%2 != 0)
        cout << middle;
    return (0);

}
