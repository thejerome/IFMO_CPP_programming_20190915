//Дано целое число, не меньшее 2. Выведите его наименьший натуральный делитель, отличный от 1.
//
//Формат входных данных
//        Вводится целое положительное число.
//
//Формат выходных данных
//        Выведите ответ на задачу.
//
//Sample Input:
//
//15
//Sample Output:
//
//3

#include "t02_divisor.h"
#include <iostream>

using namespace std;

int t02_divisor() {
  
    int n, i = 3;
    bool f = true;
    cin >> n;

    if (n % 2 == 0) {
        f = false;
        i = 2;
    }
    while (i * i <= n and f)
        if (n % i == 0)
            f = false;
        else
            i += 2;

    if (f)
        cout << n;
    else
        cout << i;
};
