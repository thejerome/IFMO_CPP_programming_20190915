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
#include <map>
#include <vector>
#include <set>
#include <string>

using namespace std;
bool sx(double i,double j){
    return i>j;
}
int t04_students() {
     int n;
    cin>>n;
    string a,b,c;
    double h,x,y,z;
    map<double,string > v;
    vector<double> m;
    set<double> k;
    for(int i=0;i<n;i++){
        cin>>a>>b>>x>>y>>z;
        h=(x+y+z)/3;
        c=a+" "+b;
        while(k.find(h)!=k.end())
            h-=0.0001;
        k.insert(h);
        m.push_back(h);
        v[h]=c;
    }
    sort(m.begin(),m.end(),sx);
    for(int i=0;i<n;i++){
        cout<<v[m[i]]<<endl;
    }
}

