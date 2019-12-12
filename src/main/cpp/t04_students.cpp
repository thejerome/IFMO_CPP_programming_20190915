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
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;
struct student{
        string name, surname;
        double sr;
    };
bool c(student a, student b){
    return(a.sr>b.sr);
}
int t04_students() {
    int n;
    cin >> n;
    vector <student> a(n);
    for (int i = 0;i<n;i++){
        string s1,s2;
        cin >> s1 >> s2;
        int x1,x2,x3;
        cin >> x1 >> x2 >> x3;
        student s;
        s.name = s1;
        s.surname = s2;
        s.sr = (x1+x2+x3)/3;
        a[i] = s;
    }
    sort(a.begin(),a.end(),c);
    for (int i=0;i<n;i++){
        cout << a[i].name << ' ' << a[i].surname << endl;
    } 
}

