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
int n, a = 0, b = 1, c=0;
cin >> n;
if (n > 1)
{
    n +=1;
    while (n > 0)
    {
        n+=-1;
        c = a+b;
        a=b;
        b=c;
    }
cout << c;
}
if (n == a) cout << a;
if (n == 1) cout << b;
return 0;
};