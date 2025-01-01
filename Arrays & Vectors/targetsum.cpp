#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    int target;
    cin>>target;
    int count = 0;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(v[i]+v[j]==target){
                count++;
            }
        }
    }
    cout<<count;
    return 0;
}