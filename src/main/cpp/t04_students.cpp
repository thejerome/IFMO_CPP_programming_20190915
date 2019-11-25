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
double numb;
vector <string> v;
set <double> m;
map <double,vector<string> > stmark;
string student, a, marks;
cin >> n;
cin >> student;
for(int i = 0; i < n; i++)
{getline(cin, student);
a = student.substr(0, student.find(' ') + 1);
student.erase(0, student.find(' ') + 1);
a += student.substr(0, student.find(' '));
student.erase(0, student.find(' ') + 1);
numb = (stoi(&student[0]) + stoi(&student[2]) + stoi(&student[4]))/3;

if(m.count(numb)!= 0){stmark[numb].push_back(a);}
else{
m.insert(numb);
v.push_back(a);
stmark[numb] = v;
v.pop_back();   
    }
}
for(auto i : m) {for(auto k : stmark[i]) {cout << k << endl;}}
}

