//По введенному символу определите, является ли он цифрой.
//
//Входные данные
//
//Вводится единственый символ.
//
//Выходные данные
//
//Выведите "yes", если символ является цифрой и "no" в противном случае. 
// Обратите внимание, что слова нужно выводить маленькими буквами.
//
//Sample Input 1:
//
//1
//Sample Output 1:
//
//yes
//
//Sample Input 2:
//
//a
//Sample Output 2:
//
//no

#include "t01_char.h"
#include <iostream>


using namespace std;

int t01_char() {
char c;
    c=cin.get();
    switch (c) {
        case '0':
        case '1':
        case '2':
        case '3':
        case '4':
        case '5':
        case '6':
        case '7':
        case '8':
        case '9':cout << "yes"; break;
        default:cout << "no"; break;
    }
 return 0;
};
