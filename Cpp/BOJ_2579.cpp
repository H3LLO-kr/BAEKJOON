#include <iostream>
#define FIO ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
using namespace std;
int myscore[301][2];
int main(void){
    int n;
    cin >> n;
    int score[301] = { 0 };
    for(int i = 1; i < n + 1; i++){
        cin >> score[i];
    }
    if(n == 1){
        cout << score[1];
        return 0;
    }
    myscore[1][0] = score[1];
    myscore[1][1] = 0;
    myscore[2][0] = score[2];
    myscore[2][1] = myscore[1][0] + score[2];
    for(int i = 3; i < n + 1; i++){
        myscore[i][0] = max(myscore[i - 2][0], myscore[i - 2][1]) + score[i];
        myscore[i][1] = myscore[i - 1][0] + score[i];
    }
    cout << max(myscore[n][0], myscore[n][1]);
}