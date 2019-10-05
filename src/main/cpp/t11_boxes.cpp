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
         int a1,b1,c1;
        int a2,b2,c2;
        cin>>a1>>b1>>c1;
        cin>>a2>>b2>>c2;
        if(a2 <= a1 and b2 <= b1 and c2 <= c1){
            if(a2 == a1 and b2 == b1 and c2 == c1){
                cout<<"Boxes are equal";
            } else {
                cout<<"The first box is larger than the second one";
            }
        } else if(a2 <= a1 and c2 <= b1 and b2 <= c1){
            if(a2 == a1 and c2 == b1 and b2 == c1){
                cout<<"Boxes are equal";
            } else {
                cout<<"The first box is larger than the second one";
            }
        } else if(b2 <= a1 and a2 <= b1 and c2 <= c1){
            if(b2 == a1 and a2 == b1 and c2 == c1){
                cout<<"Boxes are equal";
            } else {
                cout<<"The first box is larger than the second one";
            }
        } else if(b2 <= a1 and c2 <= b1 and a2 <= c1){
            if(b2 == a1 and c2 == b1 and a2 == c1){
                cout<<"Boxes are equal";
            } else {
                cout<<"The first box is larger than the second one";
            }
        } else if(c2 <= a1 and a2 <= b1 and b2 <= c1){
            if(c2 == a1 and a2 == b1 and b2 == c1){
                cout<<"Boxes are equal";
            } else {
                cout<<"The first box is larger than the second one";
            }
        } else if(c2 <= a1 and b2 <= b1 and a2 <= c1) {
            if (c2 == a1 and b2 == b1 and a2 == c1) {
                cout << "Boxes are equal";
            } else {
                cout << "The first box is larger than the second one";
            }
        } else if(a2 >= a1 and b2 >= b1 and c2 >= c1){
            cout<<"The first box is smaller than the second one";
        } else if(a2 >= a1 and c2 >= b1 and b2 >= c1){
            cout<<"The first box is smaller than the second one";
        } else if(b2 >= a1 and a2 >= b1 and c2 >= c1){
            cout<<"The first box is smaller than the second one";
        } else if(b2 >= a1 and c2 >= b1 and a2 >= c1){
            cout<<"The first box is smaller than the second one";
        } else if(c2 >= a1 and a2 >= b1 and b2 >= c1){
            cout<<"The first box is smaller than the second one";
        } else if(c2 >= a1 and b2 >= b1 and a2 >= c1){
            cout<<"The first box is smaller than the second one";
        }
        else {
            cout<<"Boxes are incomparable";
        }
}
