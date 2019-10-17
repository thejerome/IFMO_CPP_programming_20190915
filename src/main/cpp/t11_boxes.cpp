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
  int a, b, c, d, e, f;
    cin >> a >> b >> c >> d >> e >> f;
    if ((a >= d and ((b >= e and c >= f) or (b >= f and c >= e))) or (a >= e and ((b >= d and c >= f) or (b >= f and c >= d))) or (a >= f and ((b >= d and c >= e) or (b >= e and c >= d))) ) {
        if ((a == d and ((b == e and c == f) or (b == f and c == e))) or (a == e and ((b == d and c == f) or (b == f and c == d))) or (a == f and ((b == d and c == e) or (b == e and c == d)))) {
            cout << "Boxes are equal";
            return 0;
        } else {
            cout << "The first box is larger than the second one";
            return 0;
        }
    }
    if((d >= a and ((e >= b and f >= c) or (e >= c and f >= b))) or (d >= b and ((e >= a and f >= c) or (e >= c and f >= a))) or (d >= c and ((e >= a and f >= b) or (e >= b and f >= a))) ){
        if ((a == d and ((b == e and c == f) or (b == f and c == e))) or (a == e and ((b == d and c == f) or (b == f and c == d))) or (a == f and ((b == d and c == e) or (b == e and c == d)))){
            cout << "Boxes are equal";
            return 0;
        }
        else {
            cout << "The first box is smaller than the second one";
            return 0;
        }
    }
    else {
        cout << "Boxes are incomparable";
        return 0;
    }
}
};
