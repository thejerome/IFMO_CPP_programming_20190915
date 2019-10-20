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
 int n, i = 2, a1 = 0, a2 = 1, cur;
  cin >> n;
 
  while (i <= n)
  {
    cur = a1 + a2;
    a1 = a2;
    a2 = cur;
    i++;
  }
  if (n<=1)
    cout<<n;
  else
    cout << cur;
    return 0;
};
