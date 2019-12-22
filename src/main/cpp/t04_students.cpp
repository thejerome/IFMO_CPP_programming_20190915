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
#include <string>
#include <vector>
#include <utility>
using namespace std;


struct call
{
	string Surname;
	string Name;
	int math;
	int ph;
	int inf;

};

bool compare(call a, call b) {
	int score1, score2;
	score1 = a.math + a.ph + a.inf;
	score2 = b.math + b.ph + b.inf;
	return score1 > score2;
}

int t04_students() {
	int n;
	cin >> n;
	vector <call> c1(n);
	for (int i = 0; i < n; i++) {
		string name,surname;
		cin >> surname >> name;
		c1[i].Name = name;
		c1[i].Surname = surname;
		int a, b, c;
		cin >> a >> b >> c;
		c1[i].math = a;
		c1[i].ph = b;
		c1[i].inf = c;
		
	}
	stable_sort(c1.begin(), c1.end(), compare);
	for (auto i : c1) {
		cout << i.Surname <<" "<< i.Name<<endl;
	}
	return 0;
}

