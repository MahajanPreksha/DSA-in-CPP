#include<iostream>
#include<vector>
using namespace std;

int main(){
    int arr[] = {1, 2, 4, 5, 3};
    int n = sizeof(arr)/sizeof(arr[0]);
    bool flag = true;
    for(int i=1; i<n; i++){
        if(arr[i]<=arr[i-1]){
            flag = false;
            break;
        }
    }
    if(flag){
        cout<<"Array is sorted.";
    }
    else{
        cout<<"Array is not sorted.";
    }
    return 0;
}