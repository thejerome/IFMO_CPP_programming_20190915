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
  double x,y,z,p,S;
  cin >> x >> y >> z;
  p=((x+y+z)/2.0);
  S = sqrt((p-x)*(p-y)*(p-z)*p);   
  cout << S;
  
  return 0;
};