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

int A1, B1, C1, A2, B2, C2, s=0, l=0, e=0;

  cin >> A1;
  cin >> B1;
  cin >> C1;
  cin >> A2;
  cin >> B2;
  cin >> C2;

  if (A1==A2 && B1==B2 && C1==C2) {
        ++e;
    } else if (A1<=A2 && B1<=B2 && C1<=C2) {
        ++s;
    } else if (A1>=A2 && B1>=B2 && C1>=C2) {
        ++l;
    }
  if (A1==A2 && B1==C2 && C1==B2) {
        ++e;
    } else if (A1<=A2 && B1<=C2 && C1<=B2) {
        ++s;
    } else if (A1>=A2 && B1>=C2 && C1>=B2) {
        ++l;
    }
  if (A1==B2 && B1==A2 && C1==C2) {
        ++e;
    } else if (A1<=B2 && B1<=A2 && C1<=C2) {
        ++s;
    } else if (A1>=B2 && B1>=A2 && C1>=C2) {
        ++l;
    }
  if (A1==B2 && B1==C2 && C1==A2) {
        ++e;
    } else if (A1<=B2 && B1<=C2 && C1<=A2) {
        ++s;
    } else if (A1>=B2 && B1>=C2 && C1>=A2) {
        ++l;
    }
  if (A1==C2 && B1==A2 && C1==B2) {
        ++e;
    } else if (A1<=C2 && B1<=A2 && C1<=B2) {
        ++s;
    } else if (A1>=C2 && B1>=A2 && C1>=B2) {
        ++l;
    }
  if (A1==C2 && B1==B2 && C1==A2) {
        ++e;
    } else if (A1<=C2 && B1<=B2 && C1<=A2) {
        ++s;
    } else if (A1>=C2 && B1>=B2 && C1>=A2) {
        ++l;
    }

  if (e>=l && e>=s && e>0) {
    cout << "Boxes are equal";
  } else if (s>l && s>0) {
    cout << "The first box is smaller than the second one";
  } else if (l>s && l>0) {
    cout << "The first box is larger than the second one";
  } else cout << "Boxes are incomparable";

  return 0;
};