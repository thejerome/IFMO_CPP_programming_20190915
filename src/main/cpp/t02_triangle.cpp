//Даны три натуральных числа A, B, C. Определите, существует ли треугольник с такими сторонами. Если треугольник существует, выведите строку YES, иначе выведите строку NO.
//Треугольник — это три точки, не лежащие на одной прямой.
//Формат входных данных
//        Вводятся три числа.
//Формат выходных данных
//        Выведите ответ на задачу.
//Sample Input:
//
//3
//4
//5
//Sample Output:
//
//YES

#include "t02_triangle.h"
#include <iostream>

using namespace std;

int t02_triangle() {
    int a = 0, b = 0, c = 0;
    bool p = false;
    cin >>a >>b >>c;
    if ((a*a == b*b + c*c) or (b*b == a*a + c*c) or (c*c == b*b + a*a)) {
        p = true;
    }
    if (p == 1){
        cout <<"YES";
    }
    else {
        cout <<"NO";
    }
};