//По данному целому числу N распечатайте все квадраты натуральных чисел, не превосходящие N, в порядке возрастания.
//
//Формат входных данных
//        Вводится натуральное число.
//
//Формат выходных данных
//        Выведите ответ на задачу.
//
//Sample Input:
//
//50
//Sample Output:
//
//1 4 9 16 25 36 49

#include "t01_quad.h"
#include <iostream>
#include <cmath>

using namespace std;

int t01_quad() {
    double a = 0, i = 1;
    cin >> a;
    while (i <= a)
    {
        double b = (sqrt(i))/int(sqrt(i));
        if (b == 1){
            cout << i << endl;
        }
        ++i;
    }
    
    return 0;
}