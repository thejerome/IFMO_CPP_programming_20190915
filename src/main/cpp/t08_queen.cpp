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
#include <iomanip>
#include <cmath>
using namespace std;
int count = 0;

void ferz(int x, int y, vector < vector <int> > a, int n) {  
	int j;
	if (a[y][x] == 0) {
		a[y][x] = 1; 
		for (j = 0; j < n; ++j) {
			if (a[y][j] == 0) {
				a[y][j] = 2;
			}
		}
		for (j = 0; j < n; ++j) {
			if (a[j][x] == 0) {
				a[j][x] = 2;
			}
        }
		for (j = 1; j < n + 1; ++j) {
			if (y + j < n && x + j < n) {
				if (a[y + j][x + j] == 0) {
					a[y + j][x + j] = 2;
				}
			}
			if (y - j >= 0 && x + j < n) {
				if (a[y - j][x + j] == 0) {
					a[y - j][x + j] = 2;
				}
			}
		}
        for (j = 0; j < n; ++j) {
			if (x + 1 >= n) {
				count++;
				break;
			}
			ferz(x + 1, j, a, n);
		}
	}
}

int t08_queen() {
    int n, i, j;
	cin >> n;
	vector < vector <int> > a(n, vector<int>(n));
	for (i = 0; i < n; ++i) {
		for (j = 0; j < n; ++j) {
			a[i][j] = 0; 
		}
	}
	for (i = 0; i < n; ++i) {
		ferz(0, i, a, n);
	}
    cout << count;
	return 0;
}
