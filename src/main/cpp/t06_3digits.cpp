#include <iostream>

using namespace std;

int main(){
    int d,x,z,c,s;
    cin >> d;
    c = d % 10;
    d = d / 10;
    z = d % 10;
    d = d / 10;
    x = d % 10;
    s = x+z+c;
    cout << s;
    return 0;
}
