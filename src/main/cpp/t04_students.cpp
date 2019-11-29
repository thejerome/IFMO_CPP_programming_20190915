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
#include <algorithm>
#include <vector>
#include <set>

using namespace std;

bool t04student_cmp(pair <int,pair <int,string> >  x,pair <int,pair <int,string> >  y){
    return (x.first == y.first ? x.second < y.second : x.first > y.first);
}

int t04_students() {

    int n;
    cin>>n;
    vector <pair <int,pair <int,string> > > ve;
    for(int i = 0;i < n;i++){
        string a,b;
        int x,y,z;
        cin>>a>>b>>x>>y>>z;
        ve.push_back(make_pair(x + y + z,make_pair(i,a + " " + b)));
    }
    sort(ve.begin(),ve.end(),t04student_cmp);
    for(int i = 0;i < ve.size();++i){
        cout<<ve[i].second.second<<'\n';
    }
}

