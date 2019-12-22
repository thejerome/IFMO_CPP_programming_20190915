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
#include <sstream>

using namespace std;

int t06_longest() {
   std::string str;
    
    while ( std::cout << "String: " && std::getline(std::cin, str) && ! str.empty() ) {
        std::istringstream ist(str);
        std::string longest;
        
        ist >> longest;
        while ( ist >> str )
            if ( str.length() > longest.length() )
                longest = str;
        
        std::cout << "First longest word: " << longest << std::endl;
    }
    
    return 0;
}
