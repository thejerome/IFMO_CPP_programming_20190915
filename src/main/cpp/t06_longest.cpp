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
    string w;
    string max_w;
    int temp_max = 0;
    while(cin>>w){
        if(w.length() >= temp_max)
            temp_max = w.length(); max_w = w;
    }
    cout<<max_w<<endl;
    return 0;
}
