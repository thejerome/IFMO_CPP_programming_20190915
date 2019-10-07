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

    int first=0;
    int second=0;
    int third=0;
    int max=0;

    cin >> first >> second >> third;

    if (first > second) {
        max = first;
    } else {
        max = second;}
    if (max > third) {
      max = max;
    } else { max = third;
        }
    cout << max;
};