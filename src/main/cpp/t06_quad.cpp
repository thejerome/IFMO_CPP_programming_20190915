//Даны действительные коэффициенты a, b, c, при этом a != 0 . Решите квадратное уравнение ax2 + bx + c = 0 и выведите все его корни.
//
//Формат входных данных
//
//        Вводятся три действительных числа.
//Формат выходных данных
//        Если уравнение имеет два корня, выведите два корня в порядке возрастания, если один корень — выведите одно число, если нет корней — не выводите ничего.
//Sample Input:
//
//1
//-1
//-2
//Sample Output:
//
//-1 2

#include "t06_quad.h"
#include <iostream>
#include <cmath>
#include <cmath>

using namespace std;

int t06_quad() {
    double a =0, b=0, c=0;
    cin >>a >>b >>c;
    double D = b*b - 4*a*c;
    int o = 0;
    if (D > 0) {o = 2;}
    if (D == 0) {o = 1;}
    if (D < 0) {o = 0;}
    if (o == 2) {
        double x2 = (-b + sqrt (D)) / (2*a) ;
        double x1 = (-b - sqrt (D)) / (2*a);
        cout <<x1 <<" " <<x2;
    }
    if (o == 1) {
        double x = (-b) / (2*a);
        cout <<x;
    }
    return 0;
};