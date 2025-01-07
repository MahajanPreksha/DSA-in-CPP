#include<iostream>
#include<vector>
using namespace std;

bool arrayPartitioning(vector<int> &v){
    int totalSum = 0;
    for(int i=0; i<v.size(); i++){
        totalSum +=v[i];
    }
    int prefixSum = 0;
    for(int i=0; i<v.size(); i++){
        prefixSum +=v[i];
        int suffixSum = totalSum - prefixSum;
        if(suffixSum==prefixSum){
            return true;
        }
    }
    return false;
}

int main(){
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0; i<n; i++){
        int ele;
        cin>>ele;
        v.push_back(ele);
    }
    cout<<arrayPartitioning(v);
    return 0;
}