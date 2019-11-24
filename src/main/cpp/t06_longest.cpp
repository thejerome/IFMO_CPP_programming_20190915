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
    string str;
    getline(cin, str);
    int sz=str.size();
    int max=0, maxa=0, inmax=0;
    for (int i=0; i<sz; i++){
        if (str[i] != ' '){
            max++;
        }
        if ((str[i+1] == ' ') or (i+1 >= sz)){
            if (max > maxa){
                maxa=max;
                inmax = i-max;
            }
            max =0;
        }
    }
    for (int i=inmax; i<(inmax+maxa+1); i++){
        cout <<str[i];
    }
    return 0;
}
