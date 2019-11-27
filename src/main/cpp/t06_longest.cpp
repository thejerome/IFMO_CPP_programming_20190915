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
    string s = {};
    int len = 0;
    int max_len = 0;
    string max = {};

    while (cin >> s){
        len = s.length();
        if (max_len < len){
            max_len = len;
            max = s;
        }
    }
    cout << max;
    return 0;

}
