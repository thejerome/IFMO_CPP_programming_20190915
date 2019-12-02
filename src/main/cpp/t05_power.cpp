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

//function power
double power(int,int);
int t05_power() {
int a,n;
    cin>>a>>n;
    cout<<power(a,n);
    return 0;
}
double power(int a,int n)
{
    double x=a;
    if(n==0)
    return 1;
    else
    for(int i=1;i<abs(n);i++)x*=a;
    if(n>0)
    return x;
    else 
    return (1.0/x);
}