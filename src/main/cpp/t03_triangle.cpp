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
	double a,b,c,s;
    cin>>a>>b>>c;
    a=a*a;
    b=b*b;
    c=c*c;
    s=0.25*sqrt(4*b*c-(b+c-a)*(b+c-a));
    cout<<setprecision(4)<<fixed<<s;
    return 0;
};