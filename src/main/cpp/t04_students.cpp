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
#include <string>
#include <algorithm>
using namespace std;
struct student{
    string name;
    string surname;
    double mark;
};

bool cmp(student a, student b){
    return (a.mark > b.mark);
}
int t04_students() {
int n;
    cin >> n;
    vector <student> s;
    for (int i = 0; i < n; i++){
        student temp;
        int f_mark, s_mark, t_mark;
        cin >> temp.name >> temp.surname >> f_mark >> s_mark >> t_mark;
        temp.mark = (f_mark + s_mark +t_mark)*3.0;
        s.push_back(temp);
    }
    stable_sort(s.begin(), s.end(), cmp);
    for (auto c : s){
        cout << c.name << " " << c.surname << endl;
    }
}
