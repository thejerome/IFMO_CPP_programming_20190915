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
char c;
cin >>c;
if(c >= 'a' and c <= 'z'){
    int add = c - 'a';
    c = 'A' + add;}
else {
    if(c >= 'A' and c <= 'Z'){
        int add = c - 'A';
        c = 'a' + add;};
}
cout << c;
return 0;
}
