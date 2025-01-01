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

    int occurrence = -1;

    //Method 1
    for(int i=0; i<n; i++){
        if(v[i]==x){
            occurrence = i;
        }
    }
    cout<<occurrence<<endl;

    //Method 2
    for(int i=n-1; i>=0; i--){
        if(v[i]==x){
            occurrence = i;
            break;
        }
    }
    cout<<occurrence<<endl;

    return 0;
}