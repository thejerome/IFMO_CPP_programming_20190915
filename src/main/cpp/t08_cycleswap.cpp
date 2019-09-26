//Циклически сдвиньте элементы списка вправо (A[0] переходит на место A[1], A[1] на место A[2], ..., последний элемент переходит на место A[0]).
//Формат входных данных
//
//        В первой строке вводится количество элементов в массиве. Во второй строке вводятся элементы массива.
//Формат выходных данных
//        Выведите ответ на задачу.
//Sample Input:
//
//5
//1 2 3 4 5
//Sample Output:
//
//5 1 2 3 4

#include "t08_cycleswap.h"
#include <iostream>


using namespace std;

int t08_cycleswap() {
    int n=0;
    cin>>n;
    double mas[n]={};
    double  last_element=0;

    for(int i=0; i<n; i++)
        cin>>mas[i];

    if(n>0)
        last_element=mas[n-1];

    for(int i=n-1; i>=0; i--)
    {
        if(i==0)
            mas[i]=last_element;
        else
            mas[i]=mas[i-1];
    }

    for(int i=0; i<n; i++)
        cout<<mas[i]<<" ";
}
