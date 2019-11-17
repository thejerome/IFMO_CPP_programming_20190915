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


int X[10], D1[20], D2[20];
int N, sum;

void queens(int y) {
    for (int x = 0; x < N; x++)
        if (!X[x] && !D1[x + y] && !D2[x - y + N])
            if (y == 0)
                sum += 1;
            else {
                X[x] =  D1[x + y] = D2[x - y + N] = 1;
                queens(y - 1);
                X[x] =  D1[x + y] = D2[x - y + N] = 0;
            }
}


int t08_queen(){
    cin >> N;
    queens(N - 1);
    cout << sum;
    return 0;
}
