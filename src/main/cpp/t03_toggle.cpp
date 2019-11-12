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


using namespace std;

int t03_toggle() {
    string s;
    char c;
    getline(cin, s);
    string s2 = "";
    for (auto c : s) {
        if (c >= 'a' and c <= 'z') {
            int al_num = c - 'a';
            s2 += 'A' + al_num;
        } else {
            if (c >= 'A' and c <= 'Z') {
                int al_num = c - 'A';
                s2 += 'a' + al_num;
            } else {
                s2 += c;
            }
        }
    }
    cout << s2;
}
