//Найдите в данной строке самое длинное слово и выведите его.
//
//Входные данные
//
//Вводится одна строка. Слова в ней отделены одним пробелом.
//
//Выходные данные
//
//Выведите самое длинное слово. Если таких слов несколько, то выводить нужно, которое встречается раньше.
//
//Sample Input:
//
//Everyone of us has all we need
//Sample Output:
//
//Everyone

#include "t06_longest.h"
#include <iostream>


using namespace std;

int t06_longest() {
  string str;
  string sub,max="";
  int probel=0;
  getline(cin,str);
  for(int i=0;i<str.length();i++)
  {

    if(str[i]==' ') {
      if(probel==0)sub=str.substr(probel,i-probel);
      else sub=str.substr(probel+1,i-probel-1);
      if(sub.length()>max.length())  max=sub;
      probel=i;
    }
    if(i==str.length()-1)
    {
      sub=str.substr(probel+1,i-probel+1);
      if(sub.length()>max.length())max=sub;
    }
  }
  cout<<max;
}
