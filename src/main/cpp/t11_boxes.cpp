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
int a,b,c,aa,bb,cc = 0;
	cin >> a >> b >> c >> aa >> bb >> cc;
    if((a >= aa and ((b >= bb and c >= cc) or (b >= cc and c >= bb))) or (a >= bb and ((b >= aa and c >= cc) or (b >= cc and c >= aa))) or (a >= cc and ((b >= aa and c >= bb) or (b >= bb and c >= aa))) ){
    	if ((a == aa and ((b == bb and c == cc) or (b == cc and c == bb))) or (a == bb and ((b == aa and c == cc) or (b == cc and c == aa))) or (a == cc and ((b == aa and c == bb) or (b == bb and c == aa)))){
    		cout << "Boxes are equal";
    		return 0;
    	}
    	else {
    		cout << "The first box is larger than the second one";
    		return 0;
    	}
    }
    if((aa >= a and ((bb >= b and cc >= c) or (bb >= c and cc >= b))) or (aa >= b and ((bb >= a and cc >= c) or (bb >= c and cc >= a))) or (aa >= c and ((bb >= a and cc >= b) or (bb >= b and cc >= a))) ){
    	if (a == aa and b == bb and c == cc){
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
