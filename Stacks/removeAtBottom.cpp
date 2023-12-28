#include<iostream>
#include<stack>
using namespace std;
void removeAtBottom(stack<int> &input){
    stack<int> temp;
    while(!input.empty()){
        int curr = input.top();
        input.pop();
        temp.push(curr);
    }
    temp.pop();
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
    removeAtBottom(st);
    while(!st.empty()){
        int curr = st.top();
        st.pop();
        cout<<curr<<endl;
    }
    return 0;
}
//For removal at any index, pop out elements for (n - idx - 1) times.