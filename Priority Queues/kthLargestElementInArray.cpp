#include<iostream>
#include<vector>
#include<queue>
using namespace std;
int kthLargestElement(vector<int> a, int n, int k){
    priority_queue<int, vector<int>, greater<int>> pq; //Min Heap
    for(int i=0; i<n; i++){
        pq.push(a[i]);
        if(pq.size()>k){
            pq.pop(); //removing the smallest element out of k + 1 elements
        }
    }
    return pq.top();
}
int main(){
    int n, k;
    cin>>n>>k;
    vector<int> a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    cout<<kthLargestElement(a, n, k)<<endl;
    return 0;
}