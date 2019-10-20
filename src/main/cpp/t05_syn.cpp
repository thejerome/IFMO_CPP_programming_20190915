//Вам дан словарь, состоящий из пар слов. 
// Каждое слово является синонимом к парному ему слову. 
// Все слова в словаре различны. 
// Для одного данного слова определите его синоним.
//
//Входные данные
//
//Программа получает на вход количество пар синонимов N. 
// Далее следует N строк, каждая строка содержит ровно два слова-синонима. 
// После этого следует одно слово.
//
//Выходные данные
//
//Программа должна вывести синоним к данному слову.
//
//Sample Input:
//
//3
//Hello Hi
//Bye Goodbye
//List Array
//Goodbye
//
//Sample Output:
//
//Bye

#include "t05_syn.h"
#include <iostream>
#include <map>
#include <string>


using namespace std;

int t05_syn() {
    map<string, string> a;
    string in1, in2;
    int n;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> in1 >> in2;
        a[in1] = in2;
        a[in2] = in1;
    }

    cin >> in1;
    cout << a[in1];
}
