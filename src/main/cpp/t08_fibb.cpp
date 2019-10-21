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
    int n,x1,x2,count;
    cin >> n;
    count = 1;
    x1 = 0;
    x2 = 1;
    if (n == 0) cout << x1 << endl;
    if (n == 1) cout << x2 << endl;
    while (count < n) {
        count++;
        x = x1 + x2;
        x1 = x2;
        x2 = x;
    };
    return 0;
};