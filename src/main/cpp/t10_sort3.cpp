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
	int a = 0, b = 0, c = 0, i = 0;
	cin >> a >> b >> c;
	if (a > b) { i = b; b = a; a = i; }
	if (b > c) { i = c; c = b; b = i; }
	if (a > b) { i = b; b = a; a = i; }
	if (b > c) { i = c; c = b; b = i; }
	cout << a << " " << b << " " << c;
};