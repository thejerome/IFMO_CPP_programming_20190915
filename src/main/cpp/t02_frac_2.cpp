//Дано положительное действительное число X. Выведите его первую цифру после десятичной точки.
//Формат входных данных
//        Вводится положительное действительное число.
//Формат выходных данных
//        Выведите ответ на задачу.
//Sample Input:
//
//1.79
//Sample Output:
//
//7

#include "t02_frac_2.h"
#include <iostream>
#include <cmath>
#include <iomanip>


using namespace std;

int t02_frac_2() {
    double x =0;
    cin >>x;
    double b =  (x - trunc(x)) *10;
    double c = trunc(b);
    cout  <<c;
    return 0;
};