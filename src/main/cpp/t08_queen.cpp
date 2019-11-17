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

int c = 0;

void place (int n, int j, bool* row, bool* v_diag, bool* n_diag)
{
    for (int i = 0 ; i < n ; i++)
    {
        if (!row[i] && !v_diag[i + j] && !n_diag[n + i - j])
        {
            row[i] = true;
            v_diag[i + j] = true;
            n_diag[n + i - j] = true;
            if (j < n - 1)
                place(n, j + 1, row, v_diag, n_diag);
            else
                c ++;
            row[i] = false;
            v_diag[i + j] = false;
            n_diag[n + i - j] = false;
        }
    }
}
int t08_queen(){
    int n;
    cin >> n;
    bool row[n], v_diag[2 * n - 1], n_diag[2 * n - 1];
    for (int i = 0 ; i < n ; i++)
    {
        row[i] = false;
    }
    for (int i = 0 ; i < 2 * n - 1 ; i++)
    {
        v_diag[i] = false;
        n_diag[i] = false;
    }
    place(n, 0, row, v_diag, n_diag);
    cout << c << endl;
    return 0;
}
