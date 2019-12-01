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
void sort(int arr[],int l,int r) {
    int i = l, j =r;
    int swap;
    int center=arr[(l+r)/2];
    while (i<=j) {
        while (arr[i]<center)
        i++;
        while (arr[j]>center)
        j--;
        if (i<=j) {
            swap=arr[i];
            arr[i]=arr[j];
            arr[j]=swap;
            i++;
            j--;
        }
    }
    if (l<j)
    sort(arr,l,j);
    if (i<r)
    sort(arr,i,r);

}
int t01_sort() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
      cin>>arr[i];
    }
    sort(arr,0,n-1);
    for(int i=0;i<n;i++)
    {
      if(i!=n-1)cout<<arr[i]<<" ";
      else cout<<arr[i];
    }
}
