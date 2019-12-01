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


using namespace std;

int t05_syn() {
   string x,y,n;
   int N;
   cin>>N;
   string A[N][2];
   for(int i=0 ; i<N ; i++){
       cin>>x>>y;
       A[i][0]=x;
       A[i][1]=y;
   }
   cin>>n;
   for(int i=0 ; i<N ; i++){
       if(n == A[i][0]){
           cout<<A[i][1]<<endl;
           break;
       }
       else if(n == A[i][1]) {
           cout << A[i][0] << endl;
           break;
       }
   }
    return 0;
}
