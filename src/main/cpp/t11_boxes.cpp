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
#include <bits/stdc++.h>

using namespace std;

int t11_boxes() {

    int a,b,c,i,j,k;
    cin >> a >> b >> c >> i >> j >> k;
    int box1 [3] = {a,b,c};
    int box2 [3] = {i,j,k};
    int n = sizeof(box1)/sizeof(box1[0]);
    sort(box1, box1+n);
    sort(box2, box2+n);

    if(box1[0] == box2[0] && box1[abs(1)] == box2[1] && box1[2] == box2[2]){
        cout << "Boxes are equal";
    }else if(box1[0] <= box2[0] && box1[1] <= box2[1] && box1[2] <= box2[2]){
        cout << "The first box is smaller than the second one";
    }else if(box1[0] >= box2[0] && box1[1] >= box2[1] && box1[2] >= box2[2]){
        cout << "The first box is larger than the second one";
    }else{
        cout << "Boxes are incomparable";
    }

    return 0;

};