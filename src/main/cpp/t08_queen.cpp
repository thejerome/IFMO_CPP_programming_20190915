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

int doska[10];
bool check(int q, int w, int e) {
    if (e == q) return true;
    else return doska[e] != w && (q - e) != (w - doska[e]) && (q - e) != (doska[e] - w) && check(q, w, e + 1);
}

int ferz(int n, int i, int j) {
    if (i == n) return 1;
    else {
        if (j < n) {
            int Q = 0;
            if (check(i, j, 0)) {
                doska[i] = j;
                Q = ferz(n, i + 1, 0);
            }
            return Q + ferz(n, i, j + 1);
        }
        else return 0;
    }
}
int t08_queen(){
    int N;
    cin >> N;
    cout << ferz(N, 0, 0);
    return 0;
}
