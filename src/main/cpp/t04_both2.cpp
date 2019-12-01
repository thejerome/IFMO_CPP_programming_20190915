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

int t04_both2() {
    int N,M;
    cin >> N;
    set<int> v,w,res;
    for (int i = 0; i < N; ++i) {
        int a;
        cin >> a;
        v.insert(a);
    }
    cin >> M;
    for (int i = 0; i < M; ++i) {
        int a;
        cin >> a;
        w.insert(a);
    }
    for (auto i=v.begin();i!=v.end();i++){
        if (w.count(*i)==1) res.insert(*i);
    }
    for (auto i=res.begin();i!=res.end();i++){
        cout << *i << " ";
    }
}
