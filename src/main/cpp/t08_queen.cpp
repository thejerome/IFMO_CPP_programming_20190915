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
//#include <vector>
#include "t08_queen.h"

using namespace std;

int res =0;
bool a2[10][10] {false};
int i2[11];
int j2[11];
bool frst = true;

int func(int n, int ni, int nj, int num);
int func(int n, int ni, int nj, int num){
    i2[num] = ni;
    j2[num] = nj;
    if ((num == 1) and (!frst)){
        ni = -1;
        nj = -1;
    }
    if ((ni >= 0) and (nj >= 0)) {
        if (num == 1){
            frst = false;
        }
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
    return res;
}

int t08_queen(){
    int n;
    cin >>n;
    i2[0] = -1;
    j2[0] = -1;
    int res2=0;
    for (int o=0; o<n; o++){
        res2 = res2 + func (n, 0, o, 1);
        res = 0;
        frst = true;
    }
    cout <<res2;
    return 0;
}
