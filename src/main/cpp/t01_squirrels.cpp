//Белочки и орешки - 1
//
//N белочек нашли K орешков и решили разделить их поровну. Определите, сколько орешков достанется каждой белочке.
//
//Формат входных данных
//
//        На вход дается два целых положительных числа N и K, каждое из которых не превышает 10000.
//
//Формат выходных данных
//
//        Выведите одно целое число - ответ на задачу.
//
//Sample Input:
//
//3
//14
//Sample Output:
//
//4
#include <iostream>
using namespace std;
int main() 
{
	int K, N;
	cout << "number of nuts:";
	cin >> K;
	cout << "The number of squirrels:";
	cin >> N;
	cout << "How many nuts will each squirrel get:" << K / N;
	return 0;
}