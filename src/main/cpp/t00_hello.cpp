//Напишите программу, выводящую "Hello, World!". Можно скопировать ее из конспекта.
//
//Sample Input:
//
//Sample Output:
//
//Hello, World!

#include "t00_hello.h"
#include <iostream>

using namespace std;

int t00_hello() {

int a,b;

cout << "Enter two numbers :\n";
cin >> a >> b;

cout <<  "addition : " << a + b << "\n";
cout << "subtraction : " << a - b << "\n";
cout << "multiplication : " << a * b << "\n";
cout << "division : " << a / b << "\n";
};
