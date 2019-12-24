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
 int count = 0;
 getline(cin,a);
 int line = a.length();
 for (int i = 0 ; i < line/2 ; i++) {
     if (a[i] == a[line-i-1]) {
         count++;
     }
 }
if (count == (line / 2)) {
    cout << "yes";
}
else cout << "no";
}
 
