//Выведите фамилии и имена учащихся в порядке убывания их среднего балла.
//
//Входные данные
//
//Заданы сначала количество учащихся n, затем n строк, 
// каждая из которых содержит фамилию, имя и три числа 
// (оценки по трем предметам: математике, физике, информатике). 
// Данные в строке разделены одним пробелом. 
// Оценки принимают значение от 1 до 5.
//
//Выходные данные
//
//Необходимо вывести пары фамилия-имя по одной на строке, разделяя фамилию и имя одним пробелом. 
// Выводить оценки не нужно. 
// Если несколько учащихся имеют одинаковые средние баллы, 
// то их нужно выводить в порядке, заданном во входных данных.
//
//Sample Input:
//
//3
//Markov Valeriy 5 5 5
//Sergey Petrov 1 1 1
//Petrov Petr 3 3 3
//Sample Output:
//
//Markov Valeriy
//Petrov Petr
//Sergey Petrov

#include "t04_students.h"
#include <iostream>
#include <map>
#include <string>
#include <algorithm>
using namespace std;

int t04_students() {
	int n;
	map<double, string> m;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		bool snums = false;
		char h[242424];
		string  name = "", nums = "";
		int g = -1;
		cin.ignore();
		cin.get(h, 25252);
		do
		{
			g++;
			if ((int)h[g] > 48 && (int)h[g] < 54)
			{
				snums = true;
			}
			if (snums)
			{
				nums += h[g];
			}
			else if ((int)h[g + 1] > 48 && (int)h[g + 1] < 54 && snums == false)
				continue;
			else if (snums == false)
			{
				name += h[g];
			}
		} while (h[g] != '\0');
		char h1 = nums[0], h2 = nums[2], h3 = nums[4];
		int a1 = h1 - '0';
		nums[0] = ' ';
		int a2 = h2 - '0';
		nums[2] = ' ';
		int a3 = h3 - '0';
		nums[4] = ' ';
		m.insert(make_pair((a1 + a2 + a3) / 3, name));
	}
	for (map<double, string>::iterator it = m.end(); it != m.begin();)
	{
		--it;
		cout << it->second << '\n';
	}
}

