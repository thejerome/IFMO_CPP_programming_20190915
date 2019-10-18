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
	int d = 0;
	int a = 1;
	cin >> d;
	while (a*2 <= d) {
		if (a*2 == d) {
			cout << "YES";
			return 0;
		}
		a = 2*a;		
	}
	if (d == 1) {
		cout << "YES";
		return 0;
	}
	cout << "NO";
	return 0;
};
