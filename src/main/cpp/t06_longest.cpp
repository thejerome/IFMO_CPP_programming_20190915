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
	int len = 0;
	int max = 0;
	int pla = 0;
	string x;
	getline(cin, x);
	for (int i = 0; x[i] != '\0'; i++)
		if (x[i] == ' ') {
			if (len > max) {
				max = len;
				pla = i - max;
			}
			len = 0;
		}
		else
			len++;
	for (int i = 0; i < max; i++) {
		cout << x[pla + i];
	}
	return 0;
}
