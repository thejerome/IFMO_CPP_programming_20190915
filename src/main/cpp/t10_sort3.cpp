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
    int a = 0, b = 0, c = 0, m = 0;
    cin >> a >> b >> c;
    if (a > b) {
        m = b;
        b = a;
        a = m;
    }
    if (b > c) {
        m = c;
        c = b;
        b = m;
    }
    if (a > b) {
        m = b;
        b = a;
        a = m;
    }
    cout << a << " " << b << " " << c;
    return 0;
};