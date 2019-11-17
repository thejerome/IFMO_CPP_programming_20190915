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
	string line;
	getline(cin, line);
	short int s = line.size();
	for(short int i=0; i<s/2;i++)
	{
		if (line[i] != line[s - 1 - i]) { cout << "no"; return 0; }
	}
	cout << "yes";
}
