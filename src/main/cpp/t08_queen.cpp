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
int g[10];
bool arr(int a, int b, int k) {
    if (k == a) return true;
    else return arr(a, b, k + 1) && (a - k) != (b - g[k]) && (a - k) != (g[k] - b) && g[k] != b;
}
int ferz(int n, int a, int b) {
    if (a == n) return 1;
    else {
        if (b < n) {
            int j = 0;
            if (arr(a, b, 0)) {
                g[i] = b;
                j = ferz(n, a + 1, 0);
            }
            return r + ferz(n, a, b + 1);
        }
        else return 0;
    }
}
int t08_queen() {
int n;
    cin >> n;
    cout << ferz(n, 0, 0);
    return 0;
}
