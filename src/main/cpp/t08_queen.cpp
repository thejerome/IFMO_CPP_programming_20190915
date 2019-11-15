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

vector< vector<int> > b(10);
int summ(int , int );

bool check(int x, int y,int k) {
    if (k == x) {
        return true;}
    else {
       return (b[k][1] != y) and (x - b[k][0]) != (y - b[k][1]) and (x - b[k][0]) != (b[k][1] - y) and check(x,y, k + 1);}
}

int change(int n, int x, int y) {
    if (y < n) {
        int k = 0;
        if (check(x, y,0)) {
            b[x][1]=y;
            k = summ(n, x + 1);}
        return k + change(n, x, y + 1);
    }
    return 0;
}

int summ(int n, int x) {
    if (x==n) {
        return 1;
    } else {
        return change(n, x, 0);
    }
}

int t08_queen(){
    int n;
    for (int i=0, size=b.size(); i<size; ++i){
        b[i].reserve(2);
        b[i][0]=i;}
    cin >> n;
    cout << summ(n, 0);
    return 0;
}
