//Дано натуральное число N. Выведите слово YES, если число N является точной степенью двойки, или слово NO в противном случае.
//
//Формат входных данных
//        Вводится натуральное число.
//Формат выходных данных
//        Выведите ответ на задачу.
//Sample Input 1:
//
//1
//Sample Output 1:
//
//YES
//        Sample Input 2:
//
//2
//Sample Output 2:
//
//YES

#include "t03_twos.h"
#include <iostream>

using namespace std;

int t03_twos() {
	int N,a=1,k=0;
	cin >> N;
	while (a <= N) {
		if (a == N) {
			k = 1;
		}
		a *= 2;
	}
	if (k == 1) 
		cout << "YES";
	else
		cout << "NO";
	return 0;
};