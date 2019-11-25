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
int D;
cin >> D;
int C[D];
for(int L = 0;L < D;L++)
{cin >> C[L];}
for(int L = 0;L < D;L++){
for(int H = 0;H < D - L - 1; ++H)
    {
        if(C[H+1] < C[H])
        {int SW = C[H];
            C[H]=C[H+1];
            C[H+1]=SW;}
    }
}
for (int L = 0; L < D; L++)
        cout << C[L] << " ";
}
