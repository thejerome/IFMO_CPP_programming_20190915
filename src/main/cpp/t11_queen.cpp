//Известно, что на доске 8×8 можно расставить 8 ферзей так, чтобы они не били друг друга. Вам дана расстановка 8 ферзей на доске, определите, есть ли среди них пара бьющих друг друга.
//Формат входных данных
//
//        Программа получает на вход восемь пар чисел, каждое число от 1 до 8 - координаты 8 ферзей.
//Формат выходных данных
//        Если ферзи не бьют друг друга, выведите слово NO, иначе выведите YES.
//Sample Input 1:
//
//1 7
//2 4
//3 2
//4 8
//5 6
//6 1
//7 3
//8 5
//Sample Output 1:
//
//NO
//        Sample Input 2:
//
//1 8
//2 7
//3 6
//4 5
//5 4
//6 3
//7 2
//8 1
//Sample Output 2:
//
//YES

#include "t11_queen.h"
#include <iostream>
#include <cmath>
using namespace std;
int t11_queen() {
	const int eight = 8;
	int RUN[80];
	int a[8];
	int b[8];
	bool nah = false;
	for (int i = 0; i < eight; i++)
	{
		int line, row;
		cin >> line >> row;
		a[i] = line;
		b[i] = row;
	}
	for (int i = 0; i < eight; i++)
	{
		int pos = (a[i] - 1) * eight + (b[i] - 1);
		int turns_[4] = { a[i] - 1 >= b[i] - 1 ? b[i] - 1 : a[i] - 1,eight - a[i] >= eight - b[i] ? eight - b[i] : eight - a[i],a[i] - 1 >= eight - b[i] ? eight - b[i] : a[i] - 1, eight - a[i] >= b[i] - 1 ? b[i] - 1 : eight - a[i] };
		RUN[pos] = -1;
		for (int j = 0; j < 4; j++)
		{
			int count = 1;
			while (turns_[j] > 0)
			{
				if (j == 0)
				{
					if (RUN[pos - 9 * count] == -1)
					{
						nah = true;
						break;
					}
				}
				else if (j == 1)
				{
					if (RUN[pos + 9 * count] == -1)
					{
						nah = true;
						break;
					}
				}
				else if (j == 2)
				{
					if (RUN[pos - 7 * count] == -1)
					{
						nah = true;
						break;
					}
				}
				else if (j == 3)
				{
					if (RUN[pos + 7 * count] == -1)
					{
						nah = true;
						break;
					}
				}
				turns_[j]--;
				count++;
			}
		}
	}
	if (nah==true)
		cout << "YES";
	else
		cout << "NO";
}
