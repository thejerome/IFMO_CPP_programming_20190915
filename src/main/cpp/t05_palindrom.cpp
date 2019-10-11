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
    int n= s.size();
    bool b=1;
    for(int i=0;i<n;i++){
        if(s.substr(i,1)!=s.substr(n-i-1,1))
            b=0;
    }
    if(b)
        cout<<"yes";
    else
        cout<<"no";
    return 0;
}
