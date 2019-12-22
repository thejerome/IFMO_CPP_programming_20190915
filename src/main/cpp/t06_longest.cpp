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
#include <locale>
#include <cstring>

using namespace std;

int t06_longest() {
    const int STRLEN = 200;
    char s[STRLEN];
    cin.getline(s, STRLEN);

    size_t maxlen = 0;
    char * maxidx = nullptr;

    for(char * c = s; *c;)
    {
        while(*c == ' ') ++c;
        if (*c == 0) break;
        char * begin = c;
        while(*c && *c != ' ') ++c;
        if (maxlen < (c - begin))
        {
            maxlen = c - begin;
            maxidx = begin;
        }
    }
    if (maxlen == 0)
    {
        cout << "Tut pusto!\n";
        return 0;
    }
    else
    {
        *(maxidx+maxlen) = 0;
        cout << maxidx;
    }
}

