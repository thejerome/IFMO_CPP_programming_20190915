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

using namespace std;

struct student {string name; string surname; int grade1; int grade2; int grade3;};
int summ(student x, student y)
{
    return (x.grade1 + x.grade2 + x.grade3 > y.grade1 + y.grade2 + y.grade3);
}
int t04_students() {
    int n;
    cin >> n;
    vector <student> grades(n);
    for(int i = 0; i < n; i++)
        cin >> grades[i].name >> grades[i].surname >> grades[i].grade1 >> grades[i].grade2 >> grades[i].grade3;
    sort(grades.begin(), grades.end(), summ);
    for (student i : grades)
        cout << i.name << ' ' << i.surname << ' ';
    return 0;
}
