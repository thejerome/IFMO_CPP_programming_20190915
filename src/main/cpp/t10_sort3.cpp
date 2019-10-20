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
    int value1, value2, value3, tmp,tmp_m,tmp_l;
    cin >> (value1) >> (value2) >> (value3);
    if ((value1>=value2) && (value1>=value3)) {
        tmp = value1;
        tmp_m = value2;
        tmp_l = value3;
    }
    if ((value2>=value1) && (value2>=value3)) {
        tmp = value2;
        tmp_m = value1;
        tmp_l = value3;
    }
    if ((value3>=value1) && (value3>=value2)) {
        tmp = value3;
        tmp_m = value1;
        tmp_l = value2;
    }
    if (tmp_m>tmp_l)
        cout << tmp_l << " " << tmp_m << " " << tmp;
    else
        cout << tmp_m << " " << tmp_l << " " << tmp;

};