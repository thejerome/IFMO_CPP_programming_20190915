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

int t02_new() {
    set<int> s1;
    int n=0;
    cin >>n;
    int a=0;
    for (int i=0; i<n; i++){
        cin >>a;
        if (s1.count(a) == 0){
            cout <<"NO" <<endl;
            s1.insert(a);
        } else {
            cout <<"YES" <<endl;
        }
    }
    return 0;
}
