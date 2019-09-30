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
    int a = 0, b = 0, c = 0, a2 = 0, b2 = 0, c2 = 0;
    cin >> a >> b >> c >> a2 >> b2 >> c2;
    if ((a==a2 && b==b2 && c==c2)||(a==b2 && b==c2 && c==a2)||(a==c2 && b==a2 && c==b2)||(a==a2 && b==c2 && c==b2)||(a==b2 && b==a2 && c==c2)||(a==c2 && b==b2 && c==a2))
    {
        cout << "Boxes are equal" << endl;
    }
    else if ((a>=a2 && b>=b2 && c>=c2)||(a>=b2 && b>=c2 && c>=a2)||(a>=c2 && b>=a2 && c>=b2)||(a>=a2 && b>=c2 && c>=b2)||(a>=b2 && b>=a2 && c>=c2)||(a>=c2 && b>=b2 && c>=a2))
    {
        cout << "The first box is larger than the second one" << endl;
    }
    else if ((a<=a2 && b<=b2 && c<=c2)||(a<=b2 && b<=c2 && c<=a2)||(a<=c2 && b<=a2 && c<=b2)||(a<=a2 && b<=c2 && c<=b2)||(a<=b2 && b<=a2 && c<=c2)||(a<=c2 && b<=b2 && c<=a2))
    {
        cout << "The first box is smaller than the second one" << endl;
    }
    else
    {
        cout << "Boxes are incomparable" << endl;
    }
    
    return 0;
}