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
string b;
int a, k = 0, maxk = 0, maxi;
getline(cin, b);
a =  b.size();
for (int i = 0; i < a; i++)
{if (b[i] == ' ')
{if(k > maxk) {maxk = k; maxi = i - k;}
k = 0;

}
else{k++;}
}
if(k > maxk) {maxk = k; maxi = a - k;}
cout << b.substr(maxi, maxk);
}
