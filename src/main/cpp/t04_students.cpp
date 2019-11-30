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

using namespace std;
struct student {
string name2;
string name1;
double arr;
};
int t04_students() {
    int n;
cin>>n;
student t[n];
for (int i=0;i<n;i++) {
int a1,a2,a3;
cin>>t[i].name2>>t[i].name1;
cin>>a1>>a2>>a3;
t[i].arr=(a1+a2+a3)/3.0;}
for (int i=1;i<n;i++) {
for (int k=1;k<n;k++) {
if (t[i-1].arr<t[i].arr){
student x;
x=t[i-1];
t[i-1]=t[i];
t[i]=x;}}}
for (int i=0;i<n;i++) {
cout<<t[i].name2<<" "<<t[i].name1<<"\n";}
return 0;
}

