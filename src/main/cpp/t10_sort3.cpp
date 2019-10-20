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
    if (a>b){SWAP=b;b=a;a=SWAP;}
    if (b>c){SWAP=c;c=b;b=SWAP;}
    if (a>b){SWAP=b;b=a;a=SWAP;}
    
  cout<< a << " " << b << " " << c;

  return 0;
};
