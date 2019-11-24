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


using namespace std;

//function distance
double distance (double x1, double y1, double x2, double y2);
double distance(double x1, double y1, double x2, double y2){
    double dx = abs(x2 - x1);
    dx = dx*dx;
    double dy = abs (y2 - y1);
    dy = dy*dy;
    return (sqrt(dx+dy));
}
int t02_dist() {
    double x1=0, x2=0, y1=0, y2=0;
    cin >>x1 >>y1 >>x2 >>y2;
    cout <<distance(x1, y1, x2, y2);
    return 0;
}
