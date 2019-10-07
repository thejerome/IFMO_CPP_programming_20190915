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

    int first=0;
    int second=0;
    int third=0;
    int answer=0;
    cin >> first >> second >> third;

    if (first == second) {
        ++answer;
    }
    if (second == third) {
        ++answer;
    }
    if (first == third) {
        ++answer;
    }
    if (answer == 1) {
        cout << ++answer;
    }
    else cout << answer;
};