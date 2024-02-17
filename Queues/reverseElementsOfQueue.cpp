#include<iostream>
#include<stack>
#include<queue>
using namespace std;
int main(){
    queue<int> q1;
    q1.push(10);
    q1.push(20);
    q1.push(30);
    q1.push(40);
    stack<int> st;
    while(!q1.empty()){
        st.push(q1.front());
        q1.pop();
    }
    while(!st.empty()){
        q1.push(st.top());
        st.pop();
    }
    while(!q1.empty()){
        cout<<q1.front()<<" ";
        q1.pop();
    }
    return 0;
}