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
#include <cmath>
#include <string>
#include <algorithm>
using namespace std;

int t04_students() {
	int n,p=0;
	double order1[23];
	multimap<double, string> m;
	string ah,order2[20];
	cin >> n;
	getline(cin, ah);
	for (int i = 0; i < n; i++)
	{
		bool snums = false;
		string s2 = "",h="";
		string  name = "", nums = "";
		long long g = -1,ngh=0;
		while (ngh!=3)
		{
			if ((int)ah[p] > 48 && (int)ah[p] < 54)
				ngh++;
			s2 += ah[p];
			p++;
		}
		h = s2;
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
			else if (((int )h[g + 1] > 48 && (int)h[g + 1] < 54 && snums == false )&& (g+1)<h.length())
				continue;
			else if (snums == false)
			{
				name += h[g];
			}
		} while (h[g] != '\0');
		char h1 = nums[0], h2 = nums[2], h3 = nums[4];
		double a1 = h1 - '0';
		double a2 = h2 - '0';
		double a3 = h3 - '0';
		order2[i] = name;
		order1[i] = (a1 + a2 + a3) / 3;
		m.insert(make_pair((a1 + a2 + a3) / 3, name));
	}
	int h = 0;
	for (multimap<double, string>::iterator it = m.end(); it != m.begin();)
	{
		double a1 = 0, a2 = 0;
		--it;
		if (h <= n - 2)
		{
			a1 = (--it)->first;
			++it;
		}
		if (h != 0)
		{
			a2 = ((++it)->first);
			--it;
		}
		if ((h == 0 && (it->first == a1)) ||
			(h <= n - 2 && h != 0 && (it->first == a2)) ||
			(h <= n - 2 && h != 0 && (it->first == a1)) ||
			(h == n - 1 && (it->first == a2)))
		{
			int i = 0;
			while (1)
			{
				if (order2[i] != "jh" && fabs(order1[i] - it->first)<0.00001)
				{
					cout << order2[i];
					order2[i] = "jh";
					break;
				}
				i++;
			}
		}
		else
		{
			cout << it->second;
		}
		if (h != n - 1)
			cout << '\n';
		h++;
	}
}

