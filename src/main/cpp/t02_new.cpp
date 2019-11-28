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

    int N = 0;
    cin >> N;

    set <int> New;

    for (int i = 0; i < N; i++) {
        int input = 0;
        cin >> input;
        if (New.count(input) == 0) {
            cout << "NO" << endl;
            New.insert(input);
        }
        else cout << "YES" << endl;
    }

}
