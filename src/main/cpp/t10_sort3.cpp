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
    int a, b, c, t;
    t = 0;
    cin >> a >> b >> c;
    if (b>a){
        t = a;
        a = b;
        b = t;
    }
    if (c>a){
        t = a;
        a = c;
        c = t;
    }
    if (c>b){
        t = c;
        c = b;
        b = t;
    }
    cout << c << ' ' << b << ' ' << a;
    return 0;
};
