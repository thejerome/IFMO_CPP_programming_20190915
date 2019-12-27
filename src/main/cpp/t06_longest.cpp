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

    string x;
    getline(cin, x);
    double s=0, f=0, z=0;
    for (int i=0;i<x.size();i++){
        if (x[i]!=' '){
            s++;
        }
        if (x[i+1]==' '||i+1>=x.size()){
            if (s > f){
                f=s;
                z = i-s;}
            s=0; }
    }
    int k1=z+1,k2=1+f+z;
    for (;k1<k2;k1++){
        cout<<x[k1];
    }
    return 0;

}
