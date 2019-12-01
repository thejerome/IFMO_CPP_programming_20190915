//Во входной строке записана последовательность чисел через пробел. 
// Для каждого числа выведите слово YES (в отдельной строке), 
// если это число ранее встречалось в последовательности или NO, если не встречалось.
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
//6
//1 2 3 2 3 4
//Sample Output:
//
//NO
//NO
//NO
//YES
//YES
//NO

#include "t02_new.h"
#include <iostream>
#include <set>


using namespace std;

void is_it_new(int, const set<int>&);

int t02_new() {
    set<int> s;
    int N, x;
    cin >> N;
    for (int i = 0; i < N; ++i) {
        cin >> x;
        is_it_new(x, s);
        s.insert(x);
        }
    return 0;
}

void is_it_new(int x, const set<int>& s){
    bool check = true;
    for (auto i: s){
        if (x == i){
            check = false;
        }
    }
    if (check) cout << "NO" << "\n";
    else cout << "YES" << "\n";
}