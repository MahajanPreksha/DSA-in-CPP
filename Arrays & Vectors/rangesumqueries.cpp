#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> v(n+1, 0);
    for(int i=1; i<=n; i++){
        int ele;
        cin>>ele; 
        v[i] = ele;
    }
    for(int i=1; i<=n; i++){
        v[i] += v[i-1];
    }
    int q;
    cin>>q;
    while(q--){
        int l, r;
        cin>>l>>r;
        int ans = 0;
        if(l>0){
            ans = v[r-1] - v[l-1];
        }
        else{
            ans = v[r-1];
        }
        cout<<ans<<endl;
    }
    return 0;
}