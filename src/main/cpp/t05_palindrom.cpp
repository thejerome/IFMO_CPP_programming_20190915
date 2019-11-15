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
    string word;
    bool f=true;
    cin >> word;
    int len = word.length();
    for (int i = 0; i < len / 2; ++i) {
        if (word[i] != word[len-1]){
            f = false;
        }
    }
    if (f){
        cout << "yes";
    }
    else{
        cout << "no";
    }
    return 0;
}
