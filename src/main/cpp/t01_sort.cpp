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
     int *a;
    int m;
    cout<<"n = ";
    cin>>m;
    if (m<=0){
        cerr<<"Invalid m"<<endl;
        return 1;}
    a=new int[m];
    for(int i=0;i<m;i++){
        cout<<"a["<<i<<"]=";
        cin>>a[i];}
    int x;
    for (int i=0;i<m-1;i++) {
        for (int k=0;k<m-i-1;k++) {
            if (a[k]>a[k+1]) {
                x=a[k];
                a[k]=a[k+1];
                a[k+1]=x;}
        }
    }
    for (int i=0;i<m;i++){
        cout<<a[i]<<" ";}
    cout<<endl;
    return 0; 
}
