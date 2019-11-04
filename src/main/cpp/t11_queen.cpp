//Известно, что на доске 8×8 можно расставить 8 ферзей так, чтобы они не били друг друга. Вам дана расстановка 8 ферзей на доске, определите, есть ли среди них пара бьющих друг друга.
//Формат входных данных
//
//        Программа получает на вход восемь пар чисел, каждое число от 1 до 8 - координаты 8 ферзей.
//Формат выходных данных
//        Если ферзи не бьют друг друга, выведите слово NO, иначе выведите YES.
//Sample Input 1:
//
//1 7
//2 4
//3 2
//4 8
//5 6
//6 1
//7 3
//8 5
//Sample Output 1:
//
//NO
//        Sample Input 2:
//
//1 8
//2 7
//3 6
//4 5
//5 4
//6 3
//7 2
//8 1
//Sample Output 2:
//
//YES

#include "t11_queen.h"
#include <iostream>
#include <cmath>


using namespace std;

int t11_queen() {
    int b=0,c=0,n=8,v;
    bool d=0;
    int a[n][n];
    for (int i=0;i<n;i++) {
        for (int j=0;j<n;j++) {
            a[i][j]=0;
        }
    }
    for (int i=0; i<n; i++){
        cin>>c;
        cin>>b;
        a[c-1][b-1]=1;
    }
    for(int i1=0;i1<n;i1++) {
        for (int j1=0;j1<n;j1++) {
            if (a[i1][j1]==1) {
                if (i1<=j1) {
                    v=n-j1;
                }
                else {
                    v=n-i1;
                }
                 for (int i=1; i<v; i++) {
                   if (a[i1][j1+i]==1) {
                       d=1;
                   }
                   if (a[i1+i][j1+i]==1) {
                       d=1;
                   }
                   if (a[i1+i][j1]==1) {
                       d=1;
                   }
                
                }        
            }       
        }
    }
 if (d==1) {
     cout<<"YES";
}
else {
    cout<<"NO";
}
    return 0;
}
