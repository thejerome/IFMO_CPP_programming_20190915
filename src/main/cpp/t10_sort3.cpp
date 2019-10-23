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
int a , b , c , ch ;
cin >> a >> b >> c ;
if ( a > b )
{
ch = b ;
b = a ;
a = ch ;
}
if ( a > c )
{
ch = c ;
c = a ;
a = ch ;
}
if ( b > c )
{
ch = c ;
c = b ;
b = ch ;
}
cout << a << ' ' << b << ' ' << c ;
};

