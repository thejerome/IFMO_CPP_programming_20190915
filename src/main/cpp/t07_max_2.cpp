//Последовательность состоит из натуральных чисел и завершается числом 0. Определите значение второго по величине элемента в этой последовательности, то есть элемента, который будет наибольшим, если из последовательности удалить наибольший элемент.
//
//Формат входных данных
//        Вводится последовательность целых чисел, оканчивающаяся числом 0 (само число 0 в последовательность не входит, а служит как признак ее окончания).
//Формат выходных данных
//        Выведите ответ на задачу.
//Sample Input 1:
//
//4
//4
//2
//3
//0
//Sample Output 1:
//
//4
//Sample Input 2:
//
//2
//1
//0
//Sample Output 2:
//
//1

#include "t07_max_2.h"
#include <iostream>

using namespace std;

int t07_max_2() {
  //codacy doesn't see the pull request
    int max = 0;
    int max1 = 0;
    int a = 1;
    while (a != 0)
    {
        cin >> a;
        if ((a >= max1) and (a < max))
        {
            max1 = a;
        }
        if (a >= max)
        {
            max1 = max;
            max = a;
        }


    }
    cout << max1;
    return 0;
};
