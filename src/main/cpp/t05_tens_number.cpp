#include "t05_tens_number.h"
#include <iostream>

using namespace std;

int t05_tens_number() {
    int d;
    cin >> d;
    d = d / 10;
    d = d % 10;
    cout << d;
    return 0;
}
