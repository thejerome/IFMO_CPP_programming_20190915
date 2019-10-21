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
    int a,b,c:
    double h,s;
    cin >> a >> b >> c;
    h = (a*a - ((a*a - b*b + c*c)*(a*a - b*b + c*c)) / 4*c*c);
    s = h*c/2;
    cout << s;
    return 0;
};