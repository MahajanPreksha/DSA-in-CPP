#include<iostream>
using namespace std;

//Method 1: Iterative Solution
int sqRt(int n){
    int ans = -1;
    for(int i=1; i<=n; i++){
        if(i*i<=n){
            ans = i;
        }
        else{
            break;
        }
    }
    return ans;
}

//Time Complexity: O(sqrt(N))
//Space Complexity: O(1)

//Method 2: Binary Search
int sqrt(int n){
    int low = 1, high = n;
    int ans = -1;
    while(low<=high){
        int mid = low + (high - low)/2;
        if(mid*mid<=n){
            ans = mid; //Binary Search on answer
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    return ans;
}

//Time Complexity: O(log(n))
//Space Complexity: O(1)

int main(){
    int n;
    cin>>n;
    int res = sqrt(n);
    cout<<res;
    return 0;
}