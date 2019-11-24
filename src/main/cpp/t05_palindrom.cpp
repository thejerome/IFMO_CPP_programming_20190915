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
    string str;
    getline(cin, str);
    int sz = str.size();
    bool tr = true;
    for (int i=0; i<sz; i++){
        if (str[0+i] != str[sz-1-i]){
            tr = false;
        }
    }
    if (tr){
        cout <<"yes";
    } else {
        cout <<"no";
    }
    return 0;
}
