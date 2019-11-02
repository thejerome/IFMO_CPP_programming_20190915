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


using namespace std;

int t07_snake() {
int n,m,i,j,x;
    cin>>n>>m;
    int a[30][30];
    for(i =1;i<=n;i++){
        for(j=1;j<=m;j++){
            if(i%2!=0){
                x=j+m*(i-1);
                for(int y=j;y<=m;y++){
                    a[i][y]=x;
                x++;
                cout<<a[i][y]<<" ";
            }
                break;
            }

            else{
                x=m*i-(j-1);
                for(int y=j;y<=m;y++){
                    a[i][y]=x;
                    x--;
                    cout<<a[i][y]<<" ";
                }
                break;
            }
        }
        cout<<endl;
        }
    
    return 0;
}
