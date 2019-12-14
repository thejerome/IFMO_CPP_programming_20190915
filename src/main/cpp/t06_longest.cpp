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
     string s, w, max;
    getline(cin, s);
   int a, b, c;
   a = s.size();
    for (int i =0; i < a; i++){
        if (s[i] != ' ' )
            w = w + s[i];
        else if (w.size() > max.size())
            max = w;
        if (s[i] == ' ')
            w.clear();
    }
    if (w.size() > max.size())
        max = w;
    cout << max;
    return 0;


}
