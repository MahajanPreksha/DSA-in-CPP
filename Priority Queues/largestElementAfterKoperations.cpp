#include<iostream>
#include<queue>
#include<vector>
using namespace std;
int largestEle(vector<int> v, int n, int k){
    priority_queue<int, vector<int>, greater<int>> pq; //Min Heap
    for(auto i:v){
        pq.push(i);
    }
    while(k--){
        int first = pq.top();
        pq.pop();
        int second = pq.top();
        pq.pop();
        int product = first * second;
        pq.push(product);
    }
    //Find largest element in pq
    while(pq.size()>1){
        pq.pop();
    }
    return pq.top();
}
int main(){
    int n, k;
    cin>>n>>k;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    cout<<largestEle(v, n, k)<<endl;
    return 0;
}
//Time Complexity: n + k log n