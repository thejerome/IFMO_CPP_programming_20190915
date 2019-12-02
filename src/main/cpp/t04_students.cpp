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
  return (double)(s.m+s.f+s.i)/3;
}

void sort(student arr[], int n)
{

  for(int i=0;i<n-1;i++)
  {
    bool swapped=false;
    for(int j=0;j<n-i-1;j++)
    {
      if(mejdinno(arr[j]) <mejdinno(arr[j+1]))
      {
        student mod=arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=mod;
        swapped=true;
      }
    }
    if(!swapped)break;
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
  cout<<students[i].family<<" "<<students[i].name<<""<<endl;
}
return 0;
}
