//Даны три целых числа. Найдите наибольшее из них (программа должна вывести ровно одно целое число). Под наибольшим в этой задаче понимается число, которое не меньше, чем любое другое.
//Формат входных данных
//        Вводятся три числа.
//Формат выходных данных
//        Выведите ответ на задачу.
//Sample Input:
//
//1
//2
//3
//Sample Output:
//
//3

#include "t01_max3.h"
#include <iostream>

using namespace std;

int t01_max3() {

 int A, B, C;
  cin >> A;
  cin >> B;
  cin >> C;

  if (A >= B) {
  if (A >= C) { cout << A; }
  } else if (B >= C) {
  cout << B;
  } else cout << C;

  return 0;
}