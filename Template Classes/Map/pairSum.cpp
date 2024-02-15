#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
vector<int> targetSumPair(vector<int> &v, int targetSum){
    unordered_map<int, int> mp;
    vector<int> ans(2, -1);
    for(int i=0; i<v.size(); i++){
        if(mp.find(targetSum-v[i])!=mp.end()){
            ans[0] = mp[targetSum - v[i]];
            ans[1] = i;
            return ans;
        }
        else{
            mp[v[i]] = i;
        }
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    int targetSum;
    cin>>targetSum;
    vector<int> ans = targetSumPair(v, targetSum);
    cout<<ans[0]<<" "<<ans[1]<<endl;
    return 0;
}
//Time Complexity: O(N)
//Space Complexity: O(N)