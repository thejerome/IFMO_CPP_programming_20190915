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
 int a, b, s , d, z ;
    b = 0;
    s = 0;
    d = 1;
    z = 0;
    cin >> a;
    while (a>b) {
        s = s + d;
        d = z;
        z = s;
        b++;
    }
    cout << s ;
    return 0;
};
