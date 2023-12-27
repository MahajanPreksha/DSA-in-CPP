#include<iostream>
#include<stack>
using namespace std;
stack<int> insertAtBottom(stack<int> &input, int val){
    stack<int> temp;
    while(!input.empty()){
        int curr = input.top();
        input.pop();
        temp.push(curr);
    }
    input.push(val);
    while(!temp.empty()){
        int curr = temp.top();
        temp.pop();
        input.push(curr);
    }
    return input;
}
int main(){
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    stack<int> res = insertAtBottom(st, 5);
    while(!res.empty()){
        int curr = res.top();
        res.pop();
        cout<<curr<<endl;
    }
    return 0;
}
//Time Complexity: O(n)
//Space Complexity: O(n) where n = number of elements