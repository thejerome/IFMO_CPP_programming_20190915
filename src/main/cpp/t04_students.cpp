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
using namespace std;
struct q{
string n;
string c;
int a1;
int a2;
int a3;
};
int z(q b1,q b2){
    return (b1.a1+b1.a2+b1.a3>b2.a1+b2.a2+b2.a3);
}
int t04_students() {
int v;
cin>>v;
vector<q> f(v);
for(int k=0;k<v;k++)
{cin>>f[k].c>>f[k].n;
 cin>>f[k].a1>>f[k].a2>>f[k].a3;}
sort(f.begin(),f.end(),z);
for(int k=0;k<v;k++)
{cout<<f[k].c<<" "<<f[k].n<<"\n";}
return 0;
}

