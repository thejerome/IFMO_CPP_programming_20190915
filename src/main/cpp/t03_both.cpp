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
    set <int>z;
    set <int>z2;
    set <int>z1;
    int o=0;

    int q2;
    cin >> q2;
    for (int j = o;j < q2; j++){
        int a;
        cin >> a;
        z2.emplace(a);
        z.emplace(a);

    }
    int q1;
    cin >> q1;
    for ( int i = o; i< q1;i++){
        int a;
        cin >> a;
        z1.emplace(a);
        z.emplace(a);
    }
    cout << z2.size() - (z.size() - z1.size());
    return 0;
}

