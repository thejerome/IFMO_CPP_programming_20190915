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
#include <vector>

using namespace std;

int t08_cycleswap() {
  int n, i, temp = 0;
    cin >> n;
    vector <int> a(n);
    for ( i = 0; i < n; i++) {
     cin >> a[i];   
    }
    temp = a[n-1];
    for ( i = n-1; i > 0; i--) {
       a[i] = a[i-1]; 
    }
     a[0] = temp;
     for ( i = 0; i < n; i++) {
     cout << a[i] << " ";   
    }
  return 0;
}
