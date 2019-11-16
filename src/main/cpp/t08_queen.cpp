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
int coord_x[10], coord_y[10];
bool check(int x, int y, int col)
{
    if (x == col)
    {
        return 1;
    }
    else
    {
        return (coord_y[col] != y) && (abs(x - coord_x[col]) != abs(y - coord_y[col])) && check(x , y, col + 1);//строка и диагональ
    }
}
int skip(int n, int x, int y) //идем по столбцу
{
    if (y < n)
    {
        int count = 0;
        if (check(x, y, 0))
        {
            coord_y[x] = y;
            if ((x + 1) == n)
            {
                count = 1;
            }
            else
            {
                count = skip(n, x + 1, 0);
            }
        }
        return count + skip(n, x, y + 1);
    }
    return 0;

}


int t08_queen(){
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        coord_x[i] = i;
    }

    cout << skip(n, 0, 0);
    return 0;

}
