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
    string surname;
    string name;
    int rating;
};

bool cmp(student a, student b) {
    return a.rating > b.rating;
}

int t04_students() {
        int n;
    cin >> n;
    vector <student> students(n);
    for (int i = 0; i < n; i++) {
        int s_rating, s_mark1, s_mark2, s_mark3;
        string s_surname, s_name;
        cin >> s_surname >> s_name >> s_mark1 >> s_mark2 >> s_mark3;
                
        student student_temp;
        student_temp.surname = s_surname;
        student_temp.name = s_name;
        student_temp.rating = s_mark1 + s_mark2 + s_mark3;
        
        students[i] = student_temp;
    }
    stable_sort(students.begin(), students.end(), cmp);
    for (auto now : students) {
        cout << now.surname << " " << now.name << endl;
    }
    return 0;
}

