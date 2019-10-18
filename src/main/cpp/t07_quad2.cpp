//Даны действительные коэффициенты a, b, c. Решите уравнение ax2 + bx + c = 0 и выведите все его корни.
//
//Формат входных данных
//
//        Вводятся три действительных числа.
//Формат выходных данных
//        Если данное уравнение не имеет корней, выведите число 0. Если уравнение имеет один корень, выведите число 1, а затем этот корень. Если уравнение имеет два корня, выведите число 2, а затем два корня в порядке возрастания. Если уравнение имеет бесконечно много корней, выведите число 3.
//Sample Input:
//
//1
//-1
//-2
//Sample Output:
//
//2 -1 2

#include "t07_quad2.h"
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int t07_quad2() {
    double a, b, c, x1, x2, dis, zero;
    cout << setprecision(6) << fixed;
    zero = 1.0e-7;
    cin >> a >> b >> c;
    if (fabs(a) <= zero && fabs(b) <= zero && fabs(c) <= zero){
        cout << 3;
    }
    else if (not fabs(a) <= zero) {
        dis = b * b - 4 * a * c;
        if (dis > zero) { // есть 2 ответа
            cout << 2 << " ";
            x1 = (-b - sqrt(dis)) / (2 * a);
            x2 = (-b + sqrt(dis)) / (2 * a);
            if (x1 < x2) cout << x1 << " " << x2;
            else cout << x2 << " " << x1;
        }
        else if (fabs(dis) <= zero) { // есть 1 ответ
            cout << 1 << " ";
            if (fabs(b) <= zero) cout << 0;
            else {
                x1 = -b / (2 * a);
                cout << x1;
            }
        }
        else cout << 0; // ответа нет
    }
    else if (fabs(b) <= zero) cout << 0; // ответа нет
    else {
        cout << 1 << " ";
        if (fabs(c) <= zero) cout << 0; // ответа нет
        else {
            x1 = -c / b;
            cout << x1;
        }
    }
    return 0;
};