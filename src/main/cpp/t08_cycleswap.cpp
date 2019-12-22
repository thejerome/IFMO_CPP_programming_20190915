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
    int n, last, temp;
    cin >> n;
    vector <int> a;
    for (int i = 0; i < n; i++){
        cin >> temp;
        a.push_back(temp);
    }
    last = a[n-1];
    for (int i = n-1; i > 0; i--) {
        temp = a[i-1];
        a[i-1] = a[i];
        a[i] = temp;
    }
    a[0] = last;
    for (auto now : a) {
        cout << now << " ";
    }
    return 0;
}
