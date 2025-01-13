#include<iostream>
#include<cstdio>
#include<cstring>
#include<stack>

using namespace std;

int main(){
    char str[1000];

    cout << "Enter mathematical expression: ";
    gets(str);

    stack<int> stck;

    int op1, op2;

    for(int i=0;i<strlen(str);i++){
        if(str[i] >= '0' && str[i] <= '9'){
            stck.push(str[i]-'0');
        } else if(str[i] == '+' || str[i] == '-' || str[i] == '*' || str[i] == '/'){
            op1 = stck.top(); stck.pop();
            op2 = stck.top(); stck.pop();

            switch(str[i]){
                case '+':
                    stck.push(op2+op1);
                    break;
                case '-':
                    stck.push(op2-op1);
                    break;
                case '*':
                    stck.push(op2*op1);
                    break;
                case '/':
                    stck.push(op2/op1);
                    break;
            }
        }
    }

    int res = stck.top();
    cout << "Result = " << res << endl;

    return 0;
}
