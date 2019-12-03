//Найдите в данной строке самое длинное слово и выведите его.
//
//Входные данные
//
//Вводится одна строка. Слова в ней отделены одним пробелом.
//
//Выходные данные
//
//Выведите самое длинное слово. Если таких слов несколько, то выводить нужно, которое встречается раньше.
//
//Sample Input:
//
//Everyone of us has all we need
//Sample Output:
//
//Everyone

#include "t06_longest.h"
#include <iostream>
#include <string>

using namespace std;

int t06_longest() {
    string s;
    getline (cin, s);
    int a,b,c;
    a = 0;
    b = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] != ' ') {
            a++;
        }
        else a=0;
        if (a>b) {
            b=a;
            c=i+1;
        }
    }
    for (int i=c-b; i<c; i++){
    cout<<s[i];
    }
    
    return 0;

}
