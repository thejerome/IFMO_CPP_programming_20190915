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
int a,b,c;
cin >>a>>b>>c;
if (a<b)
    if (a<c) {cout <<a<<" ";
              if (b>c) cout <<c<<" "<<b;
                else cout <<b<<" "<<c;}
        else {cout << c<<" ";
              if (b>a) cout <<a<<" "<<b;
                  else cout <<b<<" "<<a;}
     else
     if (b<c) {cout << b<<" ";
               if (a>c) cout <<c<<" "<<a;
                   else cout <<a<<" "<<c;}
             else {cout << c<<" ";
                   if (a>b) cout <<b<<" "<<a;
                       else cout <<a<<" "<<b;};
};