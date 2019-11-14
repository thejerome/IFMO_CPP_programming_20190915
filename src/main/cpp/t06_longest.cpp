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
	string lastword = "", result = "";
	char h[450];
	cin.getline(h, 450);
	for (int i = 0; i <= ((string) h).size(); i++)
	{
		if (h[i] != ' ' && i != ((string)h).size())
			lastword += h[i];
		else if (result.size() < lastword.size())
			result = lastword;
		if (h[i] == ' ')
			lastword = "";
	}
	cout << result;
}
