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
#include <string>
using namespace std;

struct students {
    string surname;
    string name;
    double grades;
};
int nol = 0 , odin = 1;
double tri = 3.0;
int t04_students() {
int n;
cin >> n;
students student[n];
for ( int i = nol; i < n ; i++) {
    int max1, max2, max3;
    cin >> student[i].surname;
    cin>> student[i].name;
    cin >> max1;
    cin >>max2;
    cin >> max3;
    student[i].grades = (max1 + max2 + max3) / tri;
}

for ( int j = 1; j < n; j++){
    if  (student[j-odin].grades < student[j].grades) {
    students last;
    last = student[j-odin];
        student[j-odin] = student[j];
        student[j] = last;
    }
}
for (int k = nol; k < n; k++){
    cout << student[k].surname << ' ' << student[k].name << endl;
}
return 0;
}

