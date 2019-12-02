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
    set <int> a1;
    int n, count = 0;
    cin >> n;
    for (int i = 0 ; i < n ; i++)
    {
        int x1 ;
        cin >> x1;
        a1.insert(x1);
    }
    set <int> a2;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x2;
        cin >> x2;
        a2.insert(x2);
        if (a1.find(x2) != a1.end())
            count ++;
    }
    cout << count;
return 0;
}
