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
    int final=0;
    int check(int x=0, int y=0, int d=0)
    {
        if (x==d)
            final=1;
        else
            final=((coord_y[d] != y) and (abs(x - coord_x[d]) != abs(y - coord_y[d]))) and check(x, y, d + 1);

        return final;
    }
    int attack(int n=0, int x=0, int y=0)
    {
        if ((y < n) and n>0)
        {
            int count = 0;
            if (check(x, y))
            {
                coord_y[x] = y;
                if (((x + 1) == n) and final)
                    count = 1;
                else
                    count = attack(n, x+1);
            }
            return count + attack(n, x, y+1);
        }
        return 0;
    }

    int t08_queen() {
        int z;
        cin >> z;
        for (int i = 0; i < z; i++)
            coord_x[i] = i;
        cout << attack(z)<<endl;
    }