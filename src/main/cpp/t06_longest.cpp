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
	string line, word, mword;
	getline(cin, line);
	int s = line.size();
	for(int i=0; i<s; i++)
	{
		if (line[i] != ' ') { word = word + line[i]; }
		if(i==s-1 || line[i] == ' ')
		{
			if (mword.size() < word.size()) { mword = word; }
			word.clear();
		}
	}
	cout << mword;
}
