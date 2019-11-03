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
    int a[3];
    int sum;
};
int t04_students() {
    int n;
    cin >> n;
    vector<student> f(n);
    for(int i = 0; i < n; i++)
    {
        cin >> f[i].name >> f[i].last_name >> f[i].a[0] >> f[i].a[1] >> f[i].a[2];
        f[i].sum = f[i].a[0] + f[i].a[1] + f[i].a[2];
    }
    sort(f.begin(), f.end(), [](const student & left, const student & right){ return left.sum > right.sum; });
    for(int i = 0; i < n; i++)cout << f[i].name << " " << f[i].last_name << endl;
    return 0;
}

