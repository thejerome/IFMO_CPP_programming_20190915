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
  int N=0;
    int fib1=0;
    int fib2=1;
    int fibN=0;
    int Q = 2;
    cin >> N;

    while (Q <= N) {
        fibN = fib1 + fib2;
        if ((Q % 2) == 0) fib1 += fib2;
        if ((Q % 2) == 1) fib2 += fib1;
        ++Q;
    }
    if (N == 1) fibN++;
    cout << fibN << endl;
    return 0;
};
