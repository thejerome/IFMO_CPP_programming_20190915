//Дано три числа. Упорядочите их в порядке неубывания.
//
//Формат входных данных
//        Вводятся три числа.
//Формат выходных данных
//        Выведите ответ на задачу.
//Sample Input:
//
//1
//2
//1
//Sample Output:
//
//1 1 2

#include "t10_sort3.h"
#include <iostream>

using namespace std;

int t10_sort3() {
    int a=0;
    int b=0;
    int c=0;
    int t=0;

    cin>>a>>b>>c;

    if ( a>b )
    {
        t=b;
        b=a;
        a=t;
    }
    if ( b>c )
    {
        t=c;
        c=b;
        b=t;
    }
    if ( a>b )
    {
        t=b;
        b=a;
        a=t;
    }
    cout<<a<<" "<<b<<" "<<c;
};