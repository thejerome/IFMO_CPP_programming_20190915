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
int Word(char * S)
{
int D=1;
    if (*S == NULL)
    {
        D=0;
    }
    while(*S)
    {
       if (*S == ' ')
       {D++;}
    S++;
    }
    return D;
}
int t04_count() {
char S[65000];
cin.getline(S,65000);
cout << Word(S) << endl;
}
