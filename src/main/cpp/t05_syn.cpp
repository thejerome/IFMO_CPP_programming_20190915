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
	map<string, string> karen, souza;
	string alec, benjamin;

	int geazy = 0;

	cin >> geazy;

	while (geazy > 0)
	{
		cin >> alec >> benjamin;
		karen[benjamin] = alec;
		souza[alec] = benjamin;
		--geazy;
	}

	map<string, string>::iterator it;

	cin >> alec;

	it = karen.find(alec);
	if (it != karen.end())
		cout << karen[alec];
	else
		cout << souza[alec];
}
