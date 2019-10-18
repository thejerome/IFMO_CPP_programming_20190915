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
    int n = 0;
    int i = 1;
    int f1 = 0;
    int f2 = 1;
    int sum = 0;
    cin >> n;
    while (i++ < n)
    {
        sum = f1 + f2;
        f1 = f2;
        f2 = sum;
    }
    cout <<((n) ? f2 : 0);

};
