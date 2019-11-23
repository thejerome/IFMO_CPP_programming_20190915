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

struct guy {
    string name, surname;
    double s;
};
bool score (guy one, guy two) {
    return (one.s > two.s);
}

int t04_students() {
    int n;
    cin >> n;
    vector <guy> a(n);
    for (int i = 0; i < n; i++) {
        string name1, name2;
        double m, p, in;
        cin >> name1 >> name2 >> m >> p >> in;
        guy student;
        student.name = name1;
        student.surname = name2;
        student.s = (m + p + in) / 3;
        a[i] = student;
    }
    sort (a.begin(), a.end(), score);
    for (auto person : a) cout << person.name << " " << person.surname << endl;
    return 0;
}

