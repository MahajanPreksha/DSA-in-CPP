#include<iostream>
#include<vector>
#include<set>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    set<int> s;
    for(auto i:v){
        s.insert(i);
    }
    auto itr = s.begin();
    itr++;
    cout<<"Second smallest number: "<<*itr<<endl;
    return 0;
}