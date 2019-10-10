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
    int fibb1=0;
    int fibb2=1;
    int fibbn=0;
    int count=2;
    cin >> N;

    while (count <= N) {
        fibbn = fibb1 + fibb2;
        if ((count % 2) == 0) fibb1 += fibb2;
        if ((count % 2) == 1) fibb2 += fibb1;
        ++count;
    }
    if (N == 1) fibbn++;
    cout << fibbn;
};