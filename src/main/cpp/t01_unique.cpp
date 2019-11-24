//Дан список целых чисел, который может содержать до 100000 чисел. 
// Определите, сколько в нем встречается различных чисел.
//
//Входные данные
//
//Вводится число N - количество элементов списка, а затем N чисел.
//
//Выходные данные
//
//Выведите ответ на задачу.
//
//Sample Input:
//
//5
//1 2 3 2 1
//Sample Output:
//
//3

#include "t01_unique.h"
#include <iostream>

using namespace std;

int t01_unique() {
int N,a[N],count=0;
cin >>N;
for (int i=0; i<N;i++){
    cin >>a[i];
}
for (int i=0; i<N;i++){
    for (int j=1; j<N/2;j++){
        if(a[j]!=a[i]) count++;
    }
}
if (count==0) cout <<"1";
else cout<<count;
}

