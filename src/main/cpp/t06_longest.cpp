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
	int pos = 0;
    string s, maxs = "";
    getline(cin, s);

    while((int)s.find(" ", pos) > -1){
        int pos2;
        pos2 = s.find(" ", pos);

        if(pos2 - pos > maxs.size())
            maxs = s.substr(pos, pos2 - pos);

        pos = pos2 + 1;
    }

    if(s.size() - pos > maxs.size())
        maxs = s.substr(pos);

    cout << maxs;
}
