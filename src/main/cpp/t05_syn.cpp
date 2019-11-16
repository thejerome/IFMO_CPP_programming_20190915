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

int t05_syn() {
	int n = 0;
	std::string str1 = "", str2 = "";
	std::map<std::string, std::string> mp;

	std::cin >> n;

	for (int i = 0; i < n; ++i) {
		std::cin >> str1 >> str2;
		mp.emplace(str1, str2);
		mp.emplace(str2, str1);
	}

	std::cin >> str1;
	std::cout << mp[str1];

	return 0;
}
