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

bool occuped[10][10];

int variants (int n, int column) {
    int count = 0;

    for (int i = 0; i < n; i++) {

        bool ColoumnMark = true;

        for (int j = 0; j < n; j++)
            if (occuped[i][j]) ColoumnMark = false;

        int step = 0;
        while ((i >= step) && (column >= step)) {
            if (occuped[i - step][column - step]) ColoumnMark = false;
            step++;
        }

        step = 0;
        while ((i + step < n) && (column >= step)) {
            if (occuped[i + step][column - step]) ColoumnMark = false;
            step++;
        }

        if (ColoumnMark) {
            if (column == n - 1) count++;
            occuped[i][column] = true;

            count += variants(n, column + 1);
            occuped[i][column] = false;
        }
    }
    return count;
}

int t08_queen(){

    int n;
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++)
            occuped[i][j] = false;

    }
    cin >> n;

    cout << variants(n, 0);

    return 0;
}
