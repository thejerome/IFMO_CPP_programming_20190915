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
#include <string>


using namespace std;

int t04_count() {
    string s;
    getline (cin, s);
    int a;
    a = 1;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ' ') {
            a++;
        }
    }
    cout << a;
    return 0;

}
