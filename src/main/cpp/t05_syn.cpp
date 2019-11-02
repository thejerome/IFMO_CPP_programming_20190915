//Вам дан словарь, состоящий из пар слов. 
// Каждое слово является синонимом к парному ему слову. 
// Все слова в словаре различны. 
// Для одного данного слова определите его синоним.
//
//Входные данные
//
//Программа получает на вход количество пар синонимов N. 
// Далее следует N строк, каждая строка содержит ровно два слова-синонима. 
// После этого следует одно слово.
//
//Выходные данные
//
//Программа должна вывести синоним к данному слову.
//
//Sample Input:
//
//3
//Hello Hi
//Bye Goodbye
//List Array
//Goodbye
//
//Sample Output:
//
//Bye

#include "t05_syn.h"
#include <iostream>
#include <vector>

using namespace std;

int t05_syn() {
	int n;
	cin >> n;
	string s;
	vector<vector<string>> dictionary(n, vector<string>(2));
	for (int i = 0; i < n; i++)
		cin >> dictionary[i][0] >> dictionary[i][1];
	cin >> s;
	for (int i = 0; i < n; i++)
	{
		if (dictionary[i][0] == s)
		{
			cout << dictionary[i][1];
			break;
		}
		else if (dictionary[i][1] == s)
		{
			cout << dictionary[i][0];
			break;
		}
	}
	return 0;
}
