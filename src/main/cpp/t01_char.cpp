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
    string num("0123456789");
    bool tr = false;
    char ch;
    cin >>ch;
    for (int i=0; i < 10; i++){
        if (num[i]  == ch){
            tr = true;
        }
    }
    if (tr){
        cout <<"yes";
    } else {
        cout <<"no";
    }
    return 0;
}
