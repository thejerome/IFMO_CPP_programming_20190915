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
    char c;
    int n = 1;
    int max = 1;
    string maxW = "";
    string w = "";

    while(cin.get(c)){
        w += c;
        if(int(c) == 32){
            if(n > max){
                max = n;
                maxW = w;
            }
            n = 0;
            w="";
        }
        n++;
    }

    if(n > max){
        max = n;
        maxW = w;
    }

    cout << maxW;char c;
    int n = 1;
    int max = 1;
    string maxW = "";
    string w = "";

    while(cin.get(c)){
        w += c;
        if(int(c) == 32){
            if(n > max){
                max = n;
                maxW = w;
            }
            n = 0;
            w="";
        }
        n++;
    }

    if(n > max){
        max = n;
        maxW = w;
    }

    cout << maxW;

}
