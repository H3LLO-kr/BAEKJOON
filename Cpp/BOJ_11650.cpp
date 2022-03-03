#include <iostream>
#include <algorithm>
using namespace std;

typedef struct coordinate {
    int x;
    int y;
}coordinate;

bool compare(const coordinate& a1, const coordinate& a2){
    if(a1.x == a2.x) return a1.y < a2.y;
    else return a1.x < a2.x;
}

int main(void){
    coordinate a[100000];
    int T;
    cin >> T;
    for(int i = 0; i < T; i++){
        cin >> a[i].x >> a[i].y;
    }
    sort(a, a + T, compare);
    for(int i = 0; i < T; i++){
        cout << a[i].x << " " << a[i].y << "\n";
    }
    return 0;
}