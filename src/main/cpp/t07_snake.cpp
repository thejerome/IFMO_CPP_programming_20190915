//По данным числам n и m заполните двумерный массив размером n×m числами от 1 до n×m “змейкой”,
// как показано в примере.
//
//Формат входных данных
//        Вводятся два числа n и m, каждое из которых не превышает 30.
//Формат выходных данных
//        Выведите полученный массив, отводя на вывод каждого элемента ровно 4 символа.
//
//Sample Input:
//
//3 5
//Sample Output:
//
//   1   2   3   4   5
//  10   9   8   7   6
//  11  12  13  14  15

#include "t07_snake.h"
#include <iostream>
#include <iomanip>


using namespace std;


int t07_snake() {

    
const int N = 32;
int a[N][N];
int n,m;

    	cin>>n>>m;
    	int cur = 0;
    	for(int i = 1;i <= n;++i){
    		if(i & 1){
    			for(int j = 1;j <= m;++j){
    				a[i][j] = ++cur;
    			}
    		} else {
    			for(int j = m;j >= 1;--j){
    				a[i][j] = ++cur;
    			}
    		}
    	}
    	for(int i = 1;i <= n;++i){
    		for(int j = 1;j <= m;++j){
    			cout<<setw(4)<<a[i][j];
    		}
    		cout<<'\n';
    	}
}
