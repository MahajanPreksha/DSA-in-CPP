#include<iostream>
#include<vector>
using namespace std;

int f(vector<int> &v, int x){
    int low = 0, high = v.size() - 1;
    int ans = -1;
    while(low<=high){
        int mid = low + (high - low)/2;
        if(v[mid]==x){
            ans =  mid;
            high = mid - 1;
        }
        else if(v[mid]<x){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    return ans;
}

int main(){
    vector<int> v = {2, 5, 5, 5, 6, 6, 8, 9, 9, 9};
    int x = 5;
    cout<<f(v, x);
    return 0;
}

//Time Complexity: O(log N)
//Space Complexity: O(1)