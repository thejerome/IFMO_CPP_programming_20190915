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
double a, b, c; 
cin >> a >> b >> c; 
double b1=b/a; 
double c1=c/a; 
double b2=b1/2; 
double c2=-c1+b2*b2; 
if (c2==0){ 
cout << -b2; 
} else { 
if (c2>0){ 
cout << -sqrt(c2)-b2 << " " << sqrt(c2)-b2; 
} 
} 
};