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
  int i, len, x;
    string s;  
    bool b = 1;   
    getline(cin, s);
    x = s.size();
    len = s.size(); 
    x = (x - x % 2) / 2;
     for (i = 0; i < x; i++) {
         if (s[i] != s[len-i-1]) {
             b = 0;
         }
     }
    if (b) {
        cout << "yes";
    }
    else {
        cout << "no";
    }
  return 0;
}
