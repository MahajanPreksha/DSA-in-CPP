#include<iostream>
#include<stack>
using namespace std;
stack<int> copyStack(stack<int> &input){
    stack<int> temp;
    while(!input.empty()){
        //do the process till the time input stack doesn't become empty
        int curr = input.top();
        input.pop();
        temp.push(curr);
    }
    stack<int> res;
    while(!temp.empty()){
        int curr = temp.top();
        temp.pop();
        res.push(curr);
    }
    return res;
}
int main(){
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    stack<int> res = copyStack(st);
    while(!res.empty()){
        int curr = res.top();
        res.pop();
        cout<<curr<<endl;
    }
    return 0;
}
//Whenever we transfer data from 1 stack to another, it gets reversed.