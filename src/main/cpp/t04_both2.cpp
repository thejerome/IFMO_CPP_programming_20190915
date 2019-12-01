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
    int n=0, m=0;
    int p=0;
    cin >>n;
    /*multi*/set<int> s1;
    /*multi*/set<int> s2;
    for (int i=0; i<n; i++){
        cin >>p;
        s1.insert(p);
    }
    cin >>m;
    for (int i=0; i<m; i++) {
        cin >> p;
        s2.insert(p);
    }
    p = 0;
    set<int> s3;
    for (auto i:s1){
        for (auto j:s2){
            if (i==j){
                s3.insert(i);
                break;
            }
        }
    }
    for (auto i:s3){
        cout <<i <<" ";
    }
    return 0;
}
