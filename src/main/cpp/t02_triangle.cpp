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
 if (a>c & a>b){
 	if (a < b+c){
 		cout << "YES";    
  	}
 	else{
 		cout <<  "NO";
  	}
 }
if (b>c & b>a){
	if (b < a+c){
	 	cout << "YES";
	  }
	else{
	 	cout <<  "NO";
  	}
 }
if (c>a & c>b){
	if (c < c+b){
	        cout << "YES";
      }
        else{
	        cout <<  "NO";
      }
 }
else {
	cout << "YES";
}
return 0;

};
