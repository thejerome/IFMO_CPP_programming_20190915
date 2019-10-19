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
int N,M,a,b,i;
    cin>>N;
    a=0;
    b=1;
    i=0;
    M=N;
    while(i<M-1){
        N=a+b;
        a=b;
        b=N;
        i++;
    }
    cout<<N<<endl;
    return 0;
};
