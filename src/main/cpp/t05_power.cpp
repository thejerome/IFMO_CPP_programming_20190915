//Дано действительное положительное число a и целоe число n.
//
//Вычислите an. Решение оформите в виде рекурсивной функции power(a, n).
//Не используйте циклы.
//
//Формат входных данных
//        Вводится действительное положительное число a и целоe число n.
//Формат выходных данных
//        Выведите ответ на задачу.
//Sample Input 1:
//
//2
//1
//Sample Output 1:
//
//2
//Sample Input 2:
//
//2
//2
//Sample Output 2:
//
//4

#include "t05_power.h"
#include <iostream>
#include <cmath>

using namespace std;

//function power
double power(double a,int n){
	if(n == 0){
		return 1.0;
	}
	if(n == 1){
		return a;
	} 
	if(n & 1){
		double exp = power(a,(n - 1) >> 1);
		return a * exp * exp;
	} else {
		double exp = power(a,n >> 1);
		return exp * exp;
	}
}

int t05_power() {
    	double a;
		int n;
		cin>>a>>n;
		if(n >= 0){
			cout<<power(a,n);
		} else {
			cout<<1 / power(a,-n);
		}
}
