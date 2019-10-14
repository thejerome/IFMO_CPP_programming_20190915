#include "t02_squirrels2.h"
#include <iostream>

using namespace std;

int t02_squirrels2() {
    int k,x ;
    cin >> x >> k ;
    x = k % x;
    cout << x ;
    return 0;
}
