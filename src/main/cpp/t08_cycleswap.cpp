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
    long n = 0;
    cin >> n;
    const long a = n;
    long znacheniya[a];
    for (int i = 0; i < n; i++)
    {
        long zn = 0;
        cin >> zn;
        znacheniya[i] = zn;
    }
    long tmp = 0;
    for (int i = n - 1; i != 0; i--)
    {
        if (i == n - 1){
            tmp = znacheniya[i];
            znacheniya[i] = znacheniya[i - 1];
            continue;
        }
        znacheniya[i] = znacheniya[i - 1];
    }
    znacheniya[0] = tmp;
    for(const auto& i : znacheniya){
        cout << i << ' ';
    }
    return 0;
}
