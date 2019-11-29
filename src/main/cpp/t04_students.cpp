//Выведите фамилии и имена учащихся в порядке убывания их среднего балла.
//
//Входные данные
//
//Заданы сначала количество учащихся n, затем n строк, 
// каждая из которых содержит фамилию, имя и три числа 
// (оценки по трем предметам: математике, физике, информатике). 
// Данные в строке разделены одним пробелом. 
// Оценки принимают значение от 1 до 5.
//
//Выходные данные
//
//Необходимо вывести пары фамилия-имя по одной на строке, разделяя фамилию и имя одним пробелом. 
// Выводить оценки не нужно. 
// Если несколько учащихся имеют одинаковые средние баллы, 
// то их нужно выводить в порядке, заданном во входных данных.
//
//Sample Input:
//
//3
//Markov Valeriy 5 5 5
//Sergey Petrov 1 1 1
//Petrov Petr 3 3 3
//Sample Output:
//
//Markov Valeriy
//Petrov Petr
//Sergey Petrov

#include "t04_students.h"
#include <iostream>
#include <set>
#include <algorithm>

using namespace std;

struct students{
    string name [2];
    double ave;
};


int t04_students() {


    const int MarkCount = 3;
    int N = 0;
    cin >> N;

    students a[N];
    multiset<double> average;

    for (int i = 0; i < N; i++) {
        double mark[MarkCount];
        a[i].ave = 0;

        cin >> a[i].name[0];
        cin >> a[i].name[1];
        cin >> mark[0] >> mark[1] >> mark[2];

        a[i].ave = (mark[0] + mark[1] + mark[2]) / MarkCount;
        average.insert(a[i].ave);

    }


    for (auto i = rbegin(average); i != rend(average); i++) {
        for (int j = 0; j < N; j++) {
            if (a[j].ave == *i) {

                cout << a[j].name[0] << ' ';
                cout << a[j].name[1] << ' ';
                a[j].ave = 6;
                break;
            }
        }
    }
}
