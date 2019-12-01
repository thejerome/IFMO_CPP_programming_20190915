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

bool desk[10][10];
int n = 0;

bool check(int x, int y){
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if (((x - i == y - j) || (x - i == j - y) || (x == i) || (y == j)) && desk[i][j])
                return false;
    return true;



}

int new_q(int x){
    if (x == n) return 1;
    int count = 0;
    for (int j = 0; j < n; j++){
        if(check(x,j)){
            desk[x][j] = true;
            //cout << x << " " << j << endl;
            count += new_q(x + 1);
            desk[x][j] = false;
        }
    }
    return count;

}

int t08_queen(){
    cin >> n;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            desk[i][j] = false;

    cout << new_q(0);

    return 0;
}
