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
string a;
	getline(cin, a);
	int ln, n;
   ln = a.length();
	 n = 0;
	for (int i = 0; i < ln/2; i++) {
		if (a[i] == a[ln-i-1]) 
			{n++;};}
      if (n == ln / 2) cout << "yes";
	    else cout << "no";
	return 0;
}
