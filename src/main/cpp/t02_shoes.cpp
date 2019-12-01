//В обувном магазине продается обувь разного размера.
// Известно, что одну пару обуви можно надеть на другую,
// если она хотя бы на три размера больше.
// В магазин пришел покупатель.
// Требуется определить, какое наибольшее количество пар обуви сможет предложить ему продавец так,
// чтобы он смог надеть их все одновременно.
//
//Входные данные
//
//Сначала вводится размер ноги покупателя
// (обувь меньшего размера он надеть не сможет),
// затем количество пар обуви в магазине и размер каждой пары.
// Размер — натуральное число, не превосходящее 100,
// количество пар обуви в магазине не превосходит 1000.
//
//Выходные данные
//
//Выведите единственное число — максимальное количество пар обуви.
//
//Sample Input:
//
//26
//5
//30 35 40 41 42
//Sample Output:
//
//3

#include "t02_shoes.h"
#include <iostream>


using namespace std;
int t02_shoes() {
    int n,nomer,br=0;
    int last,par;
    int arr[101];
    cin>>nomer;
    cin>>n;
    for(int i=0;i<101;i++)
    {
      arr[i]=0;
    }
    for(int i=0;i<n;i++)
    {
      cin>>par;
      arr[par]=1;
    }
    int i=nomer;
while (i<=100)
 {
  while((i<=100) && (arr[i]==0))
  {
     i++;
   }
   if (i<=100)
     {
        br++;
        i=i+3 ;
     }
  }

    cout<<br;
}
