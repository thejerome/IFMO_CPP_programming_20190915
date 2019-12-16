//Дана строка, содержащая пробелы. 
// Найдите, сколько в ней слов 
// (слово – это последовательность непробельных символов, 
// слова разделены одним пробелом, первый и последний символ строки – не пробел).
//
//Входные данные
//
//На вход подается строка.
//
//Выходные данные
//
//Необходимо вывести количество слов в первой из введенных строк.
//
//Примечание
//﻿В этой задаче может быть полезен метод find с двумя параметрами. 
// Первый из них - искомая подстрока, второй - позиция, начиная с которой нужно искать первое вхождение.
//Sample Input:
//
//In the town where I was born
//Sample Output:
//
//7

#include "t04_count.h"
#include <iostream>
#include <string>

using namespace std;

int t04_count() {
	string s;
	getline(cin, s);
	int n, k = -1, l = 0;
	while (1) {
		n = s.find(" ", k + 1);
		if (!(n + 1)) break;
		if (n - k > 1) l++;
		k = n;
	}
	if (s[s.length() - 1] != ' ') l++;
	cout << l;
	return 0;
}
