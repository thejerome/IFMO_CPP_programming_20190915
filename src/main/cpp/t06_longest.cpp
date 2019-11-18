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


using namespace std;

int t06_longest()
{
    string s;
    getline (cin, s);
    s += " ";
    int max = 0;
    int count;
    count = 0;
    string s1 = "";
    string result = "";
    for (int i = 0; i < s.length(); i++)
        if ((s[i] != ' '))
        {
            s1 += s[i];
            count++;
        }

        else
        {
            if (count > max)
            {
                result = s1;
                max = count;
            }
            s1 = "";
            count = 0;
        }
    cout << result;
    return 0;
}
