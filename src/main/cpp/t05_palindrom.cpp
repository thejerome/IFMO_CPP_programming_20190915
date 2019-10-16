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
#include <cstring>


using namespace std;

int t05_palindrom() {
  
    char c[523];
    cin.getline(c, 523);
    for (int i = 0; i < strlen(c) / 2; i ++)
        if (c[i] != c[strlen(c) - i - 1]) {
            cout << "no";
            c[0] = '#';
            break;
        }
    if (c[0] != '#')
        cout << "yes";

}
