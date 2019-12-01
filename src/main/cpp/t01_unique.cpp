//Дан список целых чисел, который может содержать до 100000 чисел. 
// Определите, сколько в нем встречается различных чисел.
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
//5
//1 2 3 2 1
//Sample Output:
//
//3

#include "t01_unique.h"
#include <iostream>
#include <set>
using namespace std;

int t01_unique() {
    set<int> s1;
    int n=0;
    int in=0;
    cin >>n;
    for (auto i=0; i<n; i++){
        cin >>in;
        s1.insert(in);
    }
    cout <<s1.size();
    return 0;
}
