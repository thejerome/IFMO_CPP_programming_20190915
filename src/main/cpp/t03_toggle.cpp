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
  char s;
    std::cin >> s;
    if (s <= 'z' && s >= 'a')
        std::cout << (char)(s + 'A' -'a');
    else if (s <= 'Z' && s >= 'A')
        std::cout << (char)(s + 'a' - 'A');
    else
        std::cout << s;
  return 0;

}
