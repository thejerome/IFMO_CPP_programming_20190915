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


using namespace std;

int t06_longest() {
    string s;
    getline(cin,s);
    int b = s.find(' '),a=b+1;
    string l = s.substr(0,b);
    int m = b;
    for (b = s.find(' ',a);b != -1; b = s.find(' ',a)){
        if(b-a>m){
           m = b-a;
           l = s.substr(a,m);
        }
        a = b+1;
    }
    if (s.length()-a>m){
        cout << s.substr(a,s.length()-a);
    }else{
        cout << l;
    }
}
