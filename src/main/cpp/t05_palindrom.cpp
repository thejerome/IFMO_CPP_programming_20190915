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
string b;
int a;
cin >> b;
a =  b.size();
for (int i = 0; i < a/2; i++)
{if (b[i] != b[a-1])
{
  a = 0;
  break;
}
a--;}
if(a == 0) {cout << "no";} else {cout << "yes";}
}
