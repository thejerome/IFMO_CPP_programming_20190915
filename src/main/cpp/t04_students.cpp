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
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

struct student {
 string firstname, secondname;
    int mark;
};

bool cmp ( student a, student b) {
  return a.mark > b.mark;  
}

int t04_students() {
  int n, i, mark1, mark2, mark3;
  string temp1, temp2;
  int mid;
    cin >> n;
    vector <student> a(n);
    for (i = 0; i < n; i++) {
        cin >> temp1 >> temp2;
        cin >> mark1 >> mark2 >> mark3;
        mid = mark1 + mark2 + mark3;        
        student struct_temp;        
        struct_temp.firstname = temp1;
        struct_temp.secondname = temp2;
        struct_temp.mark = mid;
        a[i] = struct_temp;
    }
    stable_sort(a.begin(), a.end(), cmp);
    for (auto i: a) {
     cout << i.firstname << " " << i.secondname << endl; 
    }   
  return 0;
}

