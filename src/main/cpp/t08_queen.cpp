//Дано число N. Определите, сколькими способами можно расставить на доске N×N N ферзей, не бьющих друг друга.
//
//Формат входных данных
//        Задано единственное число N. (N ≤ 10)
//
//Формат выходных данных
//        Выведите ответ на задачу.
//Подсказка
//        Напишите рекурсивную функцию, которая пытается поставить ферзя в очередной столбец. 
// Если на эту клетку ставить ферзя нельзя (он бьет предыдущих), 
// то такой вариант даже не стоит рассматривать. 
// Когда вы успешно поставили ферзя в последний столбец - увеличивайте счетчик.
//Sample Input:
//
//8
//Sample Output:
//
//92

#include "t08_queen.h"
#include <iostream>
#include <vector>

using namespace std;

	bool insize(int u,int v,int n){
		return 1 <= u and u <= n and 1 <= v and v <= n;
	}

	bool can_put(int i,int j,int n,vector <vector <bool> > has){
		for(int t = 1;t <= n;++t){
			if(has[t][j] or has[i][t]){
				return false;
			}
		}
		for(int t = 0;t <= n;++t){
			if(insize(i + t,j + t,n) and has[i + t][j + t]){
				return false;
			}
			if(insize(i - t,j - t,n) and has[i - t][j - t]){
				return false;
			}
			if(insize(i - t,j + t,n) and has[i - t][j + t]){
				return false;
			}
			if(insize(i + t,j - t,n) and has[i + t][j - t]){
				return false;
			}
		}
		return true;
	}

	long long calc(int cur_col,int n,vector <vector <bool> > has){
		if(cur_col == n + 1){
			return 1;
		}
		long long res = 0;
		for(int i = 1;i <= n;++i){
			if(can_put(i,cur_col,n,has)){
				has[i][cur_col] = true;
				res += calc(cur_col + 1,n,has);
				has[i][cur_col] = false;
			}
		}
		return res;
	}

int t08_queen(){
    	int n;
    	vector < vector <bool> > has;
    	cin>>n;
    	has.resize(n + 1,vector <bool> (n + 1,false));
    	cout<<calc(1,n,has);
}
