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


using namespace std;
bool palindrom(const std::string & a){
for (std::size_t i = 0, k = a.size() - 1; i <= k; ++i, --k){
if (a[i] != a[k])
return false;}
return true;
}
int t05_palindrom() {
string a;
getline (cin, a);
if (palindrom(a)){
cout << "yes";}
else{
cout << "no";}
return 0;
}
