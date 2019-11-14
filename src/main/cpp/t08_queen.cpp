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
int occupied[11][11];
int possessed[11][11];
int schet = 0, n;
void paint()
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (possessed[i][j] == 1)
			{
				int a = n - j,
					b = j,
					c = i;
				int endcor[4][2];
				endcor[0][0] = i - (a <= c ? a : c), endcor[0][1] = j + (a <= c ? a : c);
				endcor[1][0] = i - (b <= c ? b : c), endcor[1][1] = j - (b <= c ? b : c);
				for (int g = 0; g < n; g++)
				{
					occupied[i][g] = -1;
					occupied[g][j] = -1;
					if (endcor[0][0] <= g && endcor[0][1] >= 0)
					{
						occupied[g][endcor[0][1]] = -1;
						endcor[0][1]--;
					}
					if (endcor[1][0] <= g && endcor[1][1] < n)
					{
						occupied[g][endcor[1][1]] = -1;
						endcor[1][1]++;
					}
				}
			}
		}
	}
}
void clear()
{
	for (int h = 0; h < 11; h++)
		for (int e = 0; e < 11; e++)
			occupied[h][e] = 0;
}
void go(int x, int y)
{
	if (y == n - 1)
	{
		schet++;
		return;
	}
	possessed[x][y] = 1;
	paint();
	for (int i = 0; i < n; i++)
	{
		if (occupied[i][y + 1] == 0)
		{
			go(i, y + 1);
		}
		if (i == n - 1)
		{
			possessed[x][y] = 0;
			clear();
			paint();
			return;
		}
	}
}
int t08_queen() {
	cin >> n;
	for (int i = 0; i < n; i++)
		go(i, 0);
	cout << schet;
}
