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
    int n=0;
    cin>>n;

    vector<int> numbers;
    for (int i=0; i<n; i++){
        int t=0;
        cin>>t;
        numbers.push_back(t);
    }
    sort(numbers.begin(), numbers.end());

    for(auto el : numbers)
        cout<<el<<" ";


}
