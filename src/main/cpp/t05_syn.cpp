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
        int n;
        map <string,string> mas;
        cin>>n;
        for(int i = 1;i <= n;++i){
            string s,t;
            cin>>s>>t;
            mas[t] = s;
	    mas[s] = t;
        }
        string syn;
        cin>>syn;
        cout<<mas[syn];
}
