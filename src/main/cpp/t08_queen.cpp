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
check(int n, int a[n][2]){
bool flag=false;
for (int i=0;i <=(n-1);i++) {
    for (int j=0;j <= 1;j++) {
        cin >> a[i][j];};};
for (int i=0;i <=(n-1);i++) {
    for (int j=i+1;j <=(n-1);j++) {
        if ((a[i][0]==a[j][0]) or (a[i][1]==a[j][1]) or ((a[i][0]-a[j][0])==(a[i][1]-a[j][1])) or ((a[i][0]-a[j][0])==(a[j][1]-a[i][1])))
            flag=true;
    };};
if (flag) return false;
else return true;
}
int t08_queen(int n, M[n][2],int i,int sum){
    if (i==0){
        if (check(n, M[n][2])) {
            sum++;
            clean(n, M[n][2]);
        }
        return 0;
    }
    for (int j=0,j<=N-1,j++){
        for (int k=0,k<=1,k++){
            M[j][k]=1
        }
    }
}
void clean(int n, int a[n][2]){
    for (int i=0;i <=(n-1);i++) {
    for (int j=0;j <=1;j++) {
        a[i][j]=0;
        ;};};
}

int t08_queen(){
int n;
cin >>n;
int a[n][2];
clean(n,a[n][2]);
int N;
cin >>N;
cout << fib(N);
    return 0;
}
