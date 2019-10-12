//Есть две коробки, первая размером A1×B1×C1, вторая размером A2×B2×C2. Определите, можно ли разместить одну из этих коробок внутри другой, при условии, что поворачивать коробки можно только на 90 градусов вокруг ребер.
//
//Формат входных данных
//        Программа получает на вход числа A1, B1, C1, A2, B2, C2.
//Формат выходных данных
//        Программа должна вывести одну из следующих строчек:
//Boxes are equal, если коробки одинаковые,
//The first box is smaller than the second one, если первая коробка может быть положена во вторую,
//        The first box is larger than the second one, если вторая коробка может быть положена в первую,
//Boxes are incomparable, во всех остальных случаях.
//Sample Input 1:
//
//1
//2
//3
//3
//2
//1
//Sample Output 1:
//
//Boxes are equal
//        Sample Input 2:
//
//2
//2
//3
//3
//2
//1
//Sample Output 2:
//
//The first box is larger than the second one

#include "t11_boxes.h"
#include <iostream>

using namespace std;

int t11_boxes() {
    int a, b, c, a1, b1, c1, d, e, f, d1, e1, f1;
    cin >> a >> b >> c >> d >> e >> f;
    if (a <=b)
    {
        if (a<=c) {
            if (c<=b) {a1 = a, b1 = c, c1 = b;}
            else   {a1 = a, b1 = b, c1 = c;}
        }
        else {a1 = c, b1 = a, c1 = b;}
    }
    else {
        if (b<=c) {
            if (c<=a) {a1 = b, b1 = c, c1 = a;}
            else   {a1 = b, b1 = a, c1 = c;}
        }
        else {a1 = c, b1 = b, c1 = a;}
    }


    if (d <=e)
    {
        if (d<=f) {
            if (f<=e) {d1 = d, e1 = f, f1 = e;}
            else   {d1 = d, e1 = e, f1 = f;}
        }
        else {d1 = f, e1 = d, f1 = e;}
    }
    else {
        if (e<=f) {
            if (f<=a) {d1 = e, e1 = f, f1 = d;}
            else   {d1 = e, e1 = d, f1 = f;}
        }
        else {d1 = f, e1 = e, f1 = d;}
    }

    if (a1>=d1 and b1>=e1 and c1>=f1) {if (a1 == d1 and b1 == e1 and c1 == f1) {cout << "Boxes are equal";} else {cout << "The first box is larger than the second one";}}
    else {if (a1<=d1 and b1<=e1 and c1<=f1) {cout << "The first box is smaller than the second one";} else {cout <<"Boxes are incomparable";}}  

};
