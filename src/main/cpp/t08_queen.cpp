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

using namespace std;

int board[10][10] = { 0 };
int res = 0, n = 0;

void SQueen(int i, int j)
{
	for (int x = 0; x < n; ++x)
	{
		++board[x][j];
		++board[i][x];
		int f = j - i + x;
		if (f >= 0 && f < n) { ++board[x][f]; }
		f = j + i - x;
		if (f >= 0 && f < n) { ++board[x][f]; }
	}
}

void DQueen(int i, int j)
{
	for (int x = 0; x < n; ++x)
	{
		--board[x][j];
		--board[i][x];
		int f = j - i + x;
		if (f >= 0 && f < n) { --board[x][f]; }
		f = j + i - x;
		if (f >= 0 && f < n) { --board[x][f]; }
	}
}

void Q(int t)
{
	for (int i = 0; i < n; i++)
	{
		bool set = false;
		if (board[i][t] == 0 && t != n - 1) { SQueen(i, t); set = true; Q(t + 1); }
		if (board[i][t] == 0 && t == n - 1) { res++; }
		if (set) { DQueen(i, t); }
	}

}

int t08_queen()
{
	cin >> n;
	Q(0);
	cout << res;
}
