//Найдите в данной строке самое длинное слово и выведите его.
//
//Входные данные
//
//Вводится одна строка. Слова в ней отделены одним пробелом.
//
//Выходные данные
//
//Выведите самое дgлинное слово. Если таких слов несколько, то выводить нужно, которое встречается раньше.
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
	int a = 0;
	int max = 0;
	int LastBidLet = 0;
	string s;
	getline(cin, s);
	for (int i = 0; i < s.length(); i++) {
		if (s[i] != ' ') {
			a++;
		}
		else {
			a = 0;
		}
		if (a > max) {
			max = a;
			LastBidLet = i + 1;
		}
	}
	for (int i = LastBidLet - max; i < LastBidLet; i++) {
		cout << s[i];
	}
	
	return 0;
}
