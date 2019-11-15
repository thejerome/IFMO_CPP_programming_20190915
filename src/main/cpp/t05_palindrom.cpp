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
    int s = word.size();
    for (int i = 0; i < (s/2); i++) {
        if (word[i] != word[s-1-i]){
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
