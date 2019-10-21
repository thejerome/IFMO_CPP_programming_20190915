//Даны длины сторон треугольника. Вычислите площадь треугольника.
//Формат входных данных
//        Вводятся три положительных числа.
//Формат выходных данных
//        Выведите ответ на задачу. Точность - 4 знака после запятой.
//Sample Input:
//
//3
//4
//5
//Sample Output:
//
//6.0000

#include "t03_triangle.h"
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int t03_triangle() {
    int a,b,c;
    double h,s,p;
    cin >> a >> b >> c;
    p = (a + b +c) / 2;
    s = sqrt(p*(p - a)*(p - b)*(p - c));
    //h = (a*a - ((a*a - b*b + c*c)*(a*a - b*b + c*c)) / (4*c*c));
    //s = h*c/2;
    cout << s;
    return 0;
};

    //V(9 - n*n) = sqrt(9 - n*n)
    //V(16 - (5 - n)^2)= sqrt(16 - 25 + 10n - n^2) = sqrt(10n - 9 - n*n)
    // 9 == 10n -9
    // 10n == 18
    // n == 1.8
    // h == sqrt(9 - 3.24) == 2.4
    // s == 5*1.2 == 6.0