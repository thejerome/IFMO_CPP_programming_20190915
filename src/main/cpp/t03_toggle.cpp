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
    char symb, symbol2;
    cin >> symb;
    if (symb >= 'a' && symb <= 'z') {
        char s2;
        int d = symb - 'a';
        symbol2 = 'A' + d;
        cout << symbol2;
    } 
    else if (symb >= 'A' && symb <= 'Z') {
        int d = symb - 'A';
        symbol2 = 'a' + d;
        cout << symbol;
    } 
  else{
    cout << symb;
  }
}

}
