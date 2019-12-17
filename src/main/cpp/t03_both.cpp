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

using namespace std;

int t03_both() {
	set <int> set1, set2;
    int n, m, cou = 0;
    cin >> n;

    for(int i = 0; i < n; i++){
        int t;
        cin >> t;
        set1.insert(t);
    }

    cin >> m;

    for(int i = 0; i < m; i++){
        int t;
        cin >> t;
        set2.insert(t);
    }

    int size10 = set1.size();

    set <int> :: iterator it = set2.begin();

    for(int i = 0; i < m; i++){
        int size0 = set1.size();
        set1.insert(*it);
        it++;
        if(size0 == set1.size())
            cou++;
    }

    cout << cou;

    return 0;
}
