#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
bool compare(string str1, string str2){
    if(str1.length() == str2.length()){
        return str1 < str2;
    }
    else{
        return str1.length() < str2.length();
    }
}

int main(void){
    int N;
    cin>>N;
    vector<string> vec;
    for(int i = 0; i < N; i++){
        string str;
        cin>>str;
        if(find(vec.begin(), vec.end(), str) == vec.end()) vec.push_back(str);
    }
    sort(vec.begin(), vec.end(), compare);
    for(int i=0; i<vec.size(); i++){
        cout<<vec[i]<<'\n';
    }
    return 0;
}