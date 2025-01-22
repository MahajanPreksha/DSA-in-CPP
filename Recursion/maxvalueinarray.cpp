#include<iostream>
using namespace std;

int f(int arr[], int i, int n){ //This function returns the maximum element in the array.
    if(i==n-1){
        return arr[i];
    }
    return max(arr[i], f(arr, i+1, n));
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<f(arr, 0, n);
    return 0;
}

/* Base Case: If array has just one element, maximum element will be equal to the present element.
Assumption: We will assume that the function works for f(arr, i+1, n) i.e. it successfully finds out the maximum element in the remaining array.
Self-work: Compare the maximum of the remaining array with the present element and return the maximum of the two.

Time Complexity: O(N)
Space Complexity: O(N) */