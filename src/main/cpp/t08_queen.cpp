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

int k = 0;
void ferz (int n, int j, bool* a, bool* b, bool* c) {
    for (int i = 0; i < n; i++) {
        if (!a[i] && !b[i + j] && !c[n + i - j]) {
            a[i] = true;
            b[i + j] = true;
            c[n + i - j] = true;
            if (j < n - 1) {
                ferz(n, j + 1, a, b, c);
            }
            else
                k++;
            a[i] = false;
            b[i + j] = false;
            c[n + i - j] = false;
        }
    }
}
int t08_queen(){
    int n;
    cin >> n;
    bool a[n], b[2 * n - 1], c[2 * n - 1];
    for (int i = 0; i < n; i++) {
        a[i] = false;
    }
    for (int i = 0; i < 2 * n - 1; i++) {
        b[i] = false;
        c[i] = false;
    }
    ferz(n, 0, a, b, c);
    cout << k;
    return 0;
}
