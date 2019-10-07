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
int a,b,c = 0;
cin >> a >> b >> c;
if(a >= b){
	if(b >= c){
		cout << c << " " << b << " " << a;
		return 0;
	}
	if(a >= c){
		cout << b << " " << c << " " << a;
		return 0;
	}
	else{
		cout << b << " " << a << " " << c;
		return 0;
	}
}
else{
	if(b >= c){
		if(c >= a){
			cout << a << " " << c << " " << b;
			return 0;
		}
		else {
			cout << c << " " << a << " " << b;
			return 0;
		}
	}
	else {
		cout << a << " " << b << " " << c;
		return 0;
	}
}
return 0;
};
