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
#include <cmath>

using namespace std;

int fun(int mas_y[], int j, int n)
{
    int count=0;
    for (int y=1; y<=n; y++)
    {
        bool state=true;  //можно поставить фигуру
        //проверяю y со всеми предыдущими коорд.
        for(int x=1; x<j; x++)
        {
            if ( mas_y[x-1]==y || abs(x-j)==abs(mas_y[x-1]-y) )
            {
                state= false;
                break;
            }
        }
        if (state)
        {
            if(j!=n)
            {
                //добавляю к координатам y
                mas_y[j-1]=y;
                count += fun(mas_y, j+1, n);
            }
            else
                count++;
        }
    }
    return count;
}

int ranking(int n)
{
    int mas_y[n]={};
    return fun(mas_y,1,n);
}

int t08_queen(){
    int n=0;
    cin>>n;
    cout<<ranking(n);

    return 0;
}
