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
    int s=0, n = 1, a = 1, k = 0, c = 2;
    cin >> s;
    if(s == 0 or s == 1) {cout << s;}
    else {
    while (c!= s) {k = a; a = n;
    n = n + k; c++;
    }
    cout << n;}
};
