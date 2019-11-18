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
    string n;
    bool f = true;
    cin >> n;
    int s = n.size();
    for (int i = 0 ; i < (s/2) ; i++)
    {
        if (n[i] != n[s - 1 - i])
        {
            f = false;
        }
    }
    if (f)
    {
        cout << "yes";
    }
    else{
        cout << "no";
    }
    return 0;
}