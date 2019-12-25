//Вам дан словарь, состоящий из пар слов. 
// Каждое слово является синонимом к парному ему слову. 
// Все слова в словаре различны. 
// Для одного данного слова определите его синоним.
//
//Входные данные
//
//Программа получает на вход количество пар синонимов N. 
// Далее следует N строк, каждая строка содержит ровно два слова-синонима. 
// После этого следует одно слово.
//
//Выходные данные
//
//Программа должна вывести синоним к данному слову.
//
//Sample Input:
//
//3
//Hello Hi
//Bye Goodbye
//List Array
//Goodbye
//
//Sample Output:
//
//Bye

#include "t05_syn.h"
#include <iostream>
#include <string>
#include <map>

using namespace std;

int t05_syn() {
    int n;
    std::string s1, s2, s3;
    std::map <std::string, std::string> m1;
    
    std::cin >> n;
    while(n > 0){
        std::cin >> s1;
        std::cin >> s2;
        m1[s1] = s2;
        m1[s2] = s1;
        n--;
    }
    std::cin >> s3;
    std::cout << m1[s3];
  return 0;

}
