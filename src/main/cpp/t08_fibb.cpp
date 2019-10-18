//Последовательность Фибоначчи определяется так:
//
//F(0) = 0, F(1) = 1, …, F(n) = F(n−1) + F(n−2).
//
//По данному числу N определите N-е число Фибоначчи F(N).
//
//Формат входных данных
//        Вводится натуральное число N.
//Формат выходных данных
//        Выведите ответ на задачу.
//Sample Input:
//
//6
//Sample Output:
//
//8

#include "t08_fibb.h"
#include <iostream>

using namespace std;

int t08_fibb() {
    int n, ff0, i = 0, f = 1, f0 = 0;
    cin >> n;
    while (i < n) {
        ff0 = f;
        f = f0 + f;
        f0 = ff0;
        i = i + 1;
    }
    cout << f;
  return 0;
};