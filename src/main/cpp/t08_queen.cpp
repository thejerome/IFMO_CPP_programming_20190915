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

int desk[10];

bool proverka(int q, int w, int e) {
    if (e == q) return true;
    else return desk[e] != w && (q - e) != (desk[e] - w) && (q - e) != (w - desk[e]) && proverka(q, w, e + 1);
}

int put_queen(int A, int q, int w) {
    if (q == A) {
        return 1;
    }
    else {
        if (w < A) {
            int r = 0;
            if (proverka(q, w, 0)) {
                desk[q] = w;
                r = put_queen(A, q + 1, 0);
            }
            return r + put_queen(A, q, w + 1);
        }
        else {
            return 0;
        }
    }
}

int t08_queen() {
    int A;
    cin >> A;
    cout << put_queen(A, 0, 0);
    return 0;
}
