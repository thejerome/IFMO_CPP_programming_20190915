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
#include <cmath>
#include <iomanip>
using namespace std;
int board[10];

bool check(int a, int b, int c) {
    if (c == a) return true;
    else return board[c] != b && (a - c) != (b - board[c]) && (a - c) != (board[c] - b) && check(a, b, c + 1);
}
int t08_queen() {
int put_queen(int n, int a, int b) {
    if (a == n) return 1;
    else {
        if (b < n) {
            int r = 0;
            if (check(a, b, 0)) {
                board[a] = b;
                r = put_queen(n, a + 1, 0);
            }
            return r + put_queen(n, a, b + 1);
        }
        else return 0;
    }
}

int main() {
    int n;
    cin >> n;
    cout << put_queen(n, 0, 0);
    return 0;
}
