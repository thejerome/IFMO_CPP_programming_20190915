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
     int num, a = 3;
    bool b = true;
    cin >> num;

    if (num % 2 == 0) {
        b = false;
        a = 2;
    };

    while (a * a <= num && b){
        if (num % a == 0){
            b = false;
        }
        else{
            a += 2;
        };

    if (b){
        cout << num;
    }
    else{
        cout << a;
    }
    };
};
