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
  int N,predexter = 0,dexter = 0;
     cin >> N;
    while (  N != 0 ) { 
        if ( N >= dexter ) { 
            predexter = dexter;
            dexter = N;
        }
        if ( N  > predexter && N < dexter  ) {
            predexter = N;
        }
        cin >> N;
    }
    cout << predexter;

};
