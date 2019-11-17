//По данной строке определите, является ли она палиндромом
// (то есть, читается одинаково как слева-направо, так и справа-налево).
//
//Входные данные
//
//На вход подается 1 строка без пробелов.
//
//Выходные данные
//
//Необходимо вывести yes, если строка является палиндромом, и no в противном случае.
//
//Sample Input:
//
//kayak
//Sample Output:
//
//yes

#include "t05_palindrom.h"
#include <iostream>
#include<string>


using namespace std;

int t05_palindrom() {

  string str;
  int k;
  bool flag=false;
  cin>>str;
  k=str.length()-1;
  for(int i=0;i<str.length()/2;i++)
  {
    if(str[i]==str[k])flag=true;
    else {flag=false;break;}
    k--;
  }
  if(flag)cout<<"yes";
  else cout<<"no";
}
