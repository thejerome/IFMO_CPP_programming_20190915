#include "t09_snail.h"
#include <iostream>

using namespace std;

int t09_snail() {
    int a,b,h,l;
   cin >> h >> a >> b;
   l = (h-a-1)/(a-b)+2 ;
   cout << l;
    return 0;
}
