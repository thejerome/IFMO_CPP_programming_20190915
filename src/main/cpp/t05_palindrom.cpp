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
    bool b = true;
    getline(cin, s);
    int n = s.length();
    for (int i = 0; i < n/2; i++) {
        if (s[i] != s[n - 1 -i]) b = false;
    }
    if (b) cout << "yes";
    else cout << "no";
    return 0;
}
