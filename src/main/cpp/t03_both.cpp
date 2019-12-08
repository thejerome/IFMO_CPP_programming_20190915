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
    set <int> s1, s2;
    int n, m;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        s1.insert(a);
    }
    cin >> m;
    int k = 0;
    for(int i = 0; i < m; i++)
    {
        int a;
        cin >> a;
        s2.insert(a);
        if(s1.find(a) != s1.end())
            k++;
    }
    cout << k;
    return 0;
}
