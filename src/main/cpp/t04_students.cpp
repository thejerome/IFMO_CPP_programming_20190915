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
#include<string>
#include<set>
#include<map>
#include<vector>
using namespace std;

int t04_students() {
int n;
double m1, m2, m3;
vector <string> v;
set <double, greater<double> > m;
map <double,vector<string> > stmark;
string student, a,im, fam;
cin >> n;
for(int i = 0; i < n; i++)
{cin >> im >> fam >> m1 >> m2 >> m3;
a = im + ' ' + fam;
if(m.count((m1 + m2 + m3)/3)!= 0){stmark[(m1 + m2 + m3)/3].push_back(a);}
else{
m.insert((m1 + m2 + m3)/3);
v.push_back(a);
stmark[(m1 + m2 + m3)/3] = v;
v.pop_back();   
    }
}
for(auto i : m) {for(auto k : stmark[i]) {cout << k << endl;}}
}

