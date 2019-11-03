//По данным числам n и m заполните двумерный массив размером n×m числами от 1 до n×m по спирали, выходящей из левого верхнего угла и закрученной по часовой стрелке, как показано в примере.
//Формат входных данных
//        Вводятся два числа n и m, не превышающие 100.
//
//Формат выходных данных
//        Выведите полученный массив, отводя на вывод каждого элемента ровно 4 символа.
//
//Sample Input:
//
//4 5
//Sample Output:
//
//   1   2   3   4   5
//  14  15  16  17   6
//  13  20  19  18   7
//  12  11  10   9   8

#include "t09_spiral.h"
#include <iostream>
#include <iomanip>

using namespace std;


int t09_spiral() {
    const int N = 102;
    int a[N][N];
    int n,m;
        cin>>n>>m;
        int cur = 0;
        int i = 1,j = 1,k = n,q = m;
        while(cur < m * n){
            if(!(i <= k and j <= q))break;
            bool f = true;
            for(int t = j;t <= q;++t){
                if(!a[i][t])a[i][t] = ++cur;
                else {
                    f = false;
                    break;
                }
            }
            for(int t = i + 1;t <= k;++t){
                if(!a[t][q])a[t][q] = ++cur; 
                else {
                    f = false;
                    break;
                }
            }
            for(int t = q - 1;t >= j;--t){
                if(!a[k][t])a[k][t] = ++cur;
                else {
                    f = false;
                    break;
                }
            }
            for(int t = k - 1;t > i;--t){
                if(!a[t][j])a[t][j] = ++cur; 
                else {
                    f = false;
                    break;
                }
            }
            if(!f)break;
            ++i,++j,--k,--q;
        }
        for(i = 1;i <= n;++i){
            for(j = 1;j <= m;++j){
                cout<<setw(4)<<a[i][j];
            }
            cout<<'\n';
        }
}
