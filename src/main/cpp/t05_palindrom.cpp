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
    getline(cin, s);
    for (int i = 0, j = s.size() - 1; i <= j; i++, j--)
    {
        if(s[i] != s[j])
        {
            cout << "no" << endl;
            return 0;
        }
    }
    cout << "yes" << endl;
}
