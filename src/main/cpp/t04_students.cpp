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
#include <vector>
#include <algorithm>
using namespace std;

struct human {
    string fname;
    string lname;
    int m;
    int p;
    int i;
};

bool cmp(human &lhs, human &rhs){
    int a=(lhs.m + lhs.p + lhs.i);
    int b=(rhs.m + rhs.p + rhs.i);
    return a>b;
}

int t04_students() {
    int n=0;
    cin >>n;
    vector<human> v1;
    for (int i=0; i<n; i++){
        human a;
        string name;
        cin >>name;
        a.fname = name;
        cin >>name;
        a.lname = name;
        int p=0;
        cin >>p;
        a.m = p;
        cin >>p;
        a.p = p;
        cin >>p;
        a.i = p;
        v1.push_back(a);
    }
    sort(v1.begin(), v1.end(), cmp);
    for (auto i:v1){
        cout <<i.fname <<" " <<i.lname <<endl;
    }
    return 0;
}

