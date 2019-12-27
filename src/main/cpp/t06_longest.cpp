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

	string string, string1, max;
	getline(cin, string);
	for (int i = 0; i < string.length(); i++) {
		if (string[i] != ' ') {
			string1 += string[i];
		}
		else {
			string1 = "";
		}
		if (string1.size() > max.size()) {
			max = string1;
		}
	}
	cout << max;
	return 0;
}
