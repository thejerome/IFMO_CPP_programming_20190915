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
	string s;
	int b=0, mb;
	int max = 0;
	int c=0;
	getline(cin, s);
	s += ' ';
	for (int i = 0; i < s.size();i++) {
		if (s[i] != ' ')
			c += 1;
		else {
			if (c > max) {
				max = c;
				mb = b;
				
			}
			c = 0;
			b = i + 1;
			
		}
	}
	cout << s.substr(mb, max);
	return 0;
}
