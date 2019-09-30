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
	
int a,b,c, min,max,sum;
cin >> a >> b >> c;
sum = a+b+c;
if (a<=b) {
	min=a;
	max=b;
} else {
	min=b;
	max=a;
}
if (c<=min) { min = c;}
if (c>=max) { max = c;}
cout << min << " " << sum - min - max << " " << max;
	


return 0;
};