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
	double a = 0;
	double b = 0;
	double c = 0;
	double z = 0;
	cin >> a >> b >> c;
	z = (a + b + c) * 0.5 * ((a + b + c) * 0.5 - a) * ((a + b + c) * 0.5 - b) * ((a + b + c) * 0.5 - c);
	z = sqrt(z);
	cout.precision(4);
	cout << fixed << z;
	return 0;
};
