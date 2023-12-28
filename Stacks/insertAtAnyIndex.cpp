#include<iostream>
#include<stack>
using namespace std;
void insertAtIndex(stack<int> &input, int idx, int val){
    stack<int> temp;
    int n = input.size();
    int count = 0;
    while(count<n-idx){
        count++;
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
}
int main(){
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    insertAtIndex(st, 1, 100);
    while(!st.empty()){
        int curr = st.top();
        st.pop();
        cout<<curr<<endl;
    }
    return 0;
}