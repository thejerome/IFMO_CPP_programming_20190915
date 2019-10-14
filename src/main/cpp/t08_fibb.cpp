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
int N,i, s0,s1, s2;
cin >> N;
s0=0;
s1=1;
s2=0;
i=2;
while (i <= N){
    s2 = s1+s0;
    s0=s1;
    s1=s2;
    i++;};
if (N=0) cout << 0;
    else cout << s1;
};