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
	getline(cin, s);
	int a = s.length();
	int count = 0;
	int max = 0;
	int nach = 0;
	int con = 0;
	int mnach = 0;
	int mcon = 0;
	for (int i = 0; i < a+1; i++)
	{
		if ((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z'))
		{
			if (count == 0) { nach = i; }
			count++;
			con = i;
		}
		else {

			if (count > max)
			{
				max = count;
				mnach = nach;
				mcon = con;
			}
			count = 0;
			nach = 0;
			con = 0;
		}
	}
	for (int i = mnach; i <= mcon; i++)
	{
		cout << s[i];
	}
//	cout << max;
}
