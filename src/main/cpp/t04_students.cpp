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
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int t04_students() {
	struct stud
	{
		string x;
		string y;
		int r;
		int n;
	};
	vector<stud> s;
	int n = 0, p1 = 0, p2 = 0, p3 = 0, c = 0;
	string f, l;
	cin >> n;
	stud p;
	for (int i = 0; i < n; i++)
	{
		s.push_back(p);
		cin >> f >> l >> p1 >> p2 >> p3;
		s[i].x = f;
		s[i].y = l;
		s[i].r = p1 + p2 + p3;
		s[i].n = c++;
	}
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < n - 1; j++)
		{
			if (s[j].r < s[j + 1].r) { swap(s[j], s[j + 1]); }
		}
	}

	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < n - 1; j++)
		{
			if (s[j].r == s[j + 1].r && s[j].n > s[j + 1].n) { swap(s[j], s[j + 1]); }
		}
	}
	
	for (int i = 0; i < n; i++) { cout << s[i].x << " " << s[i].y << " "; }
}

