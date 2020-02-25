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
cin >> a >> b >> c;
if (a<=b) 
    if (b<=c) cout << a << ' ' << b << ' ' << c;
    else if (b>=c) cout << a << ' ' << c << ' ' << b;
        else cout << c << ' ' << a << ' ' << b;
else 
    if (a<=c) cout << b << ' ' << c << ' ' << a;
    else if (c<=b) cout << c << ' ' << b << ' ' << a;
        else cout << b << ' ' << a << ' ' << c;  
return 0;
};