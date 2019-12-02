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
    setlocale(LC_ALL,"Eng");

    char str[256];
    cin.getline(str,256);

    char* ptr=strtok(str," .,!?");
    char* high=ptr;

    do {
        if(strlen(high)<strlen(ptr))
            high=ptr;
    }
    while(ptr=strtok(NULL," .,!?"));

    cout<< high;

    return 0;
}
