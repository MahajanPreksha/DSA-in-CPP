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
    int x;
    cin>>x;
    int count = 0;
    for(int i=0; i<n; i++){
        if(v[i]>x){
            count++;
        }
    }
    cout<<count;
    return 0;
}