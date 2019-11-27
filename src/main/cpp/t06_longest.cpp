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
#include <algorithm>
#include <cstring>


using namespace std;

int t06_longest() {
	string s;
	getline(cin,s) >> s;
	int c = 0, max = 0, n = 0;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] != ' ') c++;
		else {
			if (c > max) {
				max = c;
				n = i - c;
			}
			c = 0;
		}
		if (c > max) {
			max = c;
			n = i - c;
		}
	}
	max += n;
	for (int i = n; i <= max; i++) {
		cout << s[i];
	}
	return 0;
}
			
	