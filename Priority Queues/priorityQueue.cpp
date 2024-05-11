#include<iostream>
#include<queue>
using namespace std;
int main(){
    //Max Heap
    priority_queue<int> pq1;
    pq1.push(4);
    pq1.push(7);
    pq1.push(2);
    pq1.push(10);
    cout<<pq1.top()<<endl; //Accessing top element
    //Accessing all elements
    while(!pq1.empty()){
        cout<<pq1.top()<<" ";
        pq1.pop();
    }
    cout<<endl;
    //Min Heap
    priority_queue<int, vector<int>, greater<int>> pq2;
    pq2.push(4);
    pq2.push(7);
    pq2.push(2);
    pq2.push(10);
    cout<<pq2.top()<<endl; //Accessing top element
    //Accessing all elements
    while(!pq2.empty()){
        cout<<pq2.top()<<" ";
        pq2.pop();
    }
    return 0;
}