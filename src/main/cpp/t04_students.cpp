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
#include <cstring>

using namespace std;

struct savage
{
	std::string name;
	std::string surname;
	int sub;
	int je;
	int ct;
};

bool
axok(const savage& a, const savage& b)
{
	int kro = a.sub + a.je + a.ct;
	int ezh = b.sub + b.je + b.ct;
	return kro > ezh ? true : false;
}

int t04_students() {
	int slowb;
	std::cin >> slowb;
	std::vector< savage > data(slowb);
	for (int i = 0; i < slowb; i++) {
		std::cin >> data[i].name >> data[i].surname;
		std::cin >> data[i].sub >> data[i].je >> data[i].ct;
	}
	std::sort(data.begin(), data.end(), axok);
	for (int i = 0; i < slowb; i++) {
		std::cout << data[i].name << " " << data[i].surname << std::endl;
	}
}

