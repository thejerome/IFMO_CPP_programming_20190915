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
    int n_first, n_second, x, count = 0;
    set<int> set_first;
    cin >> n_first;
    for(int i = 0; i < n_first; i++)
    {
        cin >> x;
        set_first.emplace(x);
    }
    cin >> n_second;
    for(int i = 0; i < n_second; i++)
    {
        cin >> x;
        if(set_first.find(x) != set_first.end())count++;
    }
    cout << count;
    return 0;
}
