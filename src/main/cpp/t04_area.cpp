//Проверьте, принадлежит ли точка данной закрашенной области:
//
// https://www.dropbox.com/s/3h3nl34g4ciiglt/3795.png?dl=1
//
//Если точка принадлежит области (область включает границы), выведите слово YES, иначе выведите слово NO.
//Решение должно содержать функцию IsPointInArea(x, y), возвращающую True, если точка принадлежит области 
// и False, если не принадлежит. 
// Основная программа должна считать координаты точки, вызвать функцию IsPointInArea 
// и в зависимости от возвращенного значения вывести на экран необходимое сообщение.
//Функция IsPointInArea не должна содержать инструкцию if.
//Формат входных данных
//        Вводятся два действительных числа.
//Формат выходных данных
//        Выведите ответ на задачу.
//Sample Input 1:
//
//-4
//-4
//Sample Output 1:
//
//NO
//        Sample Input 2:
//
//-4
//-3
//Sample Output 2:
//
//NO

#include "t04_area.h"
#include "t02_dist.h"
#include <iostream>
#include <cmath>

using namespace std;

double dist(double x1,double y1,double x2,double y2);

//function IsPointInArea
bool IsPointInArea(double x,double y){
	return (dist(x,y,-1,1) == 2.0 ? ((-3*(x + y) >= 0 and -2*(-2*x + y - 2) >= 0) or ((x + y) >= 0 and 2*(-2*x + y - 2) >= 0)) 
							     	 : (dist(x,y,-1,1) < 2 ? ((x + y) >= 0 and 2*(-2*x + y - 2) >= 0) : (-3*(x + y) >= 0 and -2*(-2*x + y - 2) >= 0)));
}

int t04_area() {
    	double x,y;
    	cin>>x>>y;
    	cout<<(IsPointInArea(x,y) ? "YES" : "NO");
}
