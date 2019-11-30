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
#include <set>
using namespace std;

int t04_both2() {
set<int>n1;
set<int>n2;
set<int>n;
int a1;
cin>>a1;
for(int k=0;k<a1;k++){
    int x;
    cin>>x;
    n1.insert(x);
}
int a2;
cin>>a2;
for(int k=0;k<a2;k++){
    int x;
    cin>>x;
    n2.insert(x);
    if(n1.find(x)!=n1.end()){n.insert(x);
    }
}
for(auto now:n){cout<<now<<" ";}
return 0;}
