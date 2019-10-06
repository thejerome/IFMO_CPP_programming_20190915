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

int n,sum,br=2,first=0,second=1;
cin>>n;

while(br<=n)
{
  sum=first+second;
  first=second;
  second=sum;

  br++;
}
if(n==0)cout<<"0";
else if(n==1)cout<<"1";
else cout<<sum;
};
