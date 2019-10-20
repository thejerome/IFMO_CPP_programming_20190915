//Дано три числа. Упорядочите их в порядке неубывания.
//
//Формат входных данных
//        Вводятся три числа.
//Формат выходных данных
//        Выведите ответ на задачу.
//Sample Input:
//
//1
//2
//1
//Sample Output:
//
//1 1 2

#include "t10_sort3.h"
#include <iostream>

using namespace std;

int t10_sort3() {
 int a,b,c,SWAP;
  cin>>a>>b>>c;
    if (a>b){SWAP=a;a=b;b=SWAP;}
    if (b>c){SWAP=b;b=c;c=SWAP;}
    if (c>a){SWAP=c;c=a;a=SWAP;}
  cout<< b << " " << c << " " << a;

  return 0;
};
