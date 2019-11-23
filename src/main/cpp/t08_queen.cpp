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

int k=0;

void attempt(int n,int j,bool* r,bool* a,bool* b){
    for (int i=0;i<n;i++){
        if (!r[i] && !a[i+j] && !b[n+i-j]) {
            r[i] = true; 
            a[i+j] = true; 
            b[n+i-j] = true;
            if (j < n-1){
                attempt(n,j+1,r,a,b);
            }else{
                k+=1;
            }
            r[i] = false; 
            a[i+j] = false; 
            b[n+i-j] = false;
        }
    }
}

using namespace std;

int t08_queen(){
    int n;
    cin >> n;
    bool r[n],a[2*n-1],b[2*n-1];
    for (int i=0;i<n;i++) {
        r[i] = false;
    }
    for (int i=0;i<2*n-1;i++){
        a[i] = false;
        b[i] = false;
    }
    attempt(n, 0, r, a, b);
    cout << k << endl;
    return 0;
}
