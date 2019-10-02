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
#include <iomanip>

using namespace std;

int t06_quad() {
    int a,b,c;
    double D,x1,x_2;
    cin >> a >> b >> c;

    D=b*b-4*a*c;
    if (D>0) {
        x1=(-b+sqrt(D))/(2*a);
        x_2=(-b-sqrt(D))/(2*a);
        if (x1>x_2) {
            cout << setprecision(6) << x_2 << " " << x1;
        } else cout << x1 << " " << x_2;
    } else {
        if (D==0) {
            cout << -b/2/a;
        }
    }

    return 0;
};
