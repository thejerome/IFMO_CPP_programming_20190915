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
string s;
getline(cin,s);
int c=0;
int max=0;
int n=s.length();
string word, maxword;
for (int i=0; i<n;i++){
    if (s[i] !=' '){
        c++;
        word=word+s[i];
    }
    else {
        if (c>max) {
            max=c;
            maxword=word;
        };
        c=0;
        word="";
    };
};
if (max>c) cout <<maxword;
else cout <<word;
}
