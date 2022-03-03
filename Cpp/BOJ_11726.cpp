#include <iostream>
#define FIO ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;
int main(void){
    FIO;
    int n;
    cin >> n;
    int tile[1001] = {};
    tile[1] = 1;
    tile[2] = 2;
    for(int i = 3; i < n + 1; i++){
        tile[i] = (tile[i - 1] + tile[i - 2]) % 10007;
    }
    cout << tile[n];
}