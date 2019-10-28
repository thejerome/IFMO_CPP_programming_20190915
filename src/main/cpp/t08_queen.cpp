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

int steps (int arr[],int n, int k) {
    int c=0;
    for (int y=1; y<=n; y++){
        bool pos=true;
        for(int x=1; x<k; x++){
            if ( abs(x-k)==abs(arr[x-1]-y) || arr[x-1]==y ){
                pos= false;
                break;
            }
        }
        if (pos){
            if(k==n){
                c++;
            }
            else {
                arr[k-1]=y;
                c += steps(arr, n, k+1);
            }
        }
    }
    return c;
}

int letsgo (int n){
    int arr[n],k=1;
    return steps(arr,n,k);
}

int t08_queen(){
    int n;
    cin >> n;
    cout << letsgo(n);
    return 0;
}
