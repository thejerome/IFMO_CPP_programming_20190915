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
int n, x1 = 0, x2 = 1, x3 = 0;
cin >> n;
if(n == 0)cout << x1;
if(n == 1)cout << x2;
if(n > 1)
{
    while(--n > 0)
    {
        x3 = x1 + x2;
        x1 = x2;
        x2 = x3;
    }
    cout << x3;
}
return 0;
};