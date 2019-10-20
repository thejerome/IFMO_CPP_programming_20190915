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
    int a, b, c, i, n;
      a = 0;
      b = 1;
      c = 0;
      i = 1;
      n = 0;
    cin >> n;
    if (n == 0)
    {
        cout << 0 << endl;
    }
    else if (n == 1 || n == 2)
    {
        cout << 1 << endl;
    }
    else
    {
        while (i < n)
        {
            c = a;
            a = b;
            b = b + c;
            i++;
        }
        cout << b << endl;
    }
    return 0;
};