//По данной строке определите, является ли она палиндромом 
// (то есть, читается одинаково как слева-направо, так и справа-налево).
//
//Входные данные
//
//На вход подается 1 строка без пробелов.
//
//Выходные данныеgr
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
#include <string>

using namespace std;

int t05_palindrom() {

	string s;
	getline(cin, s);
	int Chek = 0;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] != (s[s.length() - i - 1])) {
			Chek++;
		}
	}
	if (Chek > 0) {
		cout << "no";
	}
	else {
		cout << "yes";
	}
	return 0;
}
