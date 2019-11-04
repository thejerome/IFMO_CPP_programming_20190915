//Дан двумерный массив и два числа: i и j. Поменяйте в массиве столбцы с номерами i и j
//        Формат входных данных
//Программа получает на вход размеры массива n и m, не превосходящие 100, 
// затем элементы массива, затем числа i и j.
//Формат выходных данных
//        Выведите результат.
//
//Sample Input:
//
//3 4
//11 12 13 14
//21 22 23 24
//31 32 33 34
//0 1
//Sample Output:
//
//12 11 13 14
//22 21 23 24
//32 31 33 34

#include "t04_swap.h"
#include <iostream>


using namespace std;

int t04_swap() {
    int n,m;
    cin>>n>>m;
    int A[n][m];
    for(int h=0;h<n;h++){
        for(int k=0;k<m;k++){
            cin>>A[h][k];
        }
    }
    int i,j,x,temp;
    cin>>i>>j;
    if(i>j){
        x=i;
        i=j;
        j=x;
    }
    for(int h=0;h<n;h++){
        for(int k=0;k<m;k++){
            if(k==i){
                temp=A[h][k];
                A[h][k]=A[h][j];
                A[h][j]=temp;
            }
            cout<<A[h][k]<<" ";
        }
    }

    return 0;
}
