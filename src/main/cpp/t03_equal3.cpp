//Даны три целых числа. Определите, сколько среди них совпадающих. Программа должна вывести одно из чисел: 3 (если все совпадают), 2 (если два совпадает) или 0 (если все числа различны).
//
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
//0

#include "t03_equal3.h"
#include <iostream>

using namespace std;

int t03_equal3() {

int A, B, C, K=0;

  cin >> A;
  cin >> B;
  cin >> C;

  if (A==B) { ++K; }
  if (B==C) { ++K; }
  if (A==C) { ++K; }
  if (K==1) { cout << 2;
  } else if (K==3) { cout << 3;
  } else cout << K;

  return 0;
};
