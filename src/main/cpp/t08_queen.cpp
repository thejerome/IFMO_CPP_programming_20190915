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
int i[10], j[10];

bool check(int l, int x, int y) {
    if (x == l)
        return x == l;
    else
        return (abs(x - i[l]) != abs(y - j[l])) && (j[l] != y) && check(l + 1, x, y);
}

int count(int n, int x, int y) {
    if (n > y) {
        int cnt = 0;
        if (check(0, x, y)) {
            j[x] = y;
            cnt = (x == (n - 1) ? 1 : count(n, x + 1, 0));
        }
        return count(n, x, y + 1) + cnt;
    }
    return 0;
}
int t08_queen(){
    int n;
    cin >> n;
    for (int k = 0; k < n; k++) i[k] = k;
    cout << count(n, 0, 0);
    return 0;
}
