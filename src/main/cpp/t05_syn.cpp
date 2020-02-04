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
#include <map>
#include <string>

using namespace std;

int t05_syn() {

	int a;
	cin >> a;
	string f, s;
	map  <string, string> tic;
	map  <string, string> tac;
	for (int i = 0; i < a; i++)
	{
		cin >> f >> s;
		/*tic.insert(make_pair(f, s));
		tac.insert(make_pair(s,f));*/
		tic[f] = s;
		tac[s] = f;



	}
	string l; cin >> l;
	auto it1 = tic.find(l);

	map <string, string>::iterator it;
	if ((it1 = tic.find(l)) != tic.end())
	{

		cout << it1->second;
	}
	auto it2 = tac.find(l);
	if ((it2 = tac.find(l)) != tac.end())
	{

		cout << it2->second;
	}

	/*auto it = tic.find(l);
	auto it = tac.find(l);
	if (it != tic.end())
		cout << it->second;
	if (it != tac.end())
		cout << it->second;*/

		/*3
		Hello Hi
		Bye Goodbye
		List Array
		Goodbye*/

}
