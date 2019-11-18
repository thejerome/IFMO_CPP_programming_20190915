//Напишите функцию min(a, b), вычисляющую минимум двух чисел. 
// Затем напишите функцию min4(a, b, c, d), вычисляющую минимум 4 чисел с помощью функции min. 
// Считайте четыре целых числа и выведите их минимум.
//Формат входных данных
//        Вводятся четыре целых числа.
//Формат выходных данных
//        Выведите ответ на задачу.
//Sample Input:
//
//4
//5
//6
//7
//Sample Output:
//
//4

#include "t01_min.h"
#include <iostream>


using namespace std;

//function min 
double min(double a, double b){
    if (a>b) {
        return b;
    } else {
        return a;
    }
}
//function min4
double min4(double a, double b, double c, double d){
    a = min(a,b);
    b = min(c, d);
    return min(a,b);
}
int t01_min() {
    double a=0, b=0, c=0, d=0;
    cin >>a >>b >>c >>d;
    cout <<min4(a,b,c,d);
    return 0;
}
