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
   double a,b,c,s,p;
   cin>>a>>b>>c;
   s=a*b*c;
   cout<<int(s)<<'.'<<(s - int(s))*10000;
   p=s-int(s);
   for (int i=0;i<3;i++) {
       p=p*10;
       cout<<p;
       p=p-int(p);
   }
    return 0;
}
