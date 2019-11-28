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

using namespace std;

int t05_syn() {
	map<string,string> mmq;
	int h;
	cin >> h;
	for (int i = 0; i < h; i++)
	{
		string fwd,swd;
		cin >> fwd >> swd;
		mmq.insert(make_pair(fwd,swd));
		mmq.insert(make_pair(swd, fwd));
	}
	string lastword;
	cin >> lastword;
	cout << mmq.find(lastword)->second;
}
