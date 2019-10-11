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

    double A=0;
    double B=0;
    double C=0;
    double S=0;
    double P=0;
    cin >> A >> B >> C;

    P = (A + B + C) / 2;
    S = sqrt (P * (P - A) * (P - B) * (P - C));
    cout << fixed << setprecision(4) << S;
};