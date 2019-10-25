//Определите среднее значение всех элементов последовательности, завершающейся числом 0.
//
//Формат входных данных
//
//        Вводится последовательность целых чисел, оканчивающаяся числом 0 (само число 0 в последовательность не входит, а служит как признак ее окончания).
//Формат выходных данных
//        Выведите ответ на задачу. Необходимую точность вычислите по тестам.
//Sample Input:
//
//1
//7
//9
//0
//Sample Output:
//
//5.66666666667

#include "t05_ave.h"
#include <iostream>
#include <iomanip>

using namespace std;

int t05_ave() {
      int n, count;
    double ave, sum;
    sum = 0;
    count = 0;
    cin >> n;
    while (n != 0){
        sum += n;
        count ++;
        cin >> n;
    };
    ave = sum / count;
    cout.setf(ios::fixed);
    cout.precision(11);
    cout << ave;


};
