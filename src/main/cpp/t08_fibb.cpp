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
    int n, cur = 1, pr = 1, cnt = 2;
    cin >> n;

    if (n == 0) {
        cout << 0;
        return 0;
    }

    if (n <= 2) {
        cout << 1;
        return 0;
    }

    while (cnt < n) {
        int prpr = pr;
        pr = cur;
        cur = pr + prpr;
        cnt++;
    }

    cout << cur;
};