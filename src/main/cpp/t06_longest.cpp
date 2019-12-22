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
    int startMax = 0, endMax = 1, bufStart = 0, bufEnd = 0;
    getline(cin, s);
    for (int i = 0; i < s.size() + 1; i++){
        if (s[i] == ' ' || s[i] == '\0'){
            bufEnd = i;
            if (bufEnd - bufStart > endMax - startMax){
                startMax = bufStart;
                endMax = bufEnd;
            }
            bufStart = i + 1;
        }
    }
    for (int i = startMax; i < endMax; i++){
        cout << s[i];
    }
    return 0;
}
