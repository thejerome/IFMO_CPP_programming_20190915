//Даны три целых числа. Найдите наибольшее из них (программа должна вывести ровно одно целое число). Под наибольшим в этой задаче понимается число, которое не меньше, чем любое другое.
//Формат входных данных
//        Вводятся три числа.
//Формат выходных данных
//        Выведите ответ на задачу.
//Sample Input:
//
//1
//2
//3
//Sample Output:
//
//3

#include "t01_max3.h"
#include <iostream>

using namespace std;

int t01_max3() {
    int a,b,c,max;
    cin >> a >> b >> c;
    max = a;
    if (max < a) {
        max = a;
    };
    if (max < b) {
        max = b;
    };
    if (max < c) {
        max = c;
    };
    cout << max;
    return 0;
};