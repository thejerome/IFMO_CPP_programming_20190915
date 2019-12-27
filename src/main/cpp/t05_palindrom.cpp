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

    bool palindrom = true;
    string word;
    getline(cin, word);
    for (int i = 0; i < word.size(); i++){
        if (word[0+i] != word[word.size() -1 -i]){
            palindrom = 0;
        }
    }
    if (palindrom){
    	 cout << "yes";
    }
    else {
    	cout << "no";
    }
    return 0;
}
