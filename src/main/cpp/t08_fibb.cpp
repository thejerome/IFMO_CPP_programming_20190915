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
    int n=0;
    int n1=0;
    int n2=1;
    int t=0;

    cin>>n;

    for( int i=2; i<=n; i++ )
    {
        t= n1+n2;
        n1=n2;
        n2=t;
    }
    if (n==0)
        cout<<0;
    else
        cout<<n2;

};