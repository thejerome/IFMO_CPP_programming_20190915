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

int x,y,z,a,b,c, sum1,min1,max1,sum2,min2,max2;
cin >> x >> y >> z >> a >> b >> c;

sum1 = x+y+z;
if (x<=y) {
	min1=x;
	max1=y;
} else {
	min1=y;
	max1=x;
}
if (z<=min1) { min1 = z;}
if (z>=max1) { max1 = z;}



sum2 = a+b+c;
if (a<=b) {
	min2=a;
	max2=b;
} else {
	min2=b;
	max2=a;
}
if (c<=min2) { min2 = c;}
if (c>=max2) { max2 = c;}

if (min1==min2 && sum1-min1-max1==sum2-min2-max2 && max1==max2) {
	cout << "Boxes are equal";
} else {
		if (min1<=min2 && sum1-min1-max1<=sum2-min2-max2 && max1<=max2) {
			cout << "The first box is smaller than the second one";
		} else {
				if (min1>=min2 && sum1-min1-max1>=sum2-min2-max2 && max1>=max2) {
					cout << "The first box is larger than the second one";
				} else  {cout << "Boxes are incomparable";}
			}
	}
	
return 0 ;
};