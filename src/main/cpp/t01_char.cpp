//По введенному символу определите, является ли он цифрой.
//
//Входные данные
//
//Вводится единственый символ.
//
//Выходные данные
//
//Выведите "yes", если символ является цифрой и "no" в противном случае. 
// Обратите внимание, что слова нужно выводить маленькими буквами.
//
//Sample Input 1:
//
//1
//Sample Output 1:
//
//yes
//
//Sample Input 2:
//
//a
//Sample Output 2:
//
//no

#include "t01_char.h"
#include <iostream>
#include <string>


using namespace std;

int t01_char() {
    std::string s;
    s = "1234567890";
   std::string c;
    std::cin >> c;
    if (s.find(c) != std::string::npos)
        std::cout << "yes";
    else
        std::cout << "no";
  return 0;
}
