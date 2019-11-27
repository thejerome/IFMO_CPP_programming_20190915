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
    int n=0;
    int m=0;
    int count=0;
    set <int> numbers;

    cin>>n;
    for (int i=0; i<n; i++){
        int t =0;
        cin >>t;
        numbers.insert(t);
    }
    cin>>m;
    for (int i=0; i<m; i++){
        int size = numbers.size();
        int t =0;
        cin >>t;
        numbers.insert(t);
        if(size== numbers.size())
            count++;
    }
    cout<<count;
}
