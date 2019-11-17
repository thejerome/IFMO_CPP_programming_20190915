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
    string line;
    cin >> line;
    for (int i = line.size()/2; i >=0; i--){
        if (line[i - 1] != line[line.size() - i]){
            cout << "no";
            break;
        }
        if (i == 0) cout << "yes";
    }
}
