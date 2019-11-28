//Даны два списка чисел, которые могут содержать до 100000 чисел каждый.
// Выведите все числа, которые входят как в первый, так и во второй список в порядке возрастания.
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
//2 3

#include "t04_both2.h"
#include <iostream>

using namespace std;
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int t04_both2() {
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

  if(brN>brM)k=brM;
  else k=brN;
  int c[k];
  for(int i=0;i<brN;i++)
  {
    for(int j=0;j<brM;j++)
    {
      if(a[i]==b[j]){c[br]=a[i];br++;break;}
    }
  }
   bool swapped;
   for (int i=0;i<br-1;i++)
   {
     swapped = false;
     for (int j=0;j<br-i-1;j++)
     {
        if (c[j]>c[j+1])
        {
           swap(&c[j],&c[j+1]);
           swapped=true;
        }
     }
     if (swapped==false) break;
   }
   for(int i=0;i<br;i++)
   { cout<<c[i];
     if(i!=br-1)cout<<" ";
   }
}
