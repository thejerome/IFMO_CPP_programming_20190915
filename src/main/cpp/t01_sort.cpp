//Отсортируйте массив.
//
//Входные данные
//
//Первая строка входных данных содержит количество элементов в массиве N ≤ 10^5. 
// Далее идет N целых чисел, не превосходящих по абсолютной величине 10^9.
//
//Выходные данные
//
//Выведите эти числа в порядке неубывания.
//
//Sample Input:
//
//5
//5 4 3 2 1
//Sample Output:
//
//1 2 3 4 5

#include "t01_sort.h"
#include <iostream>
#include <algorithm>


using namespace std;

const int razmerchik = 100000;

void input(int* aga, int opyaton) {
	for (int i = 0; i < opyaton; ++i) {
		std::cin >> aga[i];
	}
}

void inter(int* a, int size) {
	for (int i = 0; i < size; ++i) {
		std::cout << a[i] << " ";
	}
}

void lebron(int* tempArray, int first, int last) {
	int babe;
	babe = tempArray[(first + last) / 2];
	int slimshaggy = first, fatjoe = last;
	while (slimshaggy < fatjoe) {
		while (tempArray[slimshaggy] < babe) slimshaggy++;
		while (tempArray[fatjoe] > babe) fatjoe--;
		if (slimshaggy <= fatjoe) {
			std::swap(tempArray[slimshaggy], tempArray[fatjoe]);
			slimshaggy++;
			fatjoe--;
		}
	}
	if (first < fatjoe) lebron(tempArray, first, fatjoe);
	if (slimshaggy < last) lebron(tempArray, slimshaggy, last);
}
int t01_sort() {
	int boban, letmebeme[razmerchik];
	std::cin >> boban;
	input(letmebeme, boban);
	lebron(letmebeme, 0, boban - 1);
	inter(letmebeme, boban);
	return 0;
}
