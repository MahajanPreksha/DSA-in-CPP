#include<iostream>
using namespace std;

void f(int arr[], int i, int n){
    if(i==n){
        return;
    }
    cout<<arr[i]<<" ";
    f(arr, i+1, n);
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    f(arr, 0, n);
    return 0;
}

/* Base Case: If array is empty, print nothing.
Assumption: Assume that the function will work for the next element at (i+1) index.
Self-work: Print the ith element of the array.

Time Complexity: O(n)
Space Complexity: O(n) */