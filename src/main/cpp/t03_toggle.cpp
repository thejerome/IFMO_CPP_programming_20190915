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
      char a;
    cin >> a;
    if ( a >= 'a' and a <= 'z' ) {
        cout << char (a-32) ;
        return 0;
    }
    if ( a >= 'A' and a <= 'Z') {
        cout << char (a+32) ;
        return 0;
        
    }
    else cout << a;
    return 0;
}
