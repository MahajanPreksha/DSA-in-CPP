#include<iostream>
#include<stack>
using namespace std;
void copyStack(stack<int> &input, stack<int> &result){
    if(input.empty()){
        return;
    }
    int curr = input.top();
    input.pop();
    copyStack(input, result);
    result.push(curr);
}
int main(){
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    stack<int> res;
    copyStack(st, res);
    while(!res.empty()){
        int curr = res.top();
        res.pop();
        cout<<curr<<endl;
    }
    return 0;
}