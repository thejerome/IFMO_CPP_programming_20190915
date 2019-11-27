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
#include <vector>

using namespace std;

int t05_syn() {
    int n =0;
    cin>>n;
    vector <string> vec;
    for (int i=0; i<n*2; i++){
        string t;
        cin>>t;
        vec.push_back(t);
    }

    string word;
    cin>>word;

    for (int i=0; i<n*2; i++){
        if(vec[i]==word){
            if (i%2==0)
                cout<<vec[i+1];
            else
                cout<<vec[i-1];
            break;
        }
    }






}
