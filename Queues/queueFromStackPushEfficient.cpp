#include<iostream>
#include<stack>
using namespace std;
class Queue{
    private:
    stack<int> st;
    public:
    Queue(){

    }
    void push(int x){ //queue.enqueue
    /*Time Complexity: O(1)*/
        this->st.push(x);
    }
    void pop(){ //queue.dequeue
    
        if(st.empty()){
            return;
        }
        stack<int> temp;
        while(this->st.size()>1){
            temp.push(st.top());
            st.pop();
        }
        //now, stack size is 1 and we are at the bottom element
        while(!temp.empty()){
            this->st.push(temp.top());
            temp.pop();
        }
    }
    bool empty(){
    /*Time Complexity: O(1)*/
        return this->st.empty();
    }
    int front(){
    /*Time Complexity: O(N)*/
        if(st.empty()){
            return 0;
        }
        stack<int> temp;
        while(this->st.size()>1){
            temp.push(st.top());
        }
        int result = this->st.top();
        while(!temp.empty()){
            this->st.push(temp.top());
            temp.pop();
        }
        return result;
    }
};
int main(){
    Queue q1;
    q1.push(10);
    q1.push(20);
    q1.push(30);
    q1.pop();
    while(!q1.empty()){
        cout<<q1.front()<<" ";
        q1.pop();
    }
    return 0;
}
