#include<iostream>
using namespace std;

int f(int n, int arr[], int i){
    if(i==n-1){
        return 0;
    }
    if(i==n-2){
        return f(n, arr, i+1) + abs(arr[i]-arr[i+1]);
    }
    return min(f(n, arr, i+1) + abs(arr[i]-arr[i+1]), f(n, arr, i+2) + abs(arr[i]-arr[i+2]));
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<f(n, arr, 0);
    return 0;
}

//Time Complexity: O(2^N)
//Space Complexity: O(N)