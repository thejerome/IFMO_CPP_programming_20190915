//Дана строка, содержащая пробелы. 
// Найдите, сколько в ней слов 
// (слово – это последовательность непробельных символов, 
// слова разделены одним пробелом, первый и последний символ строки – не пробел).
//
//Входные данные
//
//На вход подается строка.
//
//Выходные данные
//
//Необходимо вывести количество слов в первой из введенных строк.
//
//Примечание
//﻿В этой задаче может быть полезен метод find с двумя параметрами. 
// Первый из них - искомая подстрока, второй - позиция, начиная с которой нужно искать первое вхождение.
//Sample Input:
//
//In the town where I was born
//Sample Output:
//
//7

#include "t04_count.h"
#include <iostream>


using namespace std;

int t04_count() {
string s;
getline(cin,s);
int count=1;
for (auto c : s){
    if (c==' ') count++;
}
cout << count;
return 0;
}
