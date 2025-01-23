#include<iostream>
using namespace std;

bool f(int *arr, int n, int i, int x){ //This function returns whether element x is present in the array from index i to n-1 or not.
    if(i==n){ //Base Case: Array is exhausted
        return false;
    }
    return (arr[i]==x || f(arr, n, i+1, x)); //Assumption + Self-work
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int x;
    cin>>x;
    bool result = f(arr, n, 0, x);
    if(result){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
    return 0;
}

//Time Complexity: O(n)
//Space Complexity: O(n)