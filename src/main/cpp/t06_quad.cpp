//Даны действительные коэффициенты a, b, c, при этом a != 0 . Решите квадратное уравнение ax2 + bx + c = 0 и выведите все его корни.
//
//Формат входных данных
//
//        Вводятся три действительных числа.
//Формат выходных данных
//        Если уравнение имеет два корня, выведите два корня в порядке возрастания, если один корень — выведите одно число, если нет корней — не выводите ничего.
//Sample Input:
//
//1
//-1
//-2
//Sample Output:
//
//-1 2

#include "t06_quad.h"
#include <iostream>
#include <cmath>

using namespace std;

int t06_quad() {
	double a,b,c,x,y;
	cin>>a>>b>>c;
	y=b*b-4*a*c;
	if(y==0){
		x=-b/(2*a);
		cout<<x+0;
	}
	if(y>0){
		x=(-b+sqrt(y))/(2*a);
		y=(-b-sqrt(y))/(2*a);
		if(x>y)
			cout<<y<<" "<<x;
		else
			cout<<x<<" "<<y;
	}
	
};