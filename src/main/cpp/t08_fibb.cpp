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
    int n, m1, m2, k, t;
    cin >> n;
    t = 0;
    k = 2;
    m1 = 1;
    m2 = 1;
    if (n == 0){
        cout << 0;
    }else if (n == 1){
        cout << 1;
    }else{
        while (k != n){
            t = m1 + m2;
            m1 = m2;
            m2 = t;
            k += 1;
        }
        cout << m2;
    }
    return 0;
};
