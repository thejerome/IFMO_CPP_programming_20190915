#include <iostream>
using namespace std;

int t_09snail(){
    int a,b,h,l;
   cin >> h >> a >> b;
   l = 0;
   l = h / (a - b) ;
   l = l + 1;
   cout << l;
    return 0;
}
