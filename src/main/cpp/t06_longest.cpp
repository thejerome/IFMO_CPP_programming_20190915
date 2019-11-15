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
  string s, s1, max;
    getline (cin, s);
    for (auto c : s) {
        if (c != ' ') s1 += c;
        else s1 = "";
        if (s1.size() > max.size()) {
            max = s1;
           }
    }
    cout << max;
  return 0;
}
