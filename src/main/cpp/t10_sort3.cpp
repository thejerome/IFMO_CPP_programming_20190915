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
    int a,b,c;
    cin>>a>>b>>c;
    int swap;

    if(a>b) {swap=b;b=a;a=swap;}
    if(b>c) {swap=c;c=b;b=swap;}
    if(a>b) {swap=b;b=a;a=swap;}
    cout<<a<<" "<<b<<" "<<c;

};
