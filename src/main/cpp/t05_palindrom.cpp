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

bool prost(string a)
{
	int len = a.length();
	for (int i = 0; i < len / 2; ++i) 
	{
		if (a[i] != a[len - i - 1]) return false; 
	}
	return true;
}

int t05_palindrom()
{
	string stroka;
	cin >> stroka;
	if (prost(stroka)) cout << "yes";
	else cout << "no";
	return 0;
}