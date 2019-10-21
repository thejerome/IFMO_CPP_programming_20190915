//Дано три числа. Упорядочите их в порядке неубывания.
//
//Формат входных данных
//        Вводятся три числа.
//Формат выходных данных
//        Выведите ответ на задачу.
//Sample Input:
//
//1
//2
//1
//Sample Output:
//
//1 1 2

#include "t10_sort3.h"
#include <iostream>

using namespace std;

int t10_sort3() {

int A, B, C, D;

  cin >> A;
  cin >> B;
  cin >> C;

  if (A>B) {
        D=B; B=A; A=D;
  }
  if (B>C) {
        D=C; C=B; B=D;
  }
  if (A>B) {
        D=B; B=A; A=D;
  }

  cout << A << " " << B << " " << C << endl;

  return 0;
};
