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
bool a[10][10];
int i2[11];
int j2[11];

void func(int n, int pi, int pj, int ni, int nj, int num);
void func(int n, int pi, int pj, int ni, int nj, int num){
    i2[num] = ni;
    j2[num] = nj;
    int i1 = ni;
    int j1 = nj;
    if ((ni >= 0) and (nj >= 0)) {
        if (j1 < n) {
            bool plc = true;
            int lft = j1;
            int rgt = n - (j1 + 1);
            int top = i1;
            int btm = n - (i1 + 1);
            for (int i = 1; i <= lft; i++) {
                if (a[i1][j1 - i]) {
                    plc = false;
                }
            }
            if (plc) {
                for (int i = 1; i <= top; i++) {
                    if (a[i1 - i][j1]) {
                        plc = false;
                    }
                }
            }
            if (plc) {
                for (int i = 1; i <= rgt; i++) {
                    if (a[i1][j1 + i]) {
                        plc = false;
                    }
                }
            }
            if (plc) {
                for (int i = 1; i <= btm; i++) {
                    if (a[i1 + i][j1]) {
                        plc = false;
                    }
                }
            }
            if (plc) {
                for (int i = 1, j = 1; (i <= lft) and (j <= top); i++, j++) {
                    if (a[i1 - j][j1 - i]) {
                        plc = false;
                    }
                }
            }
            if (plc) {
                for (int i = 1, j = 1; (i <= rgt) and (j <= top); i++, j++) {
                    if (a[i1 - j][j1 + i]) {
                        plc = false;
                    }
                }
            }
            if(plc) {
                for (int i = 1, j = 1; (i <= rgt) and (j <= btm); i++, j++) {
                    if (a[i1 + j][j1 + i]) {
                        plc = false;
                    }
                }
            }
            if (plc) {
                for (int i = 1, j = 1; (i <= lft) and (j <= btm); i++, j++) {
                    if (a[i1 + j][j1 - i]) {
                        plc = false;
                    }
                }
            }
            if (plc){
                if (i1 +1 >= n){
                    res++;
                    func(n, i2[num-1], j2[num-1], ni, nj+1, num);
                }
                if (i1 +1 < n){
                    a[i1][j1] = true;
                    func (n, i2[num], j2[num], i1+1, 0, num+1);
                }
            } else {
                func(n,i2[num-1], j2[num-1], ni, nj+1, num);
            }
        } else {
            a[i2[num-1]][j2[num-1]] = false;
            func(n, i2[num-2], j2[num-2], i2[num-1], j2[num-1]+1, num-1);
        }
    }
}

int t08_queen(){
    int n =0;
    cin >>n;
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            a[i][j] = false;
        }
    }
    i2[0] = -1;
    j2[0] = -1;
    //    func (n, -1, -1, 0, 0, 1);
    cout <<res;
    return 0;
}
