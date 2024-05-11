#include<iostream>
#include<vector>
#include<queue>
using namespace std;
vector<pair<int, int>> kClosestPoints(vector<pair<int, int>> pts, int n, int k){
    priority_queue<pair<int, pair<int, int>>> pq; //Max Heap
    for(auto &pt:pts){
        int distance = pt.first + pt.second;
        pq.push(make_pair(distance, pt));
        if(pq.size()>k){
            pq.pop(); //remove largest distance point in k+1 points
        }
    }
    vector<pair<int, int>> ans(k);
    while(!pq.empty()){
        ans[pq.size()-1] = pq.top().second;
        pq.pop();
    }
    return ans;
}
int main(){
    int n, k;
    cin>>n>>k;
    vector<pair<int, int>> pts(n);
    for(auto &pt:pts){
        cin>>pt.first>>pt.second;
    }
    vector<pair<int, int>> anspts = kClosestPoints(pts, n, k);
    for(auto &pt:anspts){
        cout<<pt.first<<" "<<pt.second<<endl;
    }
}
//Manhattan distance: Sum of distances between x and y coordinates.
//It is calculated as (x2-x1) + (y2-y1).