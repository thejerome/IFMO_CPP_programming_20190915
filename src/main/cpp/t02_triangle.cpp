//Даны три натуральных числа A, B, C. Определите, существует ли треугольник с такими сторонами. Если треугольник существует, выведите строку YES, иначе выведите строку NO.
//Треугольник — это три точки, не лежащие на одной прямой.
//Формат входных данных
//        Вводятся три числа.
//Формат выходных данных
//        Выведите ответ на задачу.
//Sample Input:
//
//3
//4
//5
//Sample Output:
//
//YES

#include "t02_triangle.h"
#include <iostream>

using namespace std;

int t02_triangle() {
int a,b,c = 0;
 cin >> a >> b >> c;
 if (a>0 and b>0 and c>0 and a>c and a>b){
 	if (a < b+c){
 		cout << "YES"; 
                return 0;   
  	}
 	else{
 		cout <<  "NO";
                return 0;
  	}
 }
if (a>0 and b>0 and c>0 and b>c and b>a){
	if (b < a+c){
	 	cout << "YES";
                return 0;
	  }
	else{
	 	cout <<  "NO";
                return 0;
  	}
 }
if ( c>0 and b>0 and a>0 and c>a and c>b){
	if (c < a+b){
	        cout << "YES";
                return 0;
      }
        else{
	        cout <<  "NO";
                return 0;
      }
 }
else {
	cout << "YES";
}
return 0;

};
