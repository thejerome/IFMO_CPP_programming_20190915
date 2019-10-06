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
  int a, b, c;
    cin >> a >> b >> c;
    if ( a <= b && a <= c ) {
     if ( c <= b) {
         cout << a << " " << c << " " << b;
     }
        else {
        cout << a << " " << b << " " << c;     
        }
    }
    else {
     if ( b <= a && b <= c) {
      if ( c <= a ) {
      cout << b << " " << c << " " << a;  
      }
         else {
          cout << b << " " << a << " " << c;   
         }
     }
        else {
         if ( a<=b ) {
          cout << c << " " << a << " " << b;   
         }
            else {
            cout << c << " " << b << " " << a;    
            }
        }

    }
  return 0;
};

