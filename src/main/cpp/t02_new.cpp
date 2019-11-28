//Во входной строке записана последовательность чисел через пробел.
// Для каждого числа выведите слово YES (в отдельной строке),
// если это число ранее встречалось в последовательности или NO, если не встречалось.
//
//Входные данные
//
//Вводится число N - количество элементов списка, а затем N чисел.
//
//Выходные данные
//
//Выведите ответ на задачу.
//
//Sample Input:
//
//6
//1 2 3 2 3 4
//Sample Output:
//
//NO
//NO
//NO
//YES
//YES
//NO

#include "t02_new.h"
#include <iostream>


using namespace std;

int t02_new() {
  int n,br=0,k;
  bool flag=false;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++)
  {
    cin>>k;
    for(int j=0;j<i;j++)
    {
      if(k==a[j]){flag=true;break;}

    }
    if(!flag){cout<<"NO";br++;a[br-1]=k;}
    else cout<<"YES";
    if(i!=n-1)cout<<endl;
    flag=false;
  }

}
