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
#include <ctype.h>

using namespace std;

int t03_toggle() {
char c;
cin >> c;
if (islower(c))
cout << char(toupper(c));
else if (isupper(c))
cout << char(tolower(c));
else cout << c;
    return 0;
};
