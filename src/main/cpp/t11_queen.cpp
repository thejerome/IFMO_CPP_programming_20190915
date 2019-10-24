//Известно, что на доске 8×8 можно расставить 8 ферзей так, чтобы они не били друг друга. Вам дана расстановка 8 ферзей на доске, определите, есть ли среди них пара бьющих друг друга.
//Формат входных данных
//
//        Программа получает на вход восемь пар чисел, каждое число от 1 до 8 - координаты 8 ферзей.
//Формат выходных данных
//        Если ферзи не бьют друг друга, выведите слово NO, иначе выведите YES.
//Sample Input 1:
//
//1 7
//2 4
//3 2
//4 8
//5 6
//6 1
//7 3
//8 5
//Sample Output 1:
//
//NO
//        Sample Input 2:
//
//1 8
//2 7
//3 6
//4 5
//5 4
//6 3
//7 2
//8 1
//Sample Output 2:
//
//YES

#include "t11_queen.h"
#include <iostream>
#include <cmath>


using namespace std;

int t11_queen() {
	int N = 8;
    int M[N][N];
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            M[i][j] = 0;
    for (int i = 0; i < N; i++)    {
        int a,b;
        cin >> a >> b;
        M[a-1][b-1] = 1;
    }
    int sum1 = 0, sum2 = 0;
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++){
    		sum1 += M[i][j];
    		sum2 += M[j][i];
        }
        if (sum1 > 1 || sum2 > 1) {
        	cout << "YES" << endl;
			return 0;
        }
        sum1 = 0;
        sum2 = 0;
    }
    for (int bias = 0; bias < N; bias++)	{
        for (int j = 0; j < N - bias; j++)	{
            sum1 += M[j][j+bias];
            sum2 += M[j+bias][j];
        }
        if (sum1 > 1 || sum2 > 1 ) {
        	cout << "YES" << endl;
        	return 0;
        }
        sum1 = 0;
        sum2 = 0;
    }
    for (int bias = 0; bias < N; bias++)	{
        for (int j = 0; j < N - bias; j++)	{
            sum1 += M[N-j-1][j+bias];
            sum2 += M[N-j-1-bias][j];
        }
        if (sum1 > 1 || sum2 > 1 ) {
        	cout << "YES" << endl;
        	return 0;
        }
        sum1 = 0;
        sum2 = 0;
    }
    cout << "NO";
    return 0;
}
