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
#include "t08_queen.h"

using namespace std;

int res =0;
bool a2[10][10] {false};
int i2[11];
int j2[11];

void func(int n, int ni, int nj, int num);
void func(int n, int ni, int nj, int num){
    i2[num] = ni;
    j2[num] = nj;
    if ((ni >= 0) and (nj >= 0)) {
        if (nj < n) {
            bool plc = true;
            for (int i = 1; i <= nj; i++) {
                if (a2[ni][nj - i]) {
                    plc = false;
                }
            }
            if (plc) {
                for (int i = 1; i <= ni; i++) {
                    if (a2[ni - i][nj]) {
                        plc = false;
                    }
                }
            }
            if (plc) {
                for (int i = 1; i <= n - (nj + 1); i++) {
                    if (a2[ni][nj + i]) {
                        plc = false;
                    }
                }
            }
            if (plc) {
                for (int i = 1; i <= n - (ni + 1); i++) {
                    if (a2[ni + i][nj]) {
                        plc = false;
                    }
                }
            }
            if (plc) {
                for (int i = 1, j = 1; (i <= nj) and (j <= ni); i++, j++) {
                    if (a2[ni - j][nj - i]) {
                        plc = false;
                    }
                }
            }
            if (plc) {
                for (int i = 1, j = 1; (i <= n - (nj + 1)) and (j <= ni); i++, j++) {
                    if (a2[ni - j][nj + i]) {
                        plc = false;
                    }
                }
            }
            if(plc) {
                for (int i = 1, j = 1; (i <= n - (nj + 1)) and (j <= n - (ni + 1)); i++, j++) {
                    if (a2[ni + j][nj + i]) {
                        plc = false;
                    }
                }
            }
            if (plc) {
                for (int i = 1, j = 1; (i <= nj) and (j <= n - (ni + 1)); i++, j++) {
                    if (a2[ni + j][nj - i]) {
                        plc = false;
                    }
                }
            }
            if (plc){
                if (ni +1 >= n){
                    res++;
                    func(n,  ni, nj+1, num);
                }
                if (ni +1 < n){
                    a2[ni][nj] = true;
                    func (n,  ni+1, 0, num+1);
                }
            } else {
                func(n, ni, nj+1, num);
            }
        } else {
            a2[i2[num-1]][j2[num-1]] = false;
            func(n,  i2[num-1], j2[num-1]+1, num-1);
        }
    }
}

int t08_queen(){
    int n =0;
    cin >>n;
    i2[0] = -1;
    j2[0] = -1;
    func (n,  0, 0, 1);
    cout <<res;
    return 0;
}
