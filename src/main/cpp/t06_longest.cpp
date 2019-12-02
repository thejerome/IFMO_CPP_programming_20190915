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

int t06_longest() {
    string currentw = "", resw = "";
    string a;
    getline(cin, a);
    for (int i = 0; i <= a.length(); i++)
    {
        if (a[i] != ' ' && i != a.length())
        {
            currentw += a[i];
        }
        else if (currentw.length() > resw.length())
        {
            resw = currentw;
        }
        if (a[i] == ' ')
        {
            currentw = "";
        }
        
        
    }
    cout << resw << endl;
    return 0;
}
