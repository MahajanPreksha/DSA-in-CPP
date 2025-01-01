#include<iostream>
#include<vector>
using namespace std;

void sortOddAndEven(vector<int>& v, int n){
    int left = 0, right = n - 1;
    while(left<right){
        if(v[left]%2!=0 && v[right]%2==0){
            swap(v[left], v[right]);
            left++;
            right--;
        }
        else if(v[left]%2==0){
            left++;
        }
        else if(v[right]%2!=0){
            right--;
        }
    }
}

int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    sortOddAndEven(v, n);
    for(int i=0; i<n; i++){
        cout<<v[i]<<" ";
    }
    return 0;
}