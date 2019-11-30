//Отсортируйте массив.
//
//Входные данные
//
//Первая строка входных данных содержит количество элементов в массиве N ≤ 10^5. 
// Далее идет N целых чисел, не превосходящих по абсолютной величине 10^9.
//
//Выходные данные
//
//Выведите эти числа в порядке неубывания.
//
//Sample Input:
//
//5
//5 4 3 2 1
//Sample Output:
//
//1 2 3 4 5

#include "t01_sort.h"
#include <iostream>


using namespace std;

int t01_sort() {
int a;
cin>>a;
int f[a];
for(int k=0;k<a;k++){
cin>>f[k];}
for(int k=0;k<a;k++){
for(int j=0;j<a-k-1;++j){
    if(f[j+1]<f[j]){
        int n=f[j];
            f[j]=f[j+1];
            f[j+1]=n;}
    }
}
for (int k=0;k<a;k++)
        cout<<f[k]<<" ";
return 0;
}
