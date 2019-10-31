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
  int i,j;
    bool flag=false;
    int a[8][2];
    for(int i=0;i<8;i++)
    for(int j=0;j<2;j++)
    {
        cin>>a[i][j];
    }
      for(int i=0;i<8-1;i++) if(a[i][0]==a[i+1][0] || a[i][1]==a[i+1][1]) {flag=true;}
    int k,l,t,p,swap;
    if(!flag){
    for(int i=0;i<8-1;i++)
    {

      k=a[i][0];
      l=a[i][1];
      t=a[i+1][0];
      p=a[i+1][1];
      if(k<t){swap=k;k=t;t=swap;}
      if(l<p){swap=l;l=p;p=swap;}
      if((k==t || l==p) || k-t==l-p) {flag=true;}
    }}
    if(flag)cout<<"YES";
    else  cout<<"NO";

}
