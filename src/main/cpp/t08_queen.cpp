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
int function(int board[],int n, int r) {
    int counter=0;
    for (int y = 1; y <= n; y++){
        bool f;
        f =true;
        for(int x = 1; x < r; x++){
            if ((abs(x - r) == abs(board[x-1] - y)) || (board[x-1] == y)) {
                f = false;
                break;
            };
        };
        if (f) {
            if (r == n) {
                counter++;
            }
            else {
                board[r-1] = y;
                counter += function(board, n, r+1);
            };
        };
    };
    return counter;
};
int function2(int n) {
    int r;
    r = 1;
    int board[n];
    return function(board, n , r);
}

int t08_queen() {
    int n;
    cin >> n;
    cout << function2(n);
    return 0;
}