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
    int N;
    cin >> N;
    int x1;
    set <int> nums1;
    for (int i = 0; i < N ; ++i) {
        cin >> x1;
        nums1.insert(x1);
    }
    int M;
    cin >> M;
    int x2;
    set <int> nums;
    for (int i = 0; i < M; ++i) {
        cin >> x2;
        if (nums1.find(x2) != nums1.end()) nums.insert(x2);
    }
    for (auto &item : nums){
        cout << item << " ";
    }
    return 0;
}
