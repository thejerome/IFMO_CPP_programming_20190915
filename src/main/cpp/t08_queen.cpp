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

int doskaNN[10];

bool check(int i, int j, int k) {
    if (k == i){
        return true;
    }
    return doskaNN[k] != j && (i - k) != (j - doskaNN[k]) && (i - k) != (doskaNN[k] - j) && check(i, j, k + 1);
}

int IsSvobodnoyeMestechko(int n, int i, int j) {
    if (i == n){
        return 1;
    }
    else {
        if (j < n) {
            int count = 0;
            if (check(i, j, 0)) {
                doskaNN[i] = j;
                count = IsSvobodnoyeMestechko(n, i + 1, 0);
            }
            return count + IsSvobodnoyeMestechko(n, i, j + 1);
        }
        return 0;
    }
}
int t08_queen(){
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        doskaNN[i] = 0;
    }
    
    cout << IsSvobodnoyeMestechko(n, 0, 0) << endl;
    return 0;
}