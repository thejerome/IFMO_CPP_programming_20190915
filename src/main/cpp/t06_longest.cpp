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
#include <locale>
#include <cstring>

using namespace std;

int t06_longest() {
string s;
int beq=0,max,lmax=-1,end,l;
while (getline(cin,s)){
    while (end = s.find(" ",beq) != string::npos){
        l=end-beq;
    if (l>lmax) {max=beq;
                lmax=l;}
    beq=end+1;
}
};
    cout << l;
    return 0;
};
