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
    int N=0, a=1, b=1, c = 2;
    cin >> N;
    if (N == 1)
    {
        cout << a;
    }
    if (N == 2)
    {
        cout << b;
    }
    while (c < N)
    {
        a = a+b;
        c++;
        if (N == c)
        {
            cout << a;
            break;
        }
        b = b+a;
        c++;
        if (N == c)
        {
            cout << b;
            break;
        }
    }
};
