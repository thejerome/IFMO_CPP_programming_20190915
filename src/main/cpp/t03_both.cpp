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

bool is_it_in_s(int, const set<int>&);

int t03_both() {
    set<int> s1, s2, s3;
    int N, M, x;
    cin >> N;
    for (int i = 0; i < N; ++i) {
        cin >> x;
        s1.insert(x);
    }
    cin >> M;
    for (int i = 0; i < M; ++i) {
        cin >> x;
        s2.insert(x);
        if (is_it_in_s(x, s1)) s3.insert(x);
    }
    cout << s3.size();
    return 0;
}

bool is_it_in_s(int x, const set<int>& s) {
    bool check = false;
    for (auto i: s) {
        if (x == i) {
            check = true;
        }
    }
    return check;
}

