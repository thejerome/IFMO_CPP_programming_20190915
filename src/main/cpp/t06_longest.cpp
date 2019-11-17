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
    string word = "", max = "";
    char line[450];
    cin.getline(line, 450);
    for (int i = 0; i <= ((string) line).size(); i++){
        if (line[i] != ' ' && i != ((string)line).size())
            word += line[i];
        else if (max.size() < word.size())
            max = word;
        if (line[i] == ' ')
            word = "";
    }
    cout << max;
}
