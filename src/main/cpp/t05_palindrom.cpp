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

bool IsPalindrom(string a){
    if ( a == string(a.rbegin(), a.rend())){
        return true;
    }
    else
    {
        return false;
    }    
}

int t05_palindrom() {
    string a;
    cin >> a;
    if (IsPalindrom(a))
    {
        cout << "yes" << endl;
        return 0;
    }
    cout << "no" << endl;
    return 0;
}
