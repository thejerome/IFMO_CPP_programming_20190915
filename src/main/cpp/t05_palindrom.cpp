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
    cin>>s;
    int l = s.length();
    int i=0;
    int temp = 0;
    while (i < l/2){
            if(s[i] == s[l-(i+1)])
                temp++;i++;
    }
    if(temp == l/2)
        cout<<"yes";
    else
        cout<<"no";
}
