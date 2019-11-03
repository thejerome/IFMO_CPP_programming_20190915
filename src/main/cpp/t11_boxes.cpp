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
   int koka, sasasa, kola, fass, heelo, hee;
 
    cin >> koka >> kola >> heelo >> sasasa >> fass >> hee;
 
    if ((koka == sasasa && kola == fass && heelo == hee) || (koka == sasasa && kola == hee && heelo == fass) || (koka == hee && kola == fass && heelo == sasasa) || (koka == fass && kola == koka && heelo == hee))
    {
        cout << "Boxes are equal";
        return 0;
    }
    if ((koka <= sasasa && kola <= fass && heelo <= hee) || (koka <= fass && kola <= sasasa && heelo <= hee) || (koka <= sasasa && heelo <= fass && kola <= hee) || (koka <= hee && kola <= fass && heelo <= sasasa) || (koka <= hee && heelo <= fass && kola <= sasasa) || (koka <= fass && kola <= hee && heelo <= sasasa))
    {
        cout << "The first box is smaller than the second one";
    }
    else
    {
        if ((koka >= sasasa && kola >= fass && heelo >= hee) || (koka >= fass && kola >= sasasa && heelo >= hee) || (koka >= sasasa && heelo >= fass && kola >= hee) || (koka >= hee && kola >= fass && heelo >= sasasa) || (koka >= hee && heelo >= fass && kola >= sasasa) || (koka >= fass && kola >= hee && heelo >= sasasa))
        {
            cout << "The first box is larger than the second one";
        }
        else
        {
            cout << "Boxes are incomparable";
        }
    }
    return 0;
};
