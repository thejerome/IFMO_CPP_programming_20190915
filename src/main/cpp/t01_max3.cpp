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

int t01_max3()
    {
        int x1, x2, x3, max;
        cin >> x1 >> x2 >> x3;
        max = x1;
        if (x2 > max)
            {
            max = x2;
            }
        if (x3 > max)
            {
                max = x3;
            }
        cout << max;
        return 0;
    };