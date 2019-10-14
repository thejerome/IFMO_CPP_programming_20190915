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
   double a,b,c,s,p,p1;
   cin>>a>>b>>c;
   p1=(a+b+c)/2;
   s=sqrt(p1*(p1-a)*(p1-b)*(p1-c));
   cout << fixed << setprecision(4) << s << endl; 
    return 0;
}
