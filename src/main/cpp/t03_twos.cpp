//Дано натуральное число N. Выведите слово YES, если число N является точной степенью двойки, или слово NO в противном случае.
//
//Формат входных данных
//        Вводится натуральное число.
//Формат выходных данных
//        Выведите ответ на задачу.
//Sample Input 1:
//
//1
//Sample Output 1:
//
//YES
//        Sample Input 2:
//
//2
//Sample Output 2:
//
//YES

#include "t03_twos.h"
#include <iostream>

using namespace std;

int t03_twos() {
int A,B=false;
cin>>A;
while (A>=2)
{
    if (A%2!=0)
{
    B=true;    
}
A/=2;
}
if (!B) {cout<<"YES";}
else {cout<<"NO";}
return 0;
    
};
