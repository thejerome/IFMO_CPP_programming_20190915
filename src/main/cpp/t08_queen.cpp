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
int c = 0;
void solutiuon(int n, int noh, int *pis) {
    if (noh == n) {
    ++c;
    return;
    }
    for (int i = 0, j = 0; i < n; i++) {
        for (j = 0; j < noh && !attack(i, j); j++);
        if (j < noh) continue;
        pis[noh] = i;
        solve(n, noh + 1, pis);
    }
}
int t08_queen(){
    int main() {
    int n;
    std::cin >> n;
    int pis[n];
    solutiuon(n, 0, pis);
    std::cout << c;
    return 0;
}
