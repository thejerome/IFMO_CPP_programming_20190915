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
    int a, b, c, a1, b1, c1, t;
    cin >> a >> b >> c >> a1 >> b1 >> c1;
    t = 0;
    if (b>a){
        t = a;
        a = b;
        b = t;
    }
    if (c>a){
        t = a;
        a = c;
        c = t;
    }
    if (c>b){
        t = c;
        c = b;
        b = t;
    }
    if (b1>a1){
        t = a1;
        a1 = b1;
        b1 = t;
    }
    if (c1>a1){
        t = a1;
        a1 = c1;
        c1 = t;
    }
    if (c1>b1){
        t = c1;
        c1 = b1;
        b1 = t;
    }
    if ((a == a1)&&(b == b1)&&(c == c1)){
        cout << "Boxes are equal";
    }else if ((a >= a1)&&(b >= b1)&&(c >= c1)){
        cout << "The first box is larger than the second one";
    }else if ((a <= a1)&&(b <= b1)&&(c <= c1)){
        cout << "The first box is smaller than the second one";
    }else{
        cout << "Boxes are incomparable";
    }
    return 0;
};
