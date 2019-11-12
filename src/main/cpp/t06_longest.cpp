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
//        8  11 14
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
    getline(cin, s);
    int end, max, beg, maxbeg, n;
    n = s.length();
    max = s.find (' ');
    beg = max + 1;
    maxbeg = 0;

    for (end = s.find (' ', beg); end != -1; end = s.find (' ', beg) ) {
        if (end - beg > max) {
            max = end - beg; maxbeg = beg;
        }
        beg = end + 1;
    }
    end = n;
    if (end-beg > max) {
        max = end - beg; maxbeg = beg;
    }
    cout << s.substr (maxbeg, max);
    return 0;
}
