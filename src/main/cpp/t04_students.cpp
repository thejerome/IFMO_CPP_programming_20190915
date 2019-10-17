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
/*3
Markov Valerib 5 5 5
Sergeb Petrov 1 1 1
Petrov Petr 3 3 3
Sample Output:
*/
//Markov Valerib
//Petrov Petr
//Sergeb Petrov

#include "t04_students.h"
#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

int t04_students() {
    int n;
    double m,a,b,c;
    string sn,fn,s;
    map<double,string> st;
    cin>>n;
    vector<double> p;
    for(int i =0;i<n;i++){
        cin>>sn;
        cin>>fn;
        cin>>a;
        cin>>b;
        cin>>c;
        m=(a+b+c)/3;
        s=sn+" "+fn;
        p.push_back(m);
        st[m]+=s+"\n";
    }
    sort(p.begin(),p.end());
    reverse(p.begin(),p.end());
    cout<<st[p[0]];
    for(int i=1;i<n;i++){
        if(p[i]!=p[i-1])
            cout<<st[p[i]];
    }
    return 0;
}

