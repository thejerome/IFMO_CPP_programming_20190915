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
#include<cstring>

using namespace std;

int t05_syn() {
  string str1,str2;
  int n;

  cin>>n;
    string a[n][2];
  for(int i=0;i<n;i++)
  {
    cin>>str1>>str2;

    a[i][0]=str1;
    a[i][1]=str2;


  }
  string str;
  cin>>str;
  for(int i=0;i<n;i++)
  {
    if(str==a[i][0]){cout<<a[i][1];break;}
    else if(str==a[i][1]){cout<<a[i][0];break;}
  }
}
