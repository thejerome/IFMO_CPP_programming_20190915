//Дано действительное положительное число a и целоe число n.
//
//Вычислите an. Решение оформите в виде рекурсивной функции power(a, n).
//Не используйте циклы.
//
//Формат входных данных
//        Вводится действительное положительное число a и целоe число n.
//Формат выходных данных
//        Выведите ответ на задачу.
//Sample Input 1:
//
//2
//1
//Sample Output 1:
//
//2
//Sample Input 2:
//
//2
//2
//Sample Output 2:
//
//4

#include <iostream>
#include <cmath>

using namespace std;
#include<iostream>
#include<cmath>
using namespace std;
double power(double a, int n)
{
  if(n>0){
  if(n==1)return a;
  else return a*power(a,n-1);}
  else if(n<0){
    if(n==-1)return a;
    else return a*power(a,n+1);
  }
  else return 1;
}

int t05_power() {

  int n;
  double a;
  cin>>a>>n;
  if(n<0)cout<<1/power(a,n);
  else cout<<power(a,n);

    return 0;
}
