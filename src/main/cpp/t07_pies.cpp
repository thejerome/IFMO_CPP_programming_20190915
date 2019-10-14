#include <t07_pies.h>
#include <iostream>
using namespace std;

int t_07pies(){
    int a,b,c;
    cin >> a >> b >> c;
    b = b * c;
    a = a * c;
    a = a + b / 100 ;
    b = b % 100 ;
    cout << a << "  " << b ;
    return 0;
}
