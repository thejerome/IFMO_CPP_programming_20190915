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
    int n=s.size();
    int i=-1;
    int h=s.find(' ',i+1);
    int m=h-i;
    int ind=i;
    for(i=s.find(' ',i+1);i<n && i>=0;i=s.find(' ',i+1)){
        h=s.find(' ',i+1);
        if(h==-1)
            h=n+1;
        if(h-i>m) {
            m = h - i;
            ind =i;
        }
    }
    cout<<s.substr(ind+1,s.find(' ',ind+1)-ind);
    return 0;
}
