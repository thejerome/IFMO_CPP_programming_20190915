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

std::string blabla(std::string line){
    int curr_len = 0;
    std::string max_word = "";
    std::string curr_word = "";
    int max_len = 0;
    for(int i =0; i < line.length(); i++){
        
        if (line[i] != ' '){
            curr_len++;
            curr_word += line[i];
        }
        else{
            if(curr_len > max_len){
                max_len = curr_len;
                max_word = curr_word;
            }
            curr_len = 0;
            curr_word = "";
        }
    }
    if(curr_len > max_len){
                max_len = curr_len;
                max_word = curr_word;
    }
    return max_word;
}
int t06_longest() {
  std::string line;
    std::getline(std::cin, line);
    std::cout << blabla(line);
  return 0;
}
