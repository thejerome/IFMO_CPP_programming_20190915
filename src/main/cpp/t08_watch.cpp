#include "t08_watch.h"
#include <iostream>

using namespace std;

int t08_watch() {
    int a,b,c;
   cin >> c;
   b = (c / 60) % 60 ;
   a = (c /3600) % 24 ;
   c = c % 60 ;
   printf("%01d:%02d:%02d", a, b, c);
    return 0;
}
