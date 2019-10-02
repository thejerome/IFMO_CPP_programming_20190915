//Определите сумму всех элементов последовательности, завершающейся числом 0.
//
//Формат входных данных
//        Вводится последовательность целых чисел, оканчивающаяся числом 0 (само число 0 в последовательность не входит, а служит как признак ее окончания.
//Формат выходных данных
//        Выведите ответ на задачу.
//Sample Input:
//
//3
//6
//8
//0
//Sample Output:
//
//17

#include "t04_sum.h"
#include <iostream>

using namespace std;

int t04_sum() {
    int sum = 0, x = 1;
    while (x != 0) {
        cin >> x;
        sum = sum + x;
    }
    cout << sum;
  return 0;
};
