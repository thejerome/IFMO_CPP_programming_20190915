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
#include <sstream>
#include <vector>
#include <string>


using namespace std;

int t06_longest() {
	string s; getline(cin, s);
	istringstream ss(s);
	vector<string> v;
	while (ss >> s) v.push_back(s);
	int j = v[0].size(), k = 0;
	for (int i = 1; i < v.size(); i++)
		if (v[i].size() > j) { j = v[i].size();  k = i; }
	cout << v[k];
	}
