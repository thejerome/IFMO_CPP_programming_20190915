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
    int value1, value2, value3 = 0;
    bool flagx = false;
    cin >> (value1) >> (value2) >> (value3);
    if (value1+value2 <= value3)
        flagx=true;
    if (value1+value3 <= value2)
        flagx=true;
    if (value2+value3 <= value1)
        flagx=true;
    if (flagx==false)
        cout << "YES";
    else
        cout << "NO";

};