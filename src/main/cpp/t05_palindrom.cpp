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
    string s;
    int f1 = 0;
    getline(cin, s);
    int k = s.length();
    for (int i = 0; i < k / 2; i++) {
        if (s[i] == s[k - i - 1]) {
            f1++;
        }
    }
    if (f1 == k / 2) {
        cout << "yes";
    } else {
        cout << "no";
    }
}
