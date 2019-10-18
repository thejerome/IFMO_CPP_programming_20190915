//Шахматный король ходит по горизонтали, вертикали и диагонали, но только на 1 клетку. Даны две различные клетки шахматной доски, определите, может ли король попасть с первой клетки на вторую одним ходом.
//
//Формат входных данных
//        Программа получает на вход четыре числа от 1 до 8 каждое, задающие номер столбца и номер строки сначала для первой клетки, потом для второй клетки.
//Формат выходных данных
//        Программа должна вывести YES, если из первой клетки ходом короля можно попасть во вторую или NO в противном случае.
//Sample Input:
//
//4
//4
//5
//5
//Sample Output:
//
//YES

#include "t05_chess_king.h"
#include <iostream>

using namespace std;

int t05_chess_king() {
 int a,b,c,d;
    cin>>a;
    cin>>b;
    cin>>c;
    cin>>d;
    bool t1=(-1=a-c || 1=a-c);
    bool t2=(-1=b-d || 1=b-d);
    if(t1||t2)
    {
        cout<<"YES"<<endl;
    } else
        {
        cout<<"NO"<<endl;
        }
    return 0;
};
