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

int queen(int, int);
const int N = 10;
int a[N][N];

int t08_queen(){
    int M, raw = 0;
    for (auto & i : a) {
        for (int & j : i) {
            j=0;
        }
    }
    cin >> M;
    cout << queen(M, raw);
    return 0;
}
int queen(int M, int raw) {
    int count = 0;
    bool check = true;
    for (int i = 0; i < M; ++i) {
        int x = 0;
        while ((check) && (((i-x) != -1) && ((raw-x) != -1))) {
            if (a[i - x][raw - x] == 0) {
                x++;
            } else {
                check = false;
            }
        }
        x = 0;
        while ((check) && (((x + i) != M) && ((raw - x) != -1))) {
            if (a[i + x][raw - x] == 0) {
                x++;
            } else {
                check = false;
            }
        }
        x = 0;
        while ((check) && (x != M)) {
            if ((a[i][x] == 0)&&(a[x][raw] == 0)) {
                x++;
            } else {
                check = false;
            }
        }
        if (check) {
            if (raw == M - 1) {
                count++;
            }
            a[i][raw] = 1;
            count = count + queen(M, raw + 1);
            a[i][raw] = 0;
        }
        check = true;
    }
    return count;
}