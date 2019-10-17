//Дано положительное действительное число X. Выведите его дробную часть.
//
//Формат входных данных
//
//        Вводятся положительное действительное число.
//
//Формат выходных данных
//        Выведите ответ на задачу.
//Sample Input:
//
//17.9
//Sample Output:
//
//0.9

#include "t01_frac.h"
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int t01_frac() {
  float x;
  int a;
  cin >> x;
  a = int(x);
  cout << setprecision(5) << x - a;
};
