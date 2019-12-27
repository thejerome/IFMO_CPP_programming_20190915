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
    int flag = 1;
    string x;
    getline(cin, x);
    for (int i=0; i<x.size(); i++){
        if (x[0+i] != x[x.size()-1-i])
            flag = 0;
    }
    if (flag) cout <<"yes";
    else cout <<"no";
    return 0;
}
