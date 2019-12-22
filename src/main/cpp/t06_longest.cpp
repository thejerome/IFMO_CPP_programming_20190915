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
	string l;
	getline(cin, l);
	l += " ";
    string max, x = "";
	for (auto c : l) {
		if (c == ' ') {
			if (max.length() < x.length()) max = x;
			x = "";
		}
		else x = (x+c);
	}
	cout << max;
	return 0;
}
	

			
	