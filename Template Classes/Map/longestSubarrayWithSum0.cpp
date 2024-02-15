#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
int maxLengthZeroSumSubarray(vector<int> &v){
    unordered_map<int, int> m;
    int prefixSum = 0;
    int maxLen = 0;
    for(int i=0; i<v.size(); i++){
        prefixSum +=v[i];
        if(prefixSum==0){
            maxLen++;
        }
        if(m.find(prefixSum)!=m.end()){
            maxLen = max(maxLen, i - m[prefixSum]);
        }
        else{
            m[prefixSum] = i;
        }
    }
    return maxLen;
}
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    cout<<maxLengthZeroSumSubarray(v)<<endl;
    return 0;
}
//Time Complexity: O(N) where N = Length of vector
//Space Complexity: O(N) as we are using map (extra space)