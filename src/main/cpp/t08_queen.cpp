#include<iostream>
#include<cmath>
using namespace std;
bool GoodPlace(int*,int,int);
void placeOneQueen(int* board, int col, int n,int* total)
{
  if(col>=n){
    (*total)++;
  //  PrintTheBoard(board,n);
    return;
  }
  for(int i=0;i<n;i++)
  {
    if(GoodPlace(board,col,i)){
      board[col]=i;
      placeOneQueen(board,col+1,n,total);
    }
  }

}

 bool GoodPlace(int* board, int col, int row)
{
    int u=row-1;
    int d=row+1;
    for(int i=col-1;i>=0;i--){
      if (board[i] == row || board[i] == u || board[i] == d) return false;
      u--;
      d++;
    }
    return true;
}
int t08_queen(){

int total=0;
    int n;
    cin>>n;
    int board[n];
   placeOneQueen(board, 0, n, &total);
   cout<<(total);
    return 0;
}
