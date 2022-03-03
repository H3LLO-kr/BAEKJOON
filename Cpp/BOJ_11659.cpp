#include <iostream>
using namespace std;
#define FIO ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
int sum[100000];
int main(void){
    FIO;
    int n; int m;
    cin >> n >> m;
    cin >> sum[0];
    for(int i = 1; i < n; i++){
        int num;
        cin >> num;
        sum[i] = sum[i - 1] + num;
    }
    for(int i = 0; i < m; i++){
        int n1; int n2;
        cin >> n1 >> n2;
        if(n1 == 1){
            cout << sum[n2 - 1] << '\n';
        }
        else{
            cout << sum[n2 - 1] - sum[n1 - 2] << '\n';
        }
    }
}
