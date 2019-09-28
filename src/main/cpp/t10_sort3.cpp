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
    int s = 0, m = 0, b = 0;
    cin >> s >> m >> b;
    if (s > m) {
        m += s;
        s = m - s;
        m -= s;
    }
    if (m > b) {
        b += m;
        m = b - m;
        b -= m;
    }
    if (s > m) {
        m += s;
        s = m - s;
        m -= s;
    }
    cout << s << ' ' << m << ' ' << b;
};
