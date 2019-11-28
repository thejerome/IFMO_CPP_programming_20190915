//Даны два списка чисел, которые могут содержать до 100000 чисел каждый.
// Посчитайте, сколько чисел содержится одновременно как в первом списке, так и во втором.
//
//Входные данные
//
//Вводится число N - количество элементов первого списка, а затем N чисел первого списка.
//
//Затем вводится число M - количество элементов второго списка, а затем M чисел второго списка.
//
//Выходные данные
//
//Выведите ответ на задачу.
//
//Sample Input:
//
//3
//1 3 2
//3
//4 3 2
//Sample Output:
//
//2

#include "t03_both.h"
#include <iostream>

using namespace std;

int t03_both() {

int n,m,brN=0,k;
bool flag=false;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
{
  cin>>k;
  for(int j=0;j<i;j++)
  {
    if(k==a[j]){flag=true;break;}

  }
  if(!flag){a[brN]=k;brN++;}
  flag=false;
}
cin>>m;
int b[m];
int brM=0;
for(int i=0;i<m;i++)
{
  cin>>k;
  for(int j=0;j<i;j++)
  {
    if(k==b[j]){flag=true;break;}

  }
  if(!flag){b[brM]=k;brM++;}
  flag=false;
}
int br=0;
for(int i=0;i<brN;i++)
{
  for(int j=0;j<brM;j++)
  {
    if(a[i]==b[j]){br++;break;}
  }
}
cout<<br;
}
