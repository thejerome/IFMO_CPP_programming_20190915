//Даны четыре действительных числа: x1, y1, x2, y2. 
// Напишите функцию distance(x1, y1, x2, y2), вычисляющую расстояние между точкой (x1. y1) и (x2, y2).
// Считайте четыре действительных числа и выведите результат работы этой функции.
//
//Формат входных данных
//        Вводятся четыре действительных числа.
//Формат выходных данных
//        Выведите ответ на задачу.
//Sample Input:
//
//0
//0
//1
//1
//Sample Output:
//
//1.41421

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

//function distance
double function_distance(double a, double b, double c, double d){
    double p;
    double l;
    double s;
    l = abs(a-c);
    s = abs(b-d);
    p = sqrt(l*l + s*s);
    return p;
}

int t02_dist() {
    double x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    cout << setprecision(6) << function_distance(x1, y1, x2, y2);

    return 0;
}
