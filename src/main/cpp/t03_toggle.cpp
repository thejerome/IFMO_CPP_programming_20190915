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
    char word;
    cin >> word;
    if ((int(word) >= 65)&&(int(word) <= 90)){
        cout << char(int(word)+32);
    }
    else if ((int(word) >= 97)&&(int(word) <= 122)){
        cout << char(int(word)-32);
    }
    else{
        cout << word;
    }
    return 0;
}
