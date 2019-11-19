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
    int n = 1;
    string s;
    getline(cin, s);

    for(int i=0; i< (s.size())/2; i++) {
        if (s[i] != s[s.size()-i-1])
            n=2;
    }

    if (n==2)
        cout << "no";
    else
        cout << "yes";
    return(0);

}
