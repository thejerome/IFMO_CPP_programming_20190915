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
    int a=0, b=0, c=0;
  // int k=0;
    cin >> a >> b >> c;
    if (a>b) {
  //      k=b;
  //      b=a;
  //      a=k;
   a=a+b;
   b=a-b;
   a=a-b;
    }
    if (a>c) {
    //    k=a;
    //    a=c;
    //    c=k;
    a=a+c;
    c=a-c;
    a=a-c;
    }
    if (b>c) {
      // k=b;
      // b=c;
      // c=k;
    b=b+c;
    c=b-c;
    b=b-c;
    }
    cout << a << " " << b << " " << c;
};