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
    string text;
    string tp = "";
    string max = "";
    getline(cin, text);

    for(int i=0; i < text.length(); i++)
    {
        if(text[i] != ' ')
            tp += text[i];
        else
            tp = "";
        if(tp.length() > max.length())
            max=tp;
    }
    cout << max << endl;
   return 0;
}
