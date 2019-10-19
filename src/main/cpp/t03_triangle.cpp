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
  int a, b, c;
  ccin >> a >> b >> c;
  double x;
  double p;
  p = (a+b+c)/3;
  x = sqrt(p*(p-a)*(p-b)*(p-c));
  cout << x;
};
