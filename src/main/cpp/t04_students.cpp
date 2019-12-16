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
#include <map>
using namespace std;

int t04_students() {
    int n;
    string j;
    float s;
    cin >> n;
    multiset <float> a;
    map <float,string> c1;
    map <string,string> c2;
    for (int i = 0; i < n; i++){
        string sn, nam, p;
        s=0;
        cin>>sn>>nam;
        for (int j=0; j<3; j++) {
        cin>>p;
        int b=stoi(p);
        s=s+b;
        }
        s=s/3;
        s=1/s;
        for (auto j = a.begin(); j != a.end(); j++) {
            if (s==*j) s=s+0.0001;
        }
        a.insert(s);
        c2[sn]=nam;
        c1[s]=sn;
    }
    for (auto i = a.begin(); i != a.end(); i++){
        j=c1[*i];
        cout<<j<<' '<<c2[j]<<endl;
    }
}


