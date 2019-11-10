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

    string a;
    getline (cin, a);
    a += ' ';

    int WordCoord [2];
    int MaxWordCoord [2];
    int MaxLength = 0;
    WordCoord [1] = -1;

    for (int i = 0; i < a.length(); i++) {
        if (a[i] == ' ') {
            WordCoord[0] = WordCoord[1] + 1;
            WordCoord[1] = i;

            if (WordCoord[1] - WordCoord[0] > MaxLength) {
                MaxWordCoord[0] = WordCoord[0];
                MaxWordCoord[1] = WordCoord[1];
                MaxLength = WordCoord[1] - WordCoord[0];
            }
        }
    }

    while (MaxWordCoord [0] <= MaxWordCoord [1]){
        cout << a[MaxWordCoord [0]];
        MaxWordCoord [0]++;
    }


}
