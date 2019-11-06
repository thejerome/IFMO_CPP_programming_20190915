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

vector <int> a(10);
int result(int , int );
bool check(int, int, int);
int check2(int, int, int);

bool check(int x, int y, int k=0) {
    if (k == x) {
        return 1;
    } else {
        return a[k] != y && (x - k) != (y - a[k]) && (x - k) != (a[k] - y) && check(x, y, k + 1);
    }
}

int check2(int n, int x, int y) {
    int k = 0;
    if (y < n) {
        if (check(x, y, 0)) {
            a[x] = y;
            k = result(n, x + 1);
        }
        return k + check2(n, x, y + 1);
    }
    return 0;
}

int result(int n, int x) {
    if (x==n) {
        return 1;
    } else {
        return check2(n, x, 0);
    }
}

int t08_queen() {
    int n;
    cin >> n;
    cout << result(n, 0);
    return 0;
}

