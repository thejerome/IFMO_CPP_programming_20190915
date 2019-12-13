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
  string s;
    getline (cin, s);
    s = s + " ";
    int count,max, c; 
     max = 0;
     count = 0;
     c = s.length();
    string a = "";
    string result = "";
    for (int i = 0; i < c; i++)
        if ((s[i] != ' '))
        {
            a = a + s[i];
            count++;
        }
        else
        {
            if (count > max)
            {
                result = a;
                max = count;
            }
            a = "";
        }
    cout << result;
    return 0;
}
