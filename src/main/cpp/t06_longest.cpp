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
    string s,sl,word;
    int max;
   // char sl;
    sl = "";
    word = "";
    max = 0;
    getline(cin,s);
    s += " ";
    for (int i=0; i < s.length(); i++) {
        if(s[i] != " ")
            sl += s[i];
        else {
            if (max < sl.size()) {
                max = sl.size();
                word = sl;
            };
            sl = "";
        };
    };
    cout << word;
    return 0;
}
