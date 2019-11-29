//Выведите все исходные точки в порядке возрастания их расстояний от начала координат.
//
//Входные данные
//
//Программа получает на вход набор точек на плоскости. 
// Сначала задано количество точек n, затем идет последовательность из n строк,
// каждая из которых содержит два числа: координаты точки. 
// Величина n не превосходит 100, все исходные координаты – целые числа, не превосходящие 10^3.
//
//Выходные данные
//
//Необходимо вывести все исходные точки в порядке возрастания их расстояний от начала координат.
//
//Sample Input:
//
//2
//1 2
//2 3
//Sample Output:
//
//1 2
//2 3

#include "t03_points.h"
#include <iostream>
#include <map>
#include <cmath>
#include <string>
#include <algorithm>
using namespace std;
bool cmp12(int a1, int a2)
{
	return a1 < a2;
}
int t03_points() {
	multimap<double, string> mm;
	int n, ba[12001];
	cin >> n;
	sort(ba, ba + n);
	for (int i = 0; i < n; i++)
	{
		int x, y;
		cin >> x >> y;
		char jh[101];
		sprintf(jh, "%d %d", x, y);

		mm.insert(make_pair(sqrt(x * x + y * y), jh));
	}
	for (auto i : mm)
	{
		string numb = "";
		int h = -1;
		do
		{
			h++;
			if (i.second[h] != ' ' && i.second[h] != '\0')
			{
				numb += i.second[h];
			}
			else
			{
				if (i.second[h] == '\0')
					cout << " ";
				cout << stoi(numb);
				numb = "";
			}
		} while (i.second[h] != '\0');
		cout << '\n';
	}
}
