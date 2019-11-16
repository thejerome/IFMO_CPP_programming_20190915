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
	string h;
	cin >> h;
	for (int i = h.size()/2; i >=0; i--)
	{
		if (h[i - 1] != h[h.size() - i])
		{
			cout << "no";
			break;
		}
		if (i == 0)
			cout << "yes";
	}

}
