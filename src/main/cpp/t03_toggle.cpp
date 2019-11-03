//Вводится один символ, измените его регистр. 
// То есть, если была введена строчная буква - сделайте ее заглавной и наоборот. 
// Символы, не являющиеся латинской буквой, нужно выводить без изменений.
//
//Входные данные
//
//Вводится единственый символ.
//
//Выходные данные
//
//Выведите ответ на задачу.
//
//Sample Input:
//
//b
//        Sample Output:
//
//B

#include "t03_toggle.h"
#include <iostream>
#include <string>

using namespace std;

int t03_toggle() {
            char ch;
            cin>>ch;
            if('A' <= ch and ch <= 'Z'){
                ch += 32;
                cout<<ch;
            } else if('a' <= ch and ch <= 'z'){
                ch -= 32;
                cout<<ch;
            } else {
                cout<<ch;
            }
}
