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
class student
{
    public:
    string name, last_name;
    int points = 0;
};
bool operator<(const student & lhd, const student & rhd){return lhd.points > rhd.points;}
int t04_students() {
    int n; cin >> n;
    vector<student> students(n);
    for(auto & i : students){cin >> i.last_name >> i.name; for(auto j = 0; j < 3; j++){int point; cin >> point; i.points += point;}}
    sort(students.begin(), students.end());
    for(auto & i : students)cout << i.last_name << " " << i.name << endl;
    return 0;
}