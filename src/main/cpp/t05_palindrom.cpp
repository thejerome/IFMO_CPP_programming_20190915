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
#include <string>


using namespace std;

int t05_palindrom() {
	string w;
	getline(cin, w);
	bool kek = true;

	for (int i = 0; i < w.length() / 2; i++)

		if (w[i] != w[w.length() - i - 1]) {

			kek = false;

			break;

		}

	if (kek) cout << "YES";

	else cout << "NO";
	
}
