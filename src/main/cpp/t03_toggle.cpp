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
    char s1,s2;
    cin >> s1;
    if (s1>='a' && s1<='z') {
        int diff=s1-'a';
        s2='A'+diff;
        cout << s2;
    } else if (s1>='A' && s1<='Z') {
        int diff = s1 - 'A';
        s2 = 'a' + diff;
        cout << s2;
    } else cout << s1;
}
