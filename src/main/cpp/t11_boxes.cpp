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
 int a1,b1,c1,a2,b2,c2,max1,mid1,min1,max2,mid2,min2;
    cin>>a1;
    cin>>b1;
    cin>>c1;
    cin>>a2;
    cin>>b2;
    cin>>c2;
    if (a1>b1 && a1>c1) {
        max1=a1;
        if (c1>b1) {
            mid1=c1;
            min1=b1;
        }
        else {
            mid1=b1;
            min1=c1;
        }
    }
    if (c1>b1 && c1>a1) {
        max1=c1;
        if (a1>b1) {
            mid1=a1;
            min1=b1;
        }
        else {
            mid1=b1;
            min1=a1;
        }
    }
    if (b1>c1 && b1>a1) {
        max1=a1;
        if (c1>a1) {
            mid1=c1;
            min1=a1;
        }
        else {
            mid1=a1;
            min1=c1;
        }
    }
    if (a2>b2 && a2>c2) {
        max2=a2;
        if (c2>b2) {
            mid2=c2;
            min2=b2;
        }
        else {
            mid2=b2;
            min2=c2;
        }
    }
    if (b2>c2 && b2>a2) {
        max2=a2;
        if (c2>a2) {
            mid2=c2;
            min2=a2;
        }
        else {
            mid2=a2;
            min2=c2;
        }
    }
    if (c2>b2 && c2>a2) {
        max2=c2;
        if (a2>b2) {
            mid2=a2;
            min2=b2;
        }
        else {
            mid2=b2;
            min2=a2;
        }
    }
    if (max1==max2 && mid1==mid2 && min1==min2) {
        cout<<"Boxes are equal";
    }
    else {
        if (max1>=max2 && mid1>=mid2 && min1>=min2) {
        cout<<"The first box is larger than the second one";
        }
        else {
        if (max1<=max2 && mid1<=mid2 && min1<=min2) {
        cout<<"The first box is smaller than the second one";
              }
     
        else {
        cout<<"Boxes are incomparable";
              } 
        }
    }
    return 0;
}
