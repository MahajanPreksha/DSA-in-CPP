#include<iostream>
using namespace std;

int f(int arr[], int i, int n){
    if(i==n-1){
        return arr[i];
    }
    return arr[i] + f(arr, i+1, n);
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

/* Base Case: If there is only one element in the array, then sum of elements of the array is equal to the given element.
Assumption: Assume that function will work for all the other elements.
Self-work: The sum of elements of the array is equal to the sum of the first element and the sum of the rest of the elements of the array.

Time Complexity: O(N)
Space Complexity: O(N) */