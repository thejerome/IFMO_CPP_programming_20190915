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
#include <utility>
#include <vector>
#include <string>



using namespace std;

struct Student {
    string name;
    int mark1, mark2, mark3;
    double avg;
    Student(){};



    Student(const string& name_, int mark1_, int mark2_, int mark3_) : name(name_), mark1(mark1_), mark2(mark2_), mark3(mark3_) {
        avg = 1.0 * (mark1 + mark2 +mark3) / 3;

    }

    bool operator < (Student b) {
        return avg > b.avg;
    }
};



int t04_students() {
    int n;
    cin >> n;
    vector<Student>a(n);

    for (int i = 0; i < n; i++) {
        string n1, n2;
        int m1, m2, m3;
        cin >> n1 >> n2 >> m1 >> m2 >> m3;
        a[i] = Student(n1 + ' ' +n2, m1, m2, m3);
    }

    sort(a.begin(), a.end());

    for (int i = 0; i < n; i++)
        cout << a[i].name << ' ';
}

