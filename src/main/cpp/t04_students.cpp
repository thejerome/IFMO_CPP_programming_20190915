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


	struct student {
		string name, surname;
		int a, b, c;
	};
	int grade(student x, student y) {
		return ((x.a + x.b + x.c) > (y.a + y.b + y.c));
	}
	int t04_students() {
		vector <student> u;
		int n;
		cin >> n;
		for (int i = 0; i < n; i++) {
			student x;
			cin >> x.name >> x.surname >> x.a >> x.b >> x.c;
			u.push_back(x);
		}
		sort(u.begin(), u.end(), grade);
		for (int i = 0; i < n; i++) {
			cout << u[i].name << " " << u[i].surname << " ";
		}
		return 0;
}

