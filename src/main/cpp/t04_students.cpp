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
#include <algorithm>
#include <map>


int t04_students() {
	int n, marks[3]{};
	std::string str[2]{};
	std::multimap<double, std::string> mmp;

	std::cin >> n;
	for (int i = 0; i < n; ++i) {
		std::cin >> str[0] >> str[1] >> marks[0] >> marks[1] >> marks[2];
		mmp.emplace(marks[0] + marks[1] + marks[2] + double(n - i) / 100, str[0] + ' ' + str[1]);
	}

	for (auto it = mmp.rbegin(); it != mmp.rend(); ++it)
		std::cout << (*it).second << std::endl;

	return 0;
}

