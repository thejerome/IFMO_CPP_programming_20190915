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
    int N;
    cin >> N;
    int x1;
    set <int> nums;
    for (int i = 0; i < N ; ++i) {
        cin >> x1;
        nums.insert(x1);
    }
    int M;
    cin >> M;
    int x2;
    int count = 0;
    for (int i = 0; i < M; ++i) {
        cin >> x2;
        if (nums.find(x2) != nums.end()) count++;
    }
    cout << count;
    return 0;
}
