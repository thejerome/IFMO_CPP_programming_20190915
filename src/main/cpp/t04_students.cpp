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

struct student{
  string name;
  string family;
  int m;
  int f;
  int i;
};

double mejdinno(student s)
{
  return (s.m+s.f+s.i)/3;
}

void sort(student arr[], int n)
{
  student	 swap;
  for(int i=0;n >i;i++)
    for(int j=n-1;j>i;j--)
       if(mejdinno(arr[j-1]) <mejdinno(arr[j]))
        {
           swap=arr[j-1];
           arr[j-1]=arr[j];
           arr[j]=swap;
        }
}

int t04_students() {
int n;
cin>>n;
student students[n];
for(int i=0;i<n;i++)
{
  cin>>students[i].family;
  cin>>students[i].name;
  cin>>students[i].m;
  cin>>students[i].f;
  cin>>students[i].i;
}
sort(students,n);
for(int i=0;i<n;i++)
{
  cout<<students[i].family<<" "<<students[i].name<<endl;
}
}
