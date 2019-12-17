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

using namespace std;

struct student{
    string name;
    string surname;
    int x;
    int y;
    int z;
};

bool comp(student p1, student p2){
    float s1 = (p1.x + p1.y + p1.z) / 3;
    float s2 = (p2.x + p2.y + p2.z) / 3;
    return s2 < s1;
}

int t04_students() {
    vector <student> vec;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        student t;
        cin >> t.name >> t.surname >> t.x >> t.y >> t.z;
        vec.push_back(t);
    }

    sort(vec.begin(), vec.end(), comp);

    for(int i = 0; i < n; i++){
        cout << vec[i].name << " " << vec[i].surname << endl;
    }

    return 0;
}

