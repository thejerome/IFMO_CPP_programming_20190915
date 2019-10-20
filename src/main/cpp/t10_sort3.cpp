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
	int a, b, c  , min , mid, f, max;
	
	cin >> a >> b >> c;
	if (a <= b && a <= c ) {
		min = a;
		f = 1;
	 }
	else if (b <= c && b <= a) {
		min = b;
		f = 2;
	}
	else if (c <= b && c <= a) {
		min = c;
		f = 3;
	}
	if (f == 1) {
		if (b > c) {
			mid = c;
			max = b;
		}
		else {
			max = c;
			mid = b;
		}

	}
	if (f == 2) {
		if (a > c) {
			mid = c;
			max = a;
		}
		else {
			mid = a;
			max = c;
		}
	}
		if (f == 3) {
			if (b > a) {
				mid = a;
			}
			else {
				mid = b;
				max = a;
			}
		}
		cout << min << " " << mid << " " << max << endl;
		return 0;

};