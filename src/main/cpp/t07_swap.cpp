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
    for (int i = 0; i < n; i += 2)
    {
        if (i == n - 1){
            break;
        }
        else if (i == n - 2)
        {
            long tmp = znacheniya[i + 1];
            znacheniya[i + 1] = znacheniya[i];
            znacheniya[i] = tmp;
            break;
        }
        
        long tmp = znacheniya[i + 1];
        znacheniya[i + 1] = znacheniya[i];
        znacheniya[i] = tmp;
    }
    for(const auto& i : znacheniya){
        cout << i << ' ';
    }
    return 0;
}
