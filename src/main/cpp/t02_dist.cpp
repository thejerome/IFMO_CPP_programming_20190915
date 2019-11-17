//Даны четыре действительных числа: x1, y1, x2, y2. 
// Напишите функцию distance(x1, y1, x2, y2), вычисляющую расстояние между точкой (x1. y1) и (x2, y2).
// Считайте четыре действительных числа и выведите результат работы этой функции.
//
//Формат входных данных
//        Вводятся четыре действительных числа.
//Формат выходных данных
//        Выведите ответ на задачу.
//Sample Input:
//
//0
//0
//1
//1
//Sample Output:
//
//1.41421

#include <iostream>
#include <cmath>

using namespace std;

double distance(double x, double y, double x1, double y1)
{
  double f;
  f = sqrt((x - x1)*(x - x1) + (y - y1)*(y - y1));
  return f;
}


int t02_dist() {

  double x, y, x1, y1, f;
  cin >> x >> y >> x1 >> y1;
  f = distance(x, y, x1, y1);
  cout << f;

    return 0;
}
