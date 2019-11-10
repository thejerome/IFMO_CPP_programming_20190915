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


using namespace std;

int t06_longest() {
#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main() {
  string s, x;
    int i, n = 0, len, word = 0, maxl = 0, begcount = 0, encount = 0;
    getline(cin, s);
    s = ' ' + s + ' ';
    len = s.size();
    for (i = 0; i < len - 1; i++) {
      if (s[i] == ' ' && s[i+1] != ' ') {
          word++;
      }
    }
    vector <int> beg(word);
    vector <int> en(word);
    
      for (i = 0; i < len - 1; i++) {
      if (s[i] == ' ' && s[i+1] != ' ') {
         beg[begcount] = i + 1;
         begcount++;
      }
      if (s[i] != ' ' && s[i+1] == ' ') {
         en[encount] = i;
         encount++;
      }   
    }
 vector <int> length(word);
    for (i = 0; i < word; i++) {
        length[i] = en[i] - beg[i] + 1;
    }
   maxl = length[0];
    for (i = 1; i < word; i++) {
        if (length[i] > maxl) {
            maxl = length[i];
            n = i;
        }
    }
   for (i = beg[n]; i <= en[n]; i++) {
      cout << s[i];
   }
  return 0;
}
