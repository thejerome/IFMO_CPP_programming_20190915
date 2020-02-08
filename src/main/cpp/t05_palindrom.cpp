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
	string s;
	cin >> s;
	int a = s.length();
	a--;
	int b = 0;
	for (int i = 0; i < a; i++)
	{
		if (s[a - i] != s[i])
		{
			b = 1;
			break;
		}
	}
	if (b == 0)
	{
		cout << "yes";
	}
	else
	{
		cout << "no";
	}
}
