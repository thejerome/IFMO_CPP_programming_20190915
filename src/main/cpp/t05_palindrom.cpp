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

int t05_palindrom()
{
    string s;
    cin >> s;
    int i = 0;
    while ((i < s.length()) && (s[i] == s[s.length() - i - 1]))
        i++;
    if (i == s.length())
        cout << "yes";
    else
        cout << "no";
    return 0;

}
