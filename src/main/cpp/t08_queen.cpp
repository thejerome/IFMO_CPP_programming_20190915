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

const int N = 10;
bool used[N][N];

int amount(int n, int column) {
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        bool flag = true;
        for (int j = 0; j < n; j++)
            if (used[i][j]) flag = false;
        int add = 0;
        while (i - add >= 0 && column - add >= 0) {
            if (used[i - add][column - add]) flag = false;
            add++;
        }
        add = 0;
        while (i + add < n && column - add >= 0) {
            if (used[i + add][column - add]) flag = false;
            add++;
        }
        if (flag) {
            if (column == n - 1) cnt++;
            used[i][column] = true;
            cnt += amount(n, column +1);
            used[i][column] = false;
        }
    }
    return cnt;
}

int t08_queen(){
    int n;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++)
            used[i][j] = false;
    }
    cin >> n;
    cout << amount(n, 0);
    return 0;
}
