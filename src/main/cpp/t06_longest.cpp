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
#include <string>

using namespace std;

int t06_longest() {
    string s;
    getline(cin, s);
    int word_len=0;
    int max_word_len=0;
    string word;
    string max_word;

    for(int i=0; i<s.length(); i++){
        if(s[i]!=' '){
            word_len++;
            word+= s[i];

            if(i == s.length()-1){
                if(word_len>max_word_len){
                    max_word= word;
                }
            }
        }
        else{
            if(word_len>max_word_len){
                max_word_len= word_len;
                max_word= word;
            }
            word_len= 0;
            word= "";
        }

    }
    cout<<max_word;

}
