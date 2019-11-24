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
    bool k=1;
    getline(cin,s);
    for (int i=0;i<size(s)/2;i++){
        if (s[i]!=s[size(s)-i-1]){
            cout << "no";
            k=0;
        }
    }
    if(k){
        cout << "yes";
    }
}
