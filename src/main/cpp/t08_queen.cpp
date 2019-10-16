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

bool isCapture(int x1, int y1, int x2, int y2) {
    return ((x1 - x2 == y1 - y2) or (x1 - x2 == y2 - y1) or (y1 == y2));
}

int queen(int n, int c, int a[], int cnt) {
    if (c < n * 2) {
        int j;
        for (int i = 0; i < n * 2; i += 2){
            a[c + 1] = i / 2;
            j = c - 2;
            for (j; j > -1; j -= 2)
                if (isCapture(a[c], a[c + 1], a[j], a[j + 1]))
                    break;
            if (j == -2) {
                cnt = queen(n, c + 2, a, cnt);
            }
        }
    } else
        cnt += 1;
    return cnt;
}

int t08_queen(){
    
    int n;
    cin >> n;
    int a[n * 2];
    for (int i = 0; i < n; i ++)
        a[i * 2] = i;
    cout << queen(n, 0, a, 0);
    
    return 0;
}
