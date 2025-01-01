#include<iostream>
#include<climits>
#include<vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    for(int i=0; i<n; i++){
        if(v[i]==-1){
            continue;
        }
        bool isDuplicate = false;
        for(int j = i+1; j<n; j++){
            if(v[i]==v[j]){
                v[j] = -1;
                isDuplicate = true;
            }
        }
        if(isDuplicate){
            v[i] = -1;
        }
    }
    for(int i=0; i<n; i++){
        if(v[i]>0){
            cout<<v[i]<<endl;
        }
    }
    return 0;
}