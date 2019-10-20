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
    double A,B,C, p;
    cin >> A >>B >>C;
    p=(A+B+C)/2;
    std::cout << std::setprecision(4);
    std::cout << std::fixed;
    std::cout << sqrt(p*(p-A)*(p-B)*(p-C)) << std::endl;

};