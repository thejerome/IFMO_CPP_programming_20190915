//Даны три целых числа. Определите, сколько среди них совпадающих. Программа должна вывести одно из чисел: 3 (если все совпадают), 2 (если два совпадает) или 0 (если все числа различны).
//
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
//0

#include "t03_equal3.h"
#include <iostream>

using namespace std;

int t03_equal3() {
    int value1, value2, value3, score = 0;
    cin >> (value1) >> (value2) >> (value3);
    if (value1 != value2 && value2 != value3 && value1 != value3)
        score=0;
    if (value1 == value2 || value2 == value3 || value1 == value3)
        score=2;
    if (value1 == value2 && value2 == value3 && value1 == value3)
        score=3;
    cout << score;


};