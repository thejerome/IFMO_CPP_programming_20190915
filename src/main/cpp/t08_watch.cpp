#include "t08_watch.h"
#include <iostream>

using namespace std;

int t08_watch() {
    int a,b,c;
  cin >> c;
  a = c%60;
  b = (c/60)%60;
  c = (c/3600)%24;  
  cout << c << ":" << b/10 << b%10 << ":" << a/10 << a%10;
    return 0;
}
