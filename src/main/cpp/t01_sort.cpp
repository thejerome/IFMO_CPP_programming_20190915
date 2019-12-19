//Отсортируйте массив.
//
//Входные данные
//
//Первая строка входных данных содержит количество элементов в массиве N ≤ 10^5. 
// Далее идет N целых чисел, не превосходящих по абсолютной величине 10^9.
//
//Выходные данные
//
//Выведите эти числа в порядке неубывания.
//
//Sample Input:
//
//5
//5 4 3 2 1
//Sample Output:
//
//1 2 3 4 5

#include "t01_sort.h"
#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;

int t01_sort() {
    std::vector<long int> v;
    int n;
    long int num;
    std::cin >> n;
    while (n > 0){
        std::cin >>num;
        v.push_back(num);
        n--;
    }
    std::sort(v.begin(), v.end());
     for (auto i : v){
         std::cout << i << " ";
     }
  return 0;
    
}
