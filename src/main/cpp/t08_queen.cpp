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
    int func (int arr[],int n, int r) {
    int l=0;
    for (int y = 1; y <= n; y++){
        bool position =true;
        for(int x=1; x < r; x++){
            if (abs(x - r)==abs(arr[x-1]-y) || arr[x-1]==y ){
                position = false;
                break;
            }
        }
        if (position){
            if(r == n){
                l++;
            }
            else {
                arr[r-1] = y;
                l += func(arr, n, r+1);
            }
        }
    }
    return l;
}
int go (int n){
    int arr[n], r =1;
    return func(arr, n , r);
}

int t08_queen(){
    int n;
    cin >> n;
    cout << go(n);
    return 0;
}
