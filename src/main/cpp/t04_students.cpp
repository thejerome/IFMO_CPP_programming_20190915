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

struct student{
    string name, surname;
    int a,b,c;
};

int grade (student x, student y){
    return ((x.a + x.b + x.c) > (y.a + y.b + y.c));
}

int t04_students() {

    vector <student> s;
    int N;
    cin >> N;

    for (int i = 0; i < N; i++){
        student x;
        cin >> x.name >> x.surname;
        cin >> x.a >> x.b >> x.c;
        s.push_back(x);
    }

    sort(s.begin(), s.end(), grade);

    for (int i = 0; i < N; i++){
        cout << s[i].name << " "<< s[i].surname << " ";
    }
    return(0);

}

