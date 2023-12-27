#include<iostream>
#include<stack>
using namespace std;
void insertAtBottom(stack<int> &input, int val){
    if(input.empty()){
        input.push(val);
        return;
    }
    int curr = input.top();
    input.pop();
    insertAtBottom(input, val);
    input.push(curr);
}
int main(){
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    insertAtBottom(st, 5);
    while(!st.empty()){
        int curr = st.top();
        st.pop();
        cout<<curr<<endl;
    }
    return 0;
}
//Time Complexity: O(n)
//Space Complexity: O(n) where n = number of elements