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
    int n=0;
    int m=0;
    set <int> numbers_out;
    set <int> numbers_set;

    cin>>n;
    for (int i=0; i<n; i++){
        int t =0;
        cin >>t;
        numbers_set.insert(t);
    }
    cin>>m;
    for (int i=0; i<m; i++){

        int t =0;
        cin >>t;
        if ( numbers_set.end()!=numbers_set.find(t) )
            numbers_out.insert(t);
    }

    for (auto &item : numbers_out)
        cout<<item<<" ";

}
