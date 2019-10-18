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

using namespace std;

int t06_quad() {
	double a = 0;
	double b = 0;
	double c = 0;
	double d = 0;
	double x1 = 0;
	double x2 = 0;
	cin >> a >> b >> c;
	d = b * b - 4 * a * c;
	x1 = (-b + sqrt(d)) / (2 * a);
	x2 = (-b - sqrt(d)) / (2 * a);
	if (d == 0) {
		cout << x1;
		return 0;
	}
	if ( d > 0) {
		if (x1 > x2) {
			cout << x2 << " " << x1;
		}
		else {
			cout << x1 << " " << x2;
		}
	}
	return 0;
};
