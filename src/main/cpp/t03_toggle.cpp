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
    cin >> c;
    if ( c >= 'a' && c <= 'z') {
      c = c - 'a' + 'A';
    }
     
    else  if ( c >= 'A' && c <= 'Z') {
      c = c - 'A' + 'a';
    }
    cout << c;
  return 0;
}
