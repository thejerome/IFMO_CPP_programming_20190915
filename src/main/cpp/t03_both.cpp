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
#include <set>
using namespace std;

int t03_both() {
set<int>n;
set<int>n1;
set<int>n2;
int a1;
cin>>a1;
for(int k=0;k<a1;k++){
    int x;
    cin>>x;
    n1.insert(x);
    n.insert(x);
}
int a2;
cin>>a2;
for(int k=0;k<a2;k++){
    int x;
    cin>>x;
    n2.insert(x);
    n.insert(x);
}
cout<<n2.size()-(n.size()-n1.size());
return 0;}
