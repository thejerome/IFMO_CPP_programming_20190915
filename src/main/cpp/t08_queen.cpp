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

void update(int n, int** a, int x, int y, int u) {
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			if (i == x || j == y || x + y == i + j || x - y == i - j)
				a[i][j] += u;
}

int t08_queen(int n, int** a, int i = 0) {
	int combos = 0;
	for (int j = 0; j < n; j++) {
		if (!a[i][j]) {
			if (n - i - 1) {
				update(n, a, i, j, 1);
				a[i][j] = -1;
				combos += ferz(n, a, i + 1);
			}
			else {
				combos++;
				break;
			}
		}
	}
	if (i)
		for (int j = 0; j < n; j++)
			if (a[i - 1][j] == -1) {
				update(n, a, i - 1, j, -1);
				a[i - 1][j] = 0;
				break;
			}
	return combos;
}

int main() {
	int n = 0;
	cin >> n;
	int** a = new int* [n];
	for (int i = 0; i < n; i++) {
		a[i] = new int[n];
		for (int j = 0; j < n; j++)
			a[i][j] = 0;
	}
	cout << ferz(n, a);
	for (int i = 0; i < n; i++)
		delete[] a[i];
	delete[] a;
	return 0;
}
