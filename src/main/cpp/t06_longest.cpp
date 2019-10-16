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
#include <cstring>


using namespace std;

int t06_longest() {
  
    int cnt = 0, maxl = 0, maxind = 0, ind = 0;
    char c[523];
    cin.getline(c, 523);

    for (int i = 0; i < strlen(c); i ++)
        if (c[i] == ' ') {
            if (maxl < cnt) {
                maxl = cnt;
                maxind = ind;
            }
            ind = i + 1;
            cnt = 0;
        } else
            cnt ++;
    if (maxl < cnt) {
        maxl = cnt;
        maxind = ind;
    }

    for (int i = maxind; i < strlen(c); i ++)
        if (c[i] != ' ')
            cout << c[i];
        else
            break;

}
