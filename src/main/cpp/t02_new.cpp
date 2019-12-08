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


using namespace std;

int t02_new() {
    int n,c;
    cin >> n;
    set <int> a;
    for (int i = 0; i < n; i++){
        int b;
        cin >> b;
        c=a.size();
        a.insert(b);
        if (c==a.size()) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
