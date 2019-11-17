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
int N;
int queen[11]={-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};
int count=0;
bool available(int pointi,int pointj){
    for(int i=1;i<pointi;i++){
        if(pointj==queen[i])return false;
        if((pointi-i)==(pointj-queen[i]))return false;
        if((pointi-i)+(pointj-queen[i])==0)return false;
    }
    return true;
}
void findSpace(int queenNumber){
    for(int i=1;i<N+1;i++){

        if(available(queenNumber,i)){

            queen[queenNumber]=i;
            if(queenNumber==N){
                count++;
                return;
            }
            int nextNumber=queenNumber+1;
            findSpace(nextNumber);
        }
    }
    queen[--queenNumber]=-1;
    return;
}
int t08_queen(){
    cin>>N;
    findSpace(1);
    cout<<count<<endl;
    return 0;
}
