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

int first[10];
bool check(int I, int J, int K) {
if (K == I) return true;
else return first[K] != J && (I - K) != (J -first[K]) && (I - K) != (first[K] - J) && check(I, J, K + 1);
}
int second(int N, int I, int J) {
if (I == N) return 1;
else {
if (J < N) {int R = 0;
if (check(I, J, 0)) {first[I] = J;R = second(N, I + 1, 0);}
return R + second(N, I, J + 1);}
else return 0;}
}

int t08_queen(){
int N;
cin >> N;
cout << second(N, 0, 0);
return 0;
}

