//Даны два списка чисел, которые могут содержать до 100000 чисел каждый. 
// Выведите все числа, которые входят как в первый, так и во второй список в порядке возрастания.
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
//2 3

#include "t04_both2.h"
#include <iostream>
#include <set>

using namespace std;

bool is_it_in_s1(int, const set<int>&);

int t04_both2() {
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
        if (is_it_in_s1(x, s1)) s3.insert(x);
    }
    for (auto i: s3) {
        cout << *s3.find(i) << " ";
    }
    return 0;
}

bool is_it_in_s1(int x, const set<int>& s) {
    bool check = false;
    for (auto i: s) {
        if (x == i) {
            check = true;
        }
    }
    return check;
}
