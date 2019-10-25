//Дано число N. Определите, сколькими способами можно расставить на доске N×N N ферзей, не бьющих друг друга.
//
//Формат входных данных
//        Задано единственное число N. (N ≤ 10)
//
//Формат выходных данных
//        Выведите ответ на задачу.
//Подсказка
//        Напишите рекурсивную функцию, которая пытается поставить ферзя в очередной столбец. 
// Если на эту клетку ставить ферзя нельзя (он бьет предыдущих), 
// то такой вариант даже не стоит рассматривать. 
// Когда вы успешно поставили ферзя в последний столбец - увеличивайте счетчик.
//Sample Input:
//
//8
//Sample Output:
//
//92

#include <iostream>
#include <vector>

using namespace std;


int fun(int n, int c, int a[10])
{
	if (c == n - 1)
	{
		int s = 0;
		for (int i = 0; i < n; i++)
		{
			bool x = true;
			for (int j = 0; j < c; j++)
			{
				if (abs(j - c) == abs(a[j] - i) || i == a[j])
				{
					x = false;
					break;
				}
			}
			if (x)s++;
		}
		return s;
	}
	else
	{
		int s = 0;
		for (int i = 0; i < n; i++)
		{
			bool x = true;
			for (int j = 0; j < c; j++)
			{
				if (abs(j - c) == abs(a[j] - i) || i == a[j])
				{
					x = false;
					break;
				}
			}
			if (x)
			{
				a[c] = i;
				s += fun(n, c + 1, a);
			}
		}
		return s;
	}
}

int t08_queen() {
	int n, a[10];
	cin >> n;
	cout << fun(n, 0, a);
	return 0;
}
