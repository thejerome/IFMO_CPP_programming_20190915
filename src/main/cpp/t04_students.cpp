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
	string f_name;
	string l_name;
	double rating;
};
bool cmp(student a, student b) {
	return a.rating > b.rating;
}
int t04_students() {
int n;
	cin >> n;
	vector <student> v(n);
	for (int i = 0; i < n; i++) {
		student st;
		int a, b, c; 
		cin >> st.f_name >> st.l_name >> a >> b >> c;
		st.rating = (double)(a + b + c) / 3;
		v[i] = st;
	}
	stable_sort(v.begin(), v.end(), cmp);
	for (student now : v) {
		cout << now.f_name << " " << now.l_name << endl;
	}
}
