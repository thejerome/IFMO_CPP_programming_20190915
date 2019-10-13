//Есть две коробки, первая размером A1×B1×C1, вторая размером A2×B2×C2. Определите, можно ли разместить одну из этих коробок внутри другой, при условии, что поворачивать коробки можно только на 90 градусов вокруг ребер.
//
//Формат входных данных
//        Программа получает на вход числа A1, B1, C1, A2, B2, C2.
//Формат выходных данных
//        Программа должна вывести одну из следующих строчек:
//Boxes are equal, если коробки одинаковые,
//The first box is smaller than the second one, если первая коробка может быть положена во вторую,
//        The first box is larger than the second one, если вторая коробка может быть положена в первую,
//Boxes are incomparable, во всех остальных случаях.
//Sample Input 1:
//
//1
//2
//3
//3
//2
//1
//Sample Output 1:
//
//Boxes are equal
//        Sample Input 2:
//
//2
//2
//3
//3
//2
//1
//Sample Output 2:
//
//The first box is larger than the second one

#include "t11_boxes.h"
#include <iostream>

using namespace std;

int t11_boxes() {
  int a, b, c, a2, b2, c2;
  cin >> a >> b >> c >> a2 >> b2 >> c2;
  if(a == a2 && b==b2 && c==c2)
    cout << "Boxes are equal";
  else{
    if(b >= a && b >= c){
      a += b;
      b = a-b;
      a -= b;
      if(c > b){
          b += c;
          c = b-c;
          b -= c;
        }
    }
    else{
      if(c >= a && c >= b){
        a += c;
        c = a-c;
        a -= c;
        if(c > b){
          b += c;
          c = b-c;
          b -= c;
        }
        
      }
      else{
        if(c > b){
          b += c;
          c = b-c;
          b -= c;
        }
      }
    }
    if(b2 >= a2 && b2 >= c2){
      a2 += b2;
      b2 = a2-b2;
      a2 -= b2;
      if(c2 > b2){
          b2 += c2;
          c2 = b2-c2;
          b2 -= c2;
        }
    }
    else{
      if(c2 >= a2 && c2 >= b2){
        a2 += c2;
        c2 = a2-c2;
        a2 -= c2;
        if(c2 > b2){
          b2 += c2;
          c2 = b2-c2;
          b2 -= c2;
        }
        
      }
      else{
        if(c2 > b2){
          b2 += c2;
          c2 = b2-c2;
          b2 -= c2;
        }
      }
    }
    
    
    cout << a << ' ' << b << ' ' << c << endl;
    cout << a2 << ' ' << b2 << ' ' << c2 << endl;
    if(a*b*c > a2*b2*c2){
      if(a > a2 && b > b2 && c > c2)
        cout << "The first box is larger than the second one";
      else
        cout << "Boxes are incomparable";
    }
    else{
      if(a2 > a && b2 > b && c2 > c)
        cout << "The first box is smaller than the second one";
      else
        cout << "Boxes are incomparable";
    }
  }

};
