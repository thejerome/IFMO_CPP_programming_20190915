#include<iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n=0,m=0;
    cin >> n >> m;
    int mas[n][m];
    int k = 1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            mas[i][j] = 0;
        }
    }
    mas[0][0]=1;
    int i = 0;
    int j = 0;
    while ((mas[i][j + 1] == 0 and j < m - 1) or (mas[i + 1][j] == 0 and i < n - 1) or (mas[i][j - 1] == 0 and j > 0) or (mas[i - 1][j] == 0 and i > 0)) {
       while (mas[i][j + 1] == 0 and j < (m - 1)) {
           mas[i][j+1] = k++;
           j++;
       }
        while (mas[i + 1][j] == 0 and i < (n - 1)) {
            mas[i + 1][j] = k++;
            i++;
        }
        while (mas[i][j - 1] == 0 and j > 0) {
            mas[i][j - 1] = k++;
            j--;
        }
        while (mas[i - 1][j] == 0 and i > 0) {
            mas[i - 1][j] = k++;
            i--;
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (mas[i][j] % 10 == mas[i][j]) cout << "   ";
            else if (mas[i][j] % 100 == mas[i][j]) cout << "  ";
            else if (mas[i][j] % 1000 == mas[i][j]) cout << " ";
            cout << mas[i][j];
        }
        cout << endl;
    }
    return 0;
}
