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

    int A1=0;
    int B1=0;
    int C1=0;
    int A2=0;
    int B2=0;
    int C2=0;
    int temp1=0;
    int temp2=0;
    int temp3=0;
    int temp4=0;
    cin >> A1 >> B1 >> C1 >> A2 >> B2 >> C2;

    if (A1 <= B1) {
        temp1 = A1;
        temp2 = B1;
    }
    else {
        temp1 = B1;
        temp2 = A1;
    }

    if (temp1 <= C1) temp3 = C1;
    else {
        temp3 = temp1;
        temp1 = C1;
    }

    if (temp2 >= temp3) {
        temp4 = temp2;
        temp2 = temp3;
        temp3 = temp4;
    }
    A1 = temp1; B1 = temp2; C1 = temp3;


    if (A2 <= B2) {
        temp1 = A2;
        temp2 = B2;
    }
    else {
        temp1 = B2;
        temp2 = A2;
    }

    if (temp1 <= C2) temp3 = C2;
    else {
        temp3 = temp1;
        temp1 = C2;
    }

    if (temp2 >= temp3) {
        temp4 = temp2;
        temp2 = temp3;
        temp3 = temp4;
    }
    A2 = temp1; B2 = temp2; C2 = temp3;


    if (A1 == A2 && B1 == B2 && C1 == C2)
        cout << "Boxes are equal";
    else if (A1 >= A2 && B1 >= B2 && C1 >= C2)
        cout << "The first box is larger than the second one";
    else if (A2 >= A1 && B2 >= B1 && C2 >= C1)
        cout << "The first box is smaller than the second one";
    else cout << "Boxes are incomparable";

};