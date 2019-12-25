//Найдите в данной строке самое длинное слово и выведите его.
//
//Входные данные
//
//Вводится одна строка. Слова в ней отделены одним пробелом.
//
//Выходные данные
//
//Выведите самое длинное слово. Если таких слов несколько, то выводить нужно, которое встречается раньше.
//
//Sample Input:
//
//Everyone of us has all we need
//Sample Output:
//
//Everyone

#include "t06_longest.h"
#include <iostream>
#include <string>

int t06_longest(){
  int n = 0;
  std::string si, abc, maxing;
  std::getline(std::cin, si);
  for (int i = 0; i < si.length(); i++) {
    if (isspace(si[i])) {
      if (abc.length() > maxing.length()) maxing = abc;
      abc.clear();continue;}
    abc += si[i];
  }
  if (maxing.length() < abc.length()) maxing = abc;
  std::cout << maxing;
  return 0;
}
