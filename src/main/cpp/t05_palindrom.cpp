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

bool cp(string word){
  
    int len = word.length();
    for(int i = 0; i < len/2; ++i)
    {
        if(word[i] != word[len-i-1])
        {
            return false;
        }
    }
    return true;
}

int t05_palindrom()
{
    string str;
    cin >> str;
    if(cp(str))
    {
        cout << "yes";
    }
    else
    {
        cout << "no";
    }
    return 0;
}
