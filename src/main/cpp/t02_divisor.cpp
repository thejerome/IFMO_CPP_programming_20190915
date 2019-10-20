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
         int num, a;
        cin >> num;
        a = 2;
        while (a<=num) {
            if (num%a == 0) {
                cout << a;
                break;
            };
            a++;
        };
     return 0;
};
