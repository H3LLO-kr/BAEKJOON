#include <stack>
#include <iostream>
#include <string.h>
using namespace std;
int main(void) {
    char input[100] = {};
    cin >> input;
    stack<char> stk;
    for (int i = 0; i < strlen(input); i++) {
        if (input[i] == '(')
            stk.push(input[i]);
        else if(input[i] == '*' || input[i] == '/'){
            while(stk.empty() == 0 && (stk.top() == '*' || stk.top() == '/')){
                cout << stk.top();
                stk.pop();
            }
            stk.push(input[i]);
        }
        else if (input[i] == '+' || input[i] == '-') {
            while (stk.empty() == 0 && stk.top() != '(') {
                cout << stk.top();
                stk.pop();
            }
            stk.push(input[i]);
        }
        else if (input[i] == ')') {
            while (stk.top() != '(') {
                cout << stk.top();
                stk.pop();
            }
            stk.pop();
        }
        else {
            cout << input[i];
        }
    }
    while (stk.empty() == 0) {
        cout << stk.top();
        stk.pop();
    }
    return 0;
}