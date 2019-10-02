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
 int a1, b1, c1, a2, b2, c2, x1, y1, z1, x2, y2, z2;
    cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2; 

    if ( a1 <= b1 && a1 <= c1 ) {
     if ( b1 <= c1) {
         x1 = a1; y1 = b1; z1 = c1;  
     }       
        else {
        x1 = a1; y1 = c1; z1 = b1;      
        }
    }
    
     else {
     if ( b1 <= a1 && b1 <= c1) {
      if ( a1 <=c1 ) {
        x1 = b1; y1 = a1; z1 = c1;  
      }
         else {
         x1 = b1; y1 = c1; z1 = a1;    
         }
     }
        else {
         if ( a1<=b1 ) {
         x1 = c1; y1 = a1; z1 = b1;     
         }
            else {
         x1 = c1; y1 = b1; z1 = a1;   
            }
        }
       }

    if ( a2 <= b2 && a2 <= c2 ) {
     if ( b2 <= c2) {
         x2 = a2; y2 = b2; z2 = c2;  
     }       
        else {
        x2 = a2; y2 = c2; z2 = b2;      
        }
    }
    
    else {
     if ( b2 <= a2 && b2 <= c2) {
      if ( a2 <=c2 ) {
        x2 = b2; y2 = a2; z2 = c2;  
      }
         else {
         x2 = b2; y2 = c2; z2 = a2;    
         }
     }
        else {
         if ( a2<=b2 ) {
         x2 = c2; y2 = a2; z2 = b2;     
         }
            else {
         x2 = c2; y2 = b2; z2 = a2;    
            }
        }
       }

    if (x1 == x2 && y1 == y2 && z1 == z2) {
     cout << "Boxes are equal";   
      }
    else { if ( x1 >= x2 && y1 >= y2 && z1 >= z2) {
     cout <<  "The first box is larger than the second one"; 
    }
    else { if ( x1 <= x2 && y1 <= y2 && z1 <= z2) {
     cout << "The first box is smaller than the second one";   
    }
    else {
     cout << "Boxes are incomparable";   
    }
         }}
  return 0;
};
