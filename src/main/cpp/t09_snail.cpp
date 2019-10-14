#include "t09_snail.h"
#include <iostream>

using namespace std;

int t09_snail() {
    int a,b,h,l;
   cin >> h >> a >> b;
   l = h / (a - b) ;
   l = l + 1;
   cout << l;
    return 0;
}
