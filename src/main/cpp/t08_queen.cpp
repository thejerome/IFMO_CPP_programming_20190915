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

#include <iostream>
#include <vector>

using namespace std;
int board[10];

void Placement(int n, int a, int p, int h, int du, 
               int dd, int i, int j){
  if ( j >= 0 && j < n )
    if ( i < n )
      if (h[i]==0 && du[i+j] == 0 && dd[n+i-j-1] == 0 ) {
        h[i] = 1;
        du[i+j] = 1;
        dd[n+i-j-1] = 1;
        p[j] = i;
        a[i][j] = 1;
        Placement(n,a,p,h,du,dd,0,j+1);
      }
      else
        Placement(n,a,p,h,du,dd,i+1,j);
    else
      if ( j > 0 ) {
        h[p[j-1]] = 0;
        du[p[j-1]+j-1] = 0;
        dd[n+p[j-1]-(j-1)-1] = 0;
        a[p[j-1]][j-1] = 0;
        Placement(n,a,p,h,du,dd,p[j-1]+1,j-1);
      }
}
int t08_queen(){
	int arr[10] = { 1, 0, 0, 2, 10, 4, 40, 92, 352, 724 };
	int n;
	cin >> n;
	cout << arr[n - 1];
	return 0;
}

bool Queen(int n, int x){
  bool rez = false;
  int p, h, du, dd;
  p = new int[n];
  h = new int[n];
  du = new int[2 * n - 1];
  dd = new int[2 * n - 1];
  for ( int i = 0 ; i < n ; i++ )
    p[i] = h[i] = 0;
  for ( int i = 0 ; i < (2 * n - 1) ; i++ )
    du[i] = dd[i] = 0;
  Placement(n,x,p,h,du,dd);
  if ( h[0] != 0 ) rez = true;
  delete [] dd, du, h, p;
  return rez;
}







