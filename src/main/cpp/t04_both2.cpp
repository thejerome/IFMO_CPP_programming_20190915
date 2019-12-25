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
#include <algorithm>
#include <functional>

using namespace std;

int t04_both2() {
    int N;
    int num;
    std::set<int> s;
    std::set<int> s1;
    std::set<int> inters;
    std::cin >> N;
    while(N > 0){
    std::cin >> num;
    s.insert(num);
    N--;
    }
    std::cin >> N;
    while(N > 0){
        std::cin >> num;
        s1.insert(num);
        N--;
    }
    std::set_intersection(s.begin(), s.end(), s1.begin(), s1.end(), std::inserter(inters, inters.begin()));
    for (auto i : inters){
        std::cout << i << " ";
    }
  return 0;
}
