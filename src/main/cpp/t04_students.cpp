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

using namespace std;

struct stradalec {
	string surname;
	string name;
	double avg;
};

int t04_students() {
	int ko;
	cin >> ko;
	stradalec xex[ko];
	for (int i = 0; i < ko; i++) {
		int ti1, ti2, ti3;
		cin >> xex[i].surname >> xex[i].name;
		cin >> ti1 >> ti2 >> ti3;
		xex[i].avg = (ti1 + ti2 + ti3) / 3.0;
	}

	for (int i = 1; i < ko; i++) {
		for (int j = 1; j < ko; j++) {
			if (xex[i - 1].avg < xex[i].avg) {
				stradalec ex;
				ex = xex[i - 1];
				xex[i - 1] = xex[i];
				xex[i] = ex;
			}
		}
	}

	for (int i = 0; i < ko; i++) {
		cout << xex[i].surname << " " << xex[i].name << "\n";
	}
}

