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
    int S =1,N, a=1, x=1,y=0;
    cin >> N;
    while (a<N && N!=0) {
        int tmp=0;
        S=x+y;
        tmp=y;
        y=x;
        x=x+tmp;
        a++;
        }
    if (N>=1)
        cout << S;
    else
        cout << 0;

};