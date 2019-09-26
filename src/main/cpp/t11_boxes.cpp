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
    int A1, B1, C1, A2, B2, C2, l1, m1, s1, l2, m2, s2;
    cin >> A1 >> B1 >> C1 >> A2 >> B2 >> C2;
    if (A1 > B1)
    {l1 = A1;
        if (C1 > A1)
        {l1 = C1;
         m1 = A1;
         s1 = B1;}
            else
        {
            if (C1 > B1)
             {m1 = C1;
              s1 = B1;}
            else
             {m1 = B1;
              s1 = C1;}
        }
    }
    else
    {
        l1 = B1;
        if (C1 > B1)
        {l1 = C1;
         m1 = B1;
         s1 = A1;}
            else
        {
            if (A1 > C1)
             {m1 = A1;
              s1 = C1;}
            else
             {m1 = C1;
              s1 = A1;}
        }
    }
//
    if (A2 > B2)
    {l2 = A2;
        if (C2 > A2)
        {l2 = C2;
         m2 = A2;
         s2 = B2;}
            else
        {
            if (C2 > B2)
             {m2 = C2;
              s2 = B2;}
            else
             {m2 = B2;
              s2 = C2;}
        }
    }
    else
    {
        l2 = B2;
        if (C2 > B2)
        {l2 = C2;
         m2 = B2;
         s2 = A2;}
            else
        {
            if (A2 > C2)
             {m2 = A2;
              s2 = C2;}
            else
             {m2 = C2;
              s2 = A2;}
        }
    }
    if ((l1==l2) && (m1==m2) && (s1==s2))
    {
        cout << "Boxes are equal";
    } else {
    if ((l1>l2) && (m1>m2) && (s1>s2))
    {
        cout << "The first box is larger than the second one";
    } else {
    if ((l1<l2) && (m1<m2) && (s1<s2))
    {
        cout << "The first box is smaller than the second one";
    } else {
        cout << "Boxes are incomparable";
    }}}
    return 0;
};
