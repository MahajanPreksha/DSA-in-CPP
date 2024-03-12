#include<iostream>
#include<math.h>
#include<stack>
using namespace std;
int calc(int v1, int v2, char op){
    if(op=='^'){
        return pow(v1, v2);
    }
    if(op=='*'){
        return v1 * v2;
    }
    if(op=='/'){
        return v1 / v2;
    }
    if(op=='+'){
        return v1 + v2;
    }
    return v1 - v2;
}
int precedence(char ch){
    if(ch=='^'){
        return 3;
    }
    else if(ch=='*' || ch=='/'){
        return 2;
    }
    else if(ch=='+' || ch=='-'){
        return 1;
    }
    else{
        return -1;
    }
}
int eval(string &str){
    stack<int> nums;
    stack<char> ops;
    for(int i=0; i<str.size(); i++){
        if(isdigit(str[i])){
            int num = 0;
            while(i<str.size() && isdigit(str[i])){
                num = num * 10 + (str[i] - '0');
                i++;
            }
            i--;
            nums.push(num);
        }
        else if(str[i]=='('){
            ops.push('(');
        }
        else if(str[i] ==')'){
            while(!ops.empty() && ops.top()!='('){
                char op = ops.top();
                ops.pop();
                int v2 = nums.top();
                nums.pop();
                int v1 = nums.top();
                nums.pop();
                nums.push(calc(v1, v2, op));
            }
            if(!ops.empty() && ops.top()=='('){
                ops.pop();
            }
        }
        else{
            while(!ops.empty() && precedence(ops.top())>=precedence(str[i])){
                char op = ops.top();
                ops.pop();
                int v2 = nums.top();
                nums.pop();
                int v1 = nums.top();
                nums.pop();
                nums.push(calc(v1, v2, op));
            }
            ops.push(str[i]);
        }
    }
    while(!ops.empty()){
        char op = ops.top();
        ops.pop();
        int v2 = nums.top();
        nums.pop();
        int v1 = nums.top();
        nums.pop();
        nums.push(calc(v1, v2, op));
    }
    return nums.top();
}
int main() {
    string str = "5+8+(10/5)";
    cout<<eval(str)<<endl;
    return 0;
}
//Time Complexity: O(N)
//Space Complexity: O(N)