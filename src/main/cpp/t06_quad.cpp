//Даны действительные коэффициенты a, b, c, при этом a != 0 . Решите квадратное уравнение ax2 + bx + c = 0 и выведите все его корни.
//
//Формат входных данных
//
//        Вводятся три действительных числа.
//Формат выходных данных
//        Если уравнение имеет два корня, выведите два корня в порядке возрастания, если один корень — выведите одно число, если нет корней — не выводите ничего.
//Sample Input:
////
//1
//-1
//-2
//Sample Output:
//
//-1 2
//
#include "t06_quad.h"
#include <iostream>
#include <cmath>

using namespace std;

int t06_quad() {

		double a, b, c;
		double D, x1, x2;
		cin >> a >> b >> c;
		D = (b * b) - (4 * a * c);
		x1 = (-b - (sqrt(D))) / (2 * a);
		x2 = (-b + (sqrt(D))) / (2 * a);
		if (D > 0) {
			if (x1 > x2) {
				cout << x2 << " " << x1 << endl;
				return 0;
			}
			else {
				cout << x1 << " " << x2 << endl;
				return 0;
			}


		}
		else if (D < 0) {
			return 0;
		}
		else if (D == 0) {
			cout << x1 << endl;
			return 0;
		}



	};