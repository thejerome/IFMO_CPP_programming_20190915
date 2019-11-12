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
    getline(cin, s);
    int maxStart = 0, i = 0;
    while (s[i] != ' ') {
        i++;
    }
    int end = i, maxEnd = i;
    int max = ++i;
    for (i; i < s.length() + 1; i++) {
        if (s[i] == ' ' or s[i] == '\0') {
            if ((i - end) > max) {
                max = i - end;
                maxStart = end + 1;
                maxEnd = i;
            }
            end = i;
        }
    }
    for (int i = maxStart; i < maxEnd; i++) {
        cout << s[i];
    }
    return 0;
}
