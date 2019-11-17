//По данной строке определите, является ли она палиндромом 
// (то есть, читается одинаково как слева-направо, так и справа-налево).
//
//Входные данные
//
//На вход подается 1 строка без пробелов.
//
//Выходные данные
//
//Необходимо вывести yes, если строка является палиндромом, и no в противном случае.
//
//Sample Input:
//
//kayak
//Sample Output:
//
//yes

#include "t05_palindrom.h"
#include <iostream>



using namespace std;

int t05_palindrom() {
	string s;
	cin >> s;
	int l;
	int f = 1;
	l = s.size();
	for (int i = 0; i < l; i++) {
		if (s[i] != s[l - i-1]) {
			f = 0;
			break;
		}
	}
	if (f == 1)
		cout << "yes";
	else
		cout << "no";
}
