#include <iostream>
#include <cstring>
using namespace std;
#define FIO ios::sync_with_stdio(false), cie.tie(NULL), cout.tie(NULL)
int num[1001][1001] = { 0 };
int main(void){
    char a[1001];
    char b[1001];
    cin >> a >> b;
    for(int i = 1; i < strlen(a) + 1; i++){
        for(int j = 1; j < strlen(b) + 1; j++){
            if(a[i - 1] == b[j - 1])
                num[i][j] = num[i - 1][j - 1] + 1;
            else{
                num[i][j] = max(num[i][j - 1], num[i - 1][j]);
            }
        }
    }
    cout << num[strlen(a)][strlen(b)];
}